# This shell script emits a C file. -*- C -*-
# It does some substitutions.
cat >e${EMULATION_NAME}.c <<EOF
/* This file is is generated by a shell script.  DO NOT EDIT! */

/* 32 bit ELF emulation code for ${EMULATION_NAME}
   Copyright (C) 1991, 1993, 1994 Free Software Foundation, Inc.
   Written by Steve Chamberlain <sac@cygnus.com>
   ELF support by Ian Lance Taylor <ian@cygnus.com>

This file is part of GLD, the Gnu Linker.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

#define TARGET_IS_${EMULATION_NAME}

#include "bfd.h"
#include "sysdep.h"

#include <ctype.h>

#include "bfdlink.h"

#include "ld.h"
#include "config.h"
#include "ldmain.h"
#include "ldemul.h"
#include "ldfile.h"
#include "ldmisc.h"
#include "ldexp.h"
#include "ldlang.h"
#include "ldgram.h"

static void gld${EMULATION_NAME}_before_parse PARAMS ((void));
static boolean gld${EMULATION_NAME}_open_dynamic_archive
  PARAMS ((const char *, lang_input_statement_type *));
static void gld${EMULATION_NAME}_before_allocation PARAMS ((void));
static void gld${EMULATION_NAME}_find_statement_assignment
  PARAMS ((lang_statement_union_type *));
static void gld${EMULATION_NAME}_find_exp_assignment PARAMS ((etree_type *));
static boolean gld${EMULATION_NAME}_place_orphan
  PARAMS ((lang_input_statement_type *, asection *));
static void gld${EMULATION_NAME}_place_section
  PARAMS ((lang_statement_union_type *));
static char *gld${EMULATION_NAME}_get_script PARAMS ((int *isfile));

static void
gld${EMULATION_NAME}_before_parse()
{
  ldfile_output_architecture = bfd_arch_${ARCH};
  config.dynamic_link = ${DYNAMIC_LINK-true};
}

/* Try to open a dynamic archive.  This is where we know that ELF
   dynamic libraries have an extension of .so.  */

static boolean
gld${EMULATION_NAME}_open_dynamic_archive (arch, entry)
     const char *arch;
     lang_input_statement_type *entry;
{
  const char *filename;

  filename = entry->filename;

  if (! ldfile_open_file_search (arch, entry, "lib", ".so"))
    return false;

  /* We have found a dynamic object to include in the link.  The ELF
     backend linker will create a DT_NEEDED entry in the .dynamic
     section naming this file.  If this file includes a DT_SONAME
     entry, it will be used.  Otherwise, the ELF linker will just use
     the name of the file.  For an archive found by searching, like
     this one, the DT_NEEDED entry should consist of just the name of
     the file, without the path information used to find it.  Note
     that we only need to do this if we have a dynamic object; an
     archive will never be referenced by a DT_NEEDED entry.

     FIXME: This approach--using bfd_elf_set_dt_needed_name--is not
     very pretty.  I haven't been able to think of anything that is
     pretty, though.  */
  if (bfd_check_format (entry->the_bfd, bfd_object)
      && (entry->the_bfd->flags & DYNAMIC) != 0)
    {
      char *needed_name;

      ASSERT (entry->is_archive && entry->search_dirs_flag);
      needed_name = (char *) xmalloc (strlen (filename)
				      + strlen (arch)
				      + sizeof "lib.so");
      sprintf (needed_name, "lib%s%s.so", filename, arch);
      bfd_elf_set_dt_needed_name (entry->the_bfd, needed_name);
    }

  return true;
}

/* This is called after the sections have been attached to output
   sections, but before any sizes or addresses have been set.  */

static void
gld${EMULATION_NAME}_before_allocation ()
{
  asection *sinterp;

  /* If we are going to make any variable assignments, we need to let
     the ELF backend know about them in case the variables are
     referred to by dynamic objects.  */
  lang_for_each_statement (gld${EMULATION_NAME}_find_statement_assignment);

  /* Let the ELF backend work out the sizes of any sections required
     by dynamic linking.  */
  if (! bfd_elf32_size_dynamic_sections (output_bfd,
					 command_line.soname,
					 command_line.rpath,
					 &link_info,
					 &sinterp))
    einfo ("%P%F: failed to set dynamic section sizes: %E\n");

  /* Let the user override the dynamic linker we are using.  */
  if (command_line.interpreter != NULL
      && sinterp != NULL)
    {
      sinterp->contents = (bfd_byte *) command_line.interpreter;
      sinterp->_raw_size = strlen (command_line.interpreter) + 1;
    }
}

/* This is called by the before_allocation routine via
   lang_for_each_statement.  It locates any assignment statements, and
   tells the ELF backend about them, in case they are assignments to
   symbols which are referred to by dynamic objects.  */

static void
gld${EMULATION_NAME}_find_statement_assignment (s)
     lang_statement_union_type *s;
{
  if (s->header.type == lang_assignment_statement_enum)
    gld${EMULATION_NAME}_find_exp_assignment (s->assignment_statement.exp);
}

/* Look through an expression for an assignment statement.  */

static void
gld${EMULATION_NAME}_find_exp_assignment (exp)
     etree_type *exp;
{
  switch (exp->type.node_class)
    {
    case etree_assign:
      if (strcmp (exp->assign.dst, ".") != 0)
	{
	  if (! bfd_elf32_record_link_assignment (output_bfd, &link_info,
						  exp->assign.dst))
	    einfo ("%P%F: failed to record assignment to %s: %E\n",
		   exp->assign.dst);
	}
      gld${EMULATION_NAME}_find_exp_assignment (exp->assign.src);
      break;

    case etree_binary:
      gld${EMULATION_NAME}_find_exp_assignment (exp->binary.lhs);
      gld${EMULATION_NAME}_find_exp_assignment (exp->binary.rhs);
      break;

    case etree_trinary:
      gld${EMULATION_NAME}_find_exp_assignment (exp->trinary.lhs);
      gld${EMULATION_NAME}_find_exp_assignment (exp->trinary.lhs);
      gld${EMULATION_NAME}_find_exp_assignment (exp->trinary.rhs);
      break;

    case etree_unary:
      gld${EMULATION_NAME}_find_exp_assignment (exp->unary.child);
      break;

    default:
      break;
    }
}

/* Place an orphan section.  We use this to put random SHF_ALLOC
   sections in the right segment.  */

static asection *hold_section;
static lang_output_section_statement_type *hold_use;
static lang_output_section_statement_type *hold_text;
static lang_output_section_statement_type *hold_data;
static lang_output_section_statement_type *hold_bss;

/*ARGSUSED*/
static boolean
gld${EMULATION_NAME}_place_orphan (file, s)
     lang_input_statement_type *file;
     asection *s;
{
  lang_output_section_statement_type *place;
  asection *snew, **pps;
  lang_statement_list_type *old;
  lang_statement_list_type add;
  etree_type *address;
  const char *secname, *ps;
  lang_output_section_statement_type *os;

  if ((s->flags & SEC_ALLOC) == 0)
    return false;

  /* Look through the script to see where to place this section.  */
  hold_section = s;
  hold_use = NULL;
  lang_for_each_statement (gld${EMULATION_NAME}_place_section);

  if (hold_use != NULL)
    {
      /* We have already placed a section with this name.  */
      wild_doit (&hold_use->children, s, hold_use, file);
      return true;
    }

  /* Decide which segment the section should go in based on the
     section flags.  */
  place = NULL;
  if ((s->flags & SEC_HAS_CONTENTS) == 0
      && hold_bss != NULL)
    place = hold_bss;
  else if ((s->flags & SEC_READONLY) == 0
	   && hold_data != NULL)
    place = hold_data;
  else if ((s->flags & SEC_READONLY) != 0
	   && hold_text != NULL)
    place = hold_text;
  if (place == NULL)
    return false;

  secname = bfd_get_section_name (s->owner, s);

  /* Create the section in the output file, and put it in the right
     place.  This shuffling to make the output file look neater, and
     also means that the BFD backend does not have to sort the
     sections in order by address.  */
  snew = bfd_make_section (output_bfd, secname);
  if (snew == NULL)
      einfo ("%P%F: output format %s cannot represent section called %s\n",
	     output_bfd->xvec->name, secname);
  for (pps = &output_bfd->sections; *pps != snew; pps = &(*pps)->next)
    ;
  *pps = snew->next;
  snew->next = place->bfd_section->next;
  place->bfd_section->next = snew;

  /* Start building a list of statements for this section.  */
  old = stat_ptr;
  stat_ptr = &add;
  lang_list_init (stat_ptr);

  /* If the name of the section is representable in C, then create
     symbols to mark the start and the end of the section.  */
  for (ps = secname; *ps != '\0'; ps++)
    if (! isalnum (*ps) && *ps != '_')
      break;
  if (*ps == '\0' && config.build_constructors)
    {
      char *symname;

      symname = (char *) xmalloc (ps - secname + sizeof "__start_");
      sprintf (symname, "__start_%s", secname);
      lang_add_assignment (exp_assop ('=', symname,
				      exp_nameop (NAME, ".")));
    }

  if (! link_info.relocateable)
    address = NULL;
  else
    address = exp_intop ((bfd_vma) 0);

  lang_enter_output_section_statement (secname, address, 0,
				       (bfd_vma) 0,
				       (etree_type *) NULL,
				       (etree_type *) NULL,
				       (etree_type *) NULL);

  os = lang_output_section_statement_lookup (secname);
  wild_doit (&os->children, s, os, file);

  lang_leave_output_section_statement ((bfd_vma) 0, "*default*");
  stat_ptr = &add;

  if (*ps == '\0' && config.build_constructors)
    {
      char *symname;

      symname = (char *) xmalloc (ps - secname + sizeof "__stop_");
      sprintf (symname, "__stop_%s", secname);
      lang_add_assignment (exp_assop ('=', symname,
				      exp_nameop (NAME, ".")));
    }

  /* Now stick the new statement list right after PLACE.  */
  *add.tail = place->header.next;
  place->header.next = add.head;

  stat_ptr = old;

  return true;
}

static void
gld${EMULATION_NAME}_place_section (s)
     lang_statement_union_type *s;
{
  lang_output_section_statement_type *os;

  if (s->header.type != lang_output_section_statement_enum)
    return;

  os = &s->output_section_statement;

  if (strcmp (os->name, hold_section->name) == 0)
    hold_use = os;

  if (strcmp (os->name, ".text") == 0)
    hold_text = os;
  else if (strcmp (os->name, ".data") == 0)
    hold_data = os;
  else if (strcmp (os->name, ".bss") == 0)
    hold_bss = os;
}

static char *
gld${EMULATION_NAME}_get_script(isfile)
     int *isfile;
EOF

if test -n "$COMPILE_IN"
then
# Scripts compiled in.

# sed commands to quote an ld script as a C string.
sc='s/["\\]/\\&/g
s/$/\\n\\/
1s/^/"/
$s/$/n"/
'

cat >>e${EMULATION_NAME}.c <<EOF
{			     
  *isfile = 0;

  if (link_info.relocateable == true && config.build_constructors == true)
    return `sed "$sc" ldscripts/${EMULATION_NAME}.xu`;
  else if (link_info.relocateable == true)
    return `sed "$sc" ldscripts/${EMULATION_NAME}.xr`;
  else if (!config.text_read_only)
    return `sed "$sc" ldscripts/${EMULATION_NAME}.xbn`;
  else if (!config.magic_demand_paged)
    return `sed "$sc" ldscripts/${EMULATION_NAME}.xn`;
  else if (link_info.shared)
    return `sed "$sc" ldscripts/${EMULATION_NAME}.xs`;
  else
    return `sed "$sc" ldscripts/${EMULATION_NAME}.x`;
}
EOF

else
# Scripts read from the filesystem.

cat >>e${EMULATION_NAME}.c <<EOF
{			     
  *isfile = 1;

  if (link_info.relocateable == true && config.build_constructors == true)
    return "ldscripts/${EMULATION_NAME}.xu";
  else if (link_info.relocateable == true)
    return "ldscripts/${EMULATION_NAME}.xr";
  else if (!config.text_read_only)
    return "ldscripts/${EMULATION_NAME}.xbn";
  else if (!config.magic_demand_paged)
    return "ldscripts/${EMULATION_NAME}.xn";
  else if (link_info.shared)
    return "ldscripts/${EMULATION_NAME}.xs";
  else
    return "ldscripts/${EMULATION_NAME}.x";
}
EOF

fi

cat >>e${EMULATION_NAME}.c <<EOF

struct ld_emulation_xfer_struct ld_${EMULATION_NAME}_emulation = 
{
  gld${EMULATION_NAME}_before_parse,
  syslib_default,
  hll_default,
  after_parse_default,
  after_allocation_default,
  set_output_arch_default,
  ldemul_default_target,
  gld${EMULATION_NAME}_before_allocation,
  gld${EMULATION_NAME}_get_script,
  "${EMULATION_NAME}",
  "${OUTPUT_FORMAT}",
  NULL,
  NULL,
  gld${EMULATION_NAME}_open_dynamic_archive,
  gld${EMULATION_NAME}_place_orphan
};
EOF
