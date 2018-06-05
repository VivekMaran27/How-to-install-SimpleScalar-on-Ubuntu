/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 21 "./ldgram.y" /* yacc.c:339  */

/*

 */

#define DONTDECLARE_MALLOC

#include "bfd.h"
#include "sysdep.h"
#include "bfdlink.h"
#include "ld.h"    
#include "ldexp.h"
#include "ldver.h"
#include "ldlang.h"
#include "ldemul.h"
#include "ldfile.h"
#include "ldmisc.h"
#include "ldmain.h"
#include "mri.h"
#include "ldlex.h"

static int typebits;

lang_memory_region_type *region;


char *current_file;
boolean ldgram_want_filename = true;
boolean had_script = false;
boolean force_make_executable = false;

boolean ldgram_in_script = false;
boolean ldgram_had_equals = false;


#define ERROR_NAME_MAX 20
static char *error_names[ERROR_NAME_MAX];
static int error_index;
#define PUSH_ERROR(x) if (error_index < ERROR_NAME_MAX) error_names[error_index] = x; error_index++;
#define POP_ERROR()   error_index--;

#line 108 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    NAME = 259,
    PLUSEQ = 260,
    MINUSEQ = 261,
    MULTEQ = 262,
    DIVEQ = 263,
    LSHIFTEQ = 264,
    RSHIFTEQ = 265,
    ANDEQ = 266,
    OREQ = 267,
    OROR = 268,
    ANDAND = 269,
    EQ = 270,
    NE = 271,
    LE = 272,
    GE = 273,
    LSHIFT = 274,
    RSHIFT = 275,
    UNARY = 276,
    END = 277,
    ALIGN_K = 278,
    BLOCK = 279,
    QUAD = 280,
    LONG = 281,
    SHORT = 282,
    BYTE = 283,
    SECTIONS = 284,
    SIZEOF_HEADERS = 285,
    OUTPUT_FORMAT = 286,
    FORCE_COMMON_ALLOCATION = 287,
    OUTPUT_ARCH = 288,
    INCLUDE = 289,
    MEMORY = 290,
    DEFSYMEND = 291,
    NOLOAD = 292,
    DSECT = 293,
    COPY = 294,
    INFO = 295,
    OVERLAY = 296,
    DEFINED = 297,
    TARGET_K = 298,
    SEARCH_DIR = 299,
    MAP = 300,
    ENTRY = 301,
    SIZEOF = 302,
    NEXT = 303,
    ADDR = 304,
    STARTUP = 305,
    HLL = 306,
    SYSLIB = 307,
    FLOAT = 308,
    NOFLOAT = 309,
    ORIGIN = 310,
    FILL = 311,
    LENGTH = 312,
    CREATE_OBJECT_SYMBOLS = 313,
    INPUT = 314,
    GROUP = 315,
    OUTPUT = 316,
    CONSTRUCTORS = 317,
    ALIGNMOD = 318,
    AT = 319,
    PROVIDE = 320,
    CHIP = 321,
    LIST = 322,
    SECT = 323,
    ABSOLUTE = 324,
    LOAD = 325,
    NEWLINE = 326,
    ENDWORD = 327,
    ORDER = 328,
    NAMEWORD = 329,
    FORMAT = 330,
    PUBLIC = 331,
    BASE = 332,
    ALIAS = 333,
    TRUNCATE = 334,
    REL = 335,
    INPUT_SCRIPT = 336,
    INPUT_MRI_SCRIPT = 337,
    INPUT_DEFSYM = 338
  };
#endif
/* Tokens.  */
#define INT 258
#define NAME 259
#define PLUSEQ 260
#define MINUSEQ 261
#define MULTEQ 262
#define DIVEQ 263
#define LSHIFTEQ 264
#define RSHIFTEQ 265
#define ANDEQ 266
#define OREQ 267
#define OROR 268
#define ANDAND 269
#define EQ 270
#define NE 271
#define LE 272
#define GE 273
#define LSHIFT 274
#define RSHIFT 275
#define UNARY 276
#define END 277
#define ALIGN_K 278
#define BLOCK 279
#define QUAD 280
#define LONG 281
#define SHORT 282
#define BYTE 283
#define SECTIONS 284
#define SIZEOF_HEADERS 285
#define OUTPUT_FORMAT 286
#define FORCE_COMMON_ALLOCATION 287
#define OUTPUT_ARCH 288
#define INCLUDE 289
#define MEMORY 290
#define DEFSYMEND 291
#define NOLOAD 292
#define DSECT 293
#define COPY 294
#define INFO 295
#define OVERLAY 296
#define DEFINED 297
#define TARGET_K 298
#define SEARCH_DIR 299
#define MAP 300
#define ENTRY 301
#define SIZEOF 302
#define NEXT 303
#define ADDR 304
#define STARTUP 305
#define HLL 306
#define SYSLIB 307
#define FLOAT 308
#define NOFLOAT 309
#define ORIGIN 310
#define FILL 311
#define LENGTH 312
#define CREATE_OBJECT_SYMBOLS 313
#define INPUT 314
#define GROUP 315
#define OUTPUT 316
#define CONSTRUCTORS 317
#define ALIGNMOD 318
#define AT 319
#define PROVIDE 320
#define CHIP 321
#define LIST 322
#define SECT 323
#define ABSOLUTE 324
#define LOAD 325
#define NEWLINE 326
#define ENDWORD 327
#define ORDER 328
#define NAMEWORD 329
#define FORMAT 330
#define PUBLIC 331
#define BASE 332
#define ALIAS 333
#define TRUNCATE 334
#define REL 335
#define INPUT_SCRIPT 336
#define INPUT_MRI_SCRIPT 337
#define INPUT_DEFSYM 338

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 62 "./ldgram.y" /* yacc.c:355  */

  bfd_vma integer;
  char *name;
  int token;
  union etree_union *etree;

#line 321 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 338 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   783

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   105,     2,     2,     2,    33,    20,     2,
      36,   102,    31,    29,   100,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    15,   101,
      23,     9,    24,    14,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,    18,    45,   106,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,    10,    11,    12,    13,    16,    17,
      21,    22,    25,    26,    27,    28,    34,    35,    37,    38,
      39,    40,    41,    42,    43,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   116,   116,   117,   118,   122,   126,   126,   135,   135,
     145,   146,   150,   151,   152,   155,   158,   159,   160,   162,
     164,   166,   168,   170,   172,   174,   176,   178,   179,   180,
     182,   184,   186,   188,   190,   194,   195,   196,   200,   202,
     206,   208,   213,   213,   224,   225,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   241,   243,   245,   248,   250,
     252,   254,   256,   255,   259,   262,   261,   266,   269,   272,
     278,   282,   283,   284,   288,   290,   294,   296,   301,   306,
     305,   312,   311,   317,   316,   324,   325,   329,   330,   335,
     336,   341,   352,   353,   356,   358,   362,   364,   366,   368,
     373,   380,   386,   388,   390,   392,   394,   396,   398,   400,
     405,   405,   410,   414,   422,   430,   430,   434,   438,   439,
     440,   445,   444,   450,   456,   465,   469,   474,   479,   480,
     485,   487,   493,   495,   497,   501,   503,   508,   508,   514,
     516,   518,   520,   522,   524,   527,   529,   531,   533,   535,
     537,   539,   541,   543,   545,   547,   549,   551,   553,   555,
     557,   559,   561,   563,   565,   567,   569,   572,   574,   576,
     578,   580,   582,   588,   589,   592,   594,   596,   600,   601,
     592,   610,   611,   612,   613,   614,   615,   620,   621,   622,
     623,   627,   629
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "NAME", "PLUSEQ", "MINUSEQ",
  "MULTEQ", "DIVEQ", "'='", "LSHIFTEQ", "RSHIFTEQ", "ANDEQ", "OREQ", "'?'",
  "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "EQ", "NE", "'<'", "'>'",
  "LE", "GE", "LSHIFT", "RSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "END", "'('", "ALIGN_K", "BLOCK", "QUAD", "LONG", "SHORT",
  "BYTE", "SECTIONS", "'{'", "'}'", "SIZEOF_HEADERS", "OUTPUT_FORMAT",
  "FORCE_COMMON_ALLOCATION", "OUTPUT_ARCH", "INCLUDE", "MEMORY",
  "DEFSYMEND", "NOLOAD", "DSECT", "COPY", "INFO", "OVERLAY", "DEFINED",
  "TARGET_K", "SEARCH_DIR", "MAP", "ENTRY", "SIZEOF", "NEXT", "ADDR",
  "STARTUP", "HLL", "SYSLIB", "FLOAT", "NOFLOAT", "ORIGIN", "FILL",
  "LENGTH", "CREATE_OBJECT_SYMBOLS", "INPUT", "GROUP", "OUTPUT",
  "CONSTRUCTORS", "ALIGNMOD", "AT", "PROVIDE", "CHIP", "LIST", "SECT",
  "ABSOLUTE", "LOAD", "NEWLINE", "ENDWORD", "ORDER", "NAMEWORD", "FORMAT",
  "PUBLIC", "BASE", "ALIAS", "TRUNCATE", "REL", "INPUT_SCRIPT",
  "INPUT_MRI_SCRIPT", "INPUT_DEFSYM", "','", "';'", "')'", "'['", "']'",
  "'!'", "'~'", "$accept", "file", "filename", "defsym_expr", "$@1",
  "mri_script_file", "$@2", "mri_script_lines", "mri_script_command",
  "ordernamelist", "mri_load_name_list", "mri_abs_name_list",
  "script_file", "$@3", "ifile_list", "ifile_p1", "$@4", "$@5",
  "input_list", "sections", "sec_or_group_p1", "statement_anywhere",
  "file_NAME_list", "input_section_spec", "$@6", "$@7", "$@8", "statement",
  "statement_list", "statement_list_opt", "length", "fill_opt",
  "assign_op", "end", "assignment", "opt_comma", "memory",
  "memory_spec_list", "memory_spec", "$@9", "origin_spec", "length_spec",
  "attributes_opt", "startup", "high_level_library",
  "high_level_library_NAME_list", "low_level_library",
  "low_level_library_NAME_list", "floating_point_support", "mustbe_exp",
  "$@10", "exp", "opt_at", "section", "$@11", "$@12", "$@13", "$@14",
  "$@15", "type", "opt_exp_with_type", "memspec_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    61,
     264,   265,   266,   267,    63,    58,   268,   269,   124,    94,
      38,   270,   271,    60,    62,   272,   273,   274,   275,    43,
      45,    42,    47,    37,   276,   277,    40,   278,   279,   280,
     281,   282,   283,   284,   123,   125,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      44,    59,    41,    91,    93,    33,   126
};
# endif

#define YYPACT_NINF -285

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-285)))

#define YYTABLE_NINF -82

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,  -285,  -285,  -285,    40,  -285,  -285,  -285,  -285,  -285,
      58,  -285,   354,   355,    68,    84,    23,    63,  -285,    66,
      83,    96,    71,    76,   109,   120,   125,   126,   128,  -285,
    -285,   130,  -285,   131,   132,  -285,  -285,  -285,  -285,    54,
    -285,  -285,  -285,  -285,  -285,  -285,   167,   170,   249,  -285,
     171,   178,   181,  -285,  -285,   183,   184,   195,   249,   198,
     206,   123,   249,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   209,   210,  -285,  -285,   211,   212,
      83,    83,   216,    83,    11,  -285,   217,   186,    83,   219,
    -285,  -285,  -285,   215,   218,  -285,  -285,   249,   249,   249,
     190,   197,  -285,   199,   200,   201,   204,   208,   249,   249,
     587,   143,  -285,   134,  -285,   142,     3,  -285,  -285,   154,
     614,   147,  -285,  -285,   614,  -285,   249,  -285,     7,   -63,
     149,  -285,  -285,  -285,   155,   159,   164,   165,   166,  -285,
    -285,   -32,   -17,  -285,     8,   217,   168,   260,   249,   249,
    -285,  -285,     2,   249,   249,   267,   269,   249,   270,   249,
    -285,  -285,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   614,   271,   272,  -285,   273,   249,
     249,   614,   146,   614,    84,  -285,  -285,  -285,   276,  -285,
    -285,   318,   245,    -2,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,    83,  -285,    83,  -285,   278,  -285,    37,  -285,  -285,
     614,   614,  -285,   440,   460,   191,   202,   480,   203,   500,
     697,   633,   652,   712,   726,   739,   750,   750,    26,    26,
      26,    26,    15,    15,    49,    49,  -285,  -285,  -285,   614,
     614,   614,  -285,  -285,  -285,   614,   614,  -285,  -285,   226,
     188,  -285,   279,   282,  -285,   211,  -285,  -285,  -285,  -285,
    -285,   207,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   249,
    -285,   140,   674,   228,   295,   213,   235,  -285,  -285,   614,
    -285,  -285,  -285,  -285,  -285,   214,  -285,    19,   274,  -285,
     221,  -285,   308,   220,   303,   222,   249,   275,  -285,  -285,
     248,  -285,   310,   527,  -285,  -285,   317,  -285,  -285,  -285,
     261,  -285,   338,  -285,  -285,  -285,  -285,  -285,   291,  -285,
    -285,  -285,  -285,  -285,  -285,   261,   283,   293,    54,  -285,
     294,   300,   249,   333,  -285,  -285,   249,  -285,   333,   333,
     547,  -285,   -62,   314,   567,   -16,    51,  -285,  -285,   336,
     337,   343,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
     220,  -285
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    42,     8,     6,     0,     2,    45,     3,    11,     4,
       0,     1,    43,     9,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,    62,     0,     0,    53,    44,    47,    52,     0,
      46,    48,    49,    50,    51,    14,     0,     0,     0,    15,
       0,     0,     0,    17,    37,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   137,   106,   107,
     108,   109,   137,    73,     0,     0,     5,    65,     0,     0,
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
     111,   110,    75,     0,     0,   165,   172,     0,     0,     0,
       0,     0,   166,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    40,    27,    38,    28,    16,    29,    21,     0,
      32,     0,    33,    10,     7,   112,     0,   113,     0,     0,
       0,    45,   121,   120,     0,     0,     0,     0,     0,   129,
     131,   116,   116,    67,     0,     0,     0,     0,     0,     0,
     143,   139,     0,     0,     0,     0,     0,     0,     0,     0,
     142,   144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,    36,     0,     0,
       0,    20,     0,   138,   175,    70,    72,    71,     0,    57,
      59,     0,   126,     0,    54,    55,    64,    74,   127,   115,
     128,     0,   132,     0,    69,     0,    61,     0,    56,   137,
      25,    26,   140,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   162,   160,   159,   158,   152,   153,   156,   157,
     154,   155,   150,   151,   148,   149,   145,   146,   147,    13,
      24,    22,    41,    39,    35,    18,    19,    31,    30,     0,
       0,    66,     0,     0,   117,     0,   118,   130,   133,    68,
      63,     0,   170,   171,   164,   167,   141,   168,   169,     0,
     189,   186,     0,   174,     0,     0,     0,   119,   114,   161,
     181,   182,   183,   184,   185,     0,   187,   186,     0,   176,
       0,   125,     0,   116,     0,     0,     0,     0,    58,   137,
       0,   190,     0,     0,   177,   123,     0,   122,   188,   173,
      94,   137,    78,    83,    96,    97,    98,    99,     0,    86,
      88,    87,    79,    89,    93,    95,     0,     0,     0,   124,
       0,     0,     0,     0,    92,   178,     0,    85,     0,     0,
       0,    76,   116,   192,     0,   116,   116,    91,    80,     0,
       0,   101,    90,    82,    84,    77,   191,   137,   179,   100,
     116,   180
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,   -75,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,  -285,  -285,  -285,   225,  -285,  -285,  -285,   227,  -285,
    -285,   229,  -189,  -285,  -285,  -285,  -285,    25,  -285,  -285,
    -285,  -285,  -285,    32,  -284,  -138,  -285,  -285,  -186,  -285,
    -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,  -285,   -71,
    -285,   -48,  -285,  -285,  -285,  -285,  -285,  -285,  -285,    74,
    -285,  -285
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    77,     9,    10,     7,     8,    13,    61,   116,
     115,   113,     5,     6,    12,    36,    87,   131,   144,    37,
     128,    38,   352,   333,   343,   340,   341,   334,   335,   336,
     337,   368,    72,    92,    39,   359,    40,   203,   133,   202,
     303,   317,   263,    41,    42,   141,    43,   142,    44,   125,
     126,   152,   299,   197,   259,   307,   320,   353,   370,   295,
     283,   361
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     110,   127,   132,   211,   213,   135,   136,   187,   138,   140,
     120,   194,   214,   146,   124,    76,   162,   266,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   338,   198,   209,   199,
      11,   214,   358,   264,   176,   177,   178,   179,   180,   150,
     151,   338,   195,   174,   175,   176,   177,   178,   179,   180,
     160,   161,    14,   184,     1,     2,     3,    73,   209,    25,
     210,   191,   290,   291,   292,   293,   294,    62,   193,   287,
     178,   179,   180,   209,   209,   212,   363,    76,    34,    63,
      64,    65,    66,    67,    68,    69,    70,    71,   265,    74,
     220,   221,    75,   188,   222,   223,   224,    79,   215,   227,
     216,   229,    80,   139,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   267,   215,   268,   270,
      78,   255,   256,    95,    96,    81,    95,    96,   271,   257,
     258,   209,   182,   364,    90,    91,    82,    95,    96,   355,
     356,    83,    84,   189,    85,   310,    86,    88,    89,    97,
      98,    93,    97,    98,    94,   111,    99,   100,   101,    99,
     100,   101,   112,    97,    98,   114,   102,   117,   118,   102,
      99,   100,   101,   290,   291,   292,   293,   294,   103,   119,
     102,   103,   121,   104,   105,   106,   104,   105,   106,   122,
     123,   282,   103,   129,   130,   132,   134,   104,   105,   106,
     137,   143,   145,   147,   148,   107,   153,   149,   107,    95,
      96,   289,   371,   154,   185,   155,   156,   157,   315,   107,
     158,   280,   186,   183,   159,   108,   109,   192,   108,   109,
     339,   200,    95,    96,   190,    97,    98,   204,   313,   108,
     109,   205,   281,   100,   101,   322,   206,   207,   208,   219,
     218,   225,   102,   226,   228,   252,   253,   254,    97,    98,
     260,   262,   269,   285,   103,    99,   100,   101,   284,   104,
     105,   106,   323,   274,   350,   102,   369,   286,   354,   300,
     324,   325,   326,   327,   275,   277,   302,   103,   298,   288,
     306,   107,   104,   105,   106,   301,   304,   309,   311,   314,
     209,   316,    15,   308,   312,   318,   321,   342,   345,   346,
     348,   108,   109,   328,   107,   329,   349,   351,   360,   330,
     365,   366,    34,    63,    64,    65,    66,    67,    68,    69,
      70,    71,   367,   261,   108,   109,   201,   196,    15,    45,
     344,    16,   331,     0,   332,    17,    18,    19,    20,    21,
     347,   305,   217,     0,   -81,     0,     0,    22,    23,    24,
      25,     0,     0,     0,    26,    27,    28,    29,    30,     0,
       0,     0,    46,    31,    32,    33,     0,    16,     0,    34,
       0,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,     0,     0,    35,
      26,    27,    28,    29,    30,     0,     0,     0,     0,    31,
      32,    33,     0,     0,    47,    34,     0,    48,    49,    50,
      51,    52,   -34,    53,    54,    55,    56,    57,    58,    59,
      60,     0,     0,     0,   162,    35,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   162,     0,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,     0,     0,     0,     0,
       0,   162,   272,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   162,   273,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   162,   276,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   162,   278,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,     0,   162,   319,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   357,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   362,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,   181,   162,   296,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     297,   162,   279,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180
};

static const yytype_int16 yycheck[] =
{
      48,    72,     4,   141,   142,    80,    81,     4,    83,    84,
      58,     4,     4,    88,    62,     4,    14,   203,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   320,   100,   100,   102,
       0,     4,   104,    45,    29,    30,    31,    32,    33,    97,
      98,   335,    45,    27,    28,    29,    30,    31,    32,    33,
     108,   109,     4,   111,    97,    98,    99,    44,   100,    62,
     102,   119,    53,    54,    55,    56,    57,     9,   126,   265,
      31,    32,    33,   100,   100,   102,   102,     4,    81,     5,
       6,     7,     8,     9,    10,    11,    12,    13,   100,    36,
     148,   149,    36,   100,   102,   153,   154,    36,   100,   157,
     102,   159,    36,   102,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   211,   100,   213,   102,
      44,   189,   190,     3,     4,    36,     3,     4,   219,     3,
       4,   100,     9,   102,   100,   101,    36,     3,     4,   348,
     349,    36,    36,     9,    36,   303,    36,    36,    36,    29,
      30,     4,    29,    30,     4,     4,    36,    37,    38,    36,
      37,    38,     4,    29,    30,     4,    46,     4,     4,    46,
      36,    37,    38,    53,    54,    55,    56,    57,    58,     4,
      46,    58,     4,    63,    64,    65,    63,    64,    65,     3,
      87,   259,    58,     4,     4,     4,     4,    63,    64,    65,
       4,     4,    36,     4,     9,    85,    36,     9,    85,     3,
       4,   279,   370,    36,   100,    36,    36,    36,   309,    85,
      36,    15,   100,   100,    36,   105,   106,   100,   105,   106,
     321,   102,     3,     4,   100,    29,    30,   102,   306,   105,
     106,   102,    36,    37,    38,     4,   102,   102,   102,     9,
     102,     4,    46,     4,     4,     4,     4,     4,    29,    30,
       4,    36,     4,     4,    58,    36,    37,    38,   100,    63,
      64,    65,    31,   102,   342,    46,   367,    15,   346,     4,
      39,    40,    41,    42,   102,   102,    71,    58,    80,   102,
      36,    85,    63,    64,    65,   102,   102,     9,    15,    44,
     100,    73,     4,   102,   102,    15,     9,    36,    45,    36,
      36,   105,   106,    72,    85,    74,    36,     4,    24,    78,
       4,     4,    81,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     9,    35,   105,   106,   131,   128,     4,     4,
     335,    43,   101,    -1,   103,    47,    48,    49,    50,    51,
     338,   297,   145,    -1,    36,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    37,    75,    76,    77,    -1,    43,    -1,    81,
      -1,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,   101,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    75,
      76,    77,    -1,    -1,    79,    81,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    14,   101,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,   102,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    14,   102,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    14,   102,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    14,   102,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,   102,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,   102,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,   102,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,   100,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    97,    98,    99,   108,   119,   120,   112,   113,   110,
     111,     0,   121,   114,     4,     4,    43,    47,    48,    49,
      50,    51,    59,    60,    61,    62,    66,    67,    68,    69,
      70,    75,    76,    77,    81,   101,   122,   126,   128,   141,
     143,   150,   151,   153,   155,     4,    37,    79,    82,    83,
      84,    85,    86,    88,    89,    90,    91,    92,    93,    94,
      95,   115,     9,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   139,    44,    36,    36,     4,   109,    44,    36,
      36,    36,    36,    36,    36,    36,    36,   123,    36,    36,
     100,   101,   140,     4,     4,     3,     4,    29,    30,    36,
      37,    38,    46,    58,    63,    64,    65,    85,   105,   106,
     158,     4,     4,   118,     4,   117,   116,     4,     4,     4,
     158,     4,     3,    87,   158,   156,   157,   156,   127,     4,
       4,   124,     4,   145,     4,   109,   109,     4,   109,   102,
     109,   152,   154,     4,   125,    36,   109,     4,     9,     9,
     158,   158,   158,    36,    36,    36,    36,    36,    36,    36,
     158,   158,    14,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,   100,     9,   100,   158,   100,   100,     4,   100,     9,
     100,   158,   100,   158,     4,    45,   128,   160,   100,   102,
     102,   121,   146,   144,   102,   102,   102,   102,   102,   100,
     102,   142,   102,   142,     4,   100,   102,   125,   102,     9,
     158,   158,   102,   158,   158,     4,     4,   158,     4,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,     4,     4,     4,   158,   158,     3,     4,   161,
       4,    35,    36,   149,    45,   100,   145,   109,   109,     4,
     102,   156,   102,   102,   102,   102,   102,   102,   102,    15,
      15,    36,   158,   167,   100,     4,    15,   145,   102,   158,
      53,    54,    55,    56,    57,   166,    15,    36,    80,   159,
       4,   102,    71,   147,   102,   166,    36,   162,   102,     9,
     142,    15,   102,   158,    44,   156,    73,   148,    15,   102,
     163,     9,     4,    31,    39,    40,    41,    42,    72,    74,
      78,   101,   103,   130,   134,   135,   136,   137,   141,   156,
     132,   133,    36,   131,   134,    45,    36,   140,    36,    36,
     158,     4,   129,   164,   158,   129,   129,   102,   104,   142,
      24,   168,   102,   102,   102,     4,     4,     9,   138,   156,
     165,   142
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   108,   109,   111,   110,   113,   112,
     114,   114,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   117,   117,
     118,   118,   120,   119,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   122,   122,   124,   122,   125,   125,   125,
     126,   127,   127,   127,   128,   128,   129,   129,   130,   131,
     130,   132,   130,   133,   130,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   141,   141,   141,   142,   142,   143,   144,   144,
     144,   146,   145,   147,   148,   149,   149,   150,   151,   151,
     152,   152,   153,   154,   154,   155,   155,   157,   156,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   159,   161,   162,   163,   164,   165,
     160,   166,   166,   166,   166,   166,   166,   167,   167,   167,
     167,   168,   168
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     0,     4,     0,     2,
       3,     0,     2,     4,     1,     1,     2,     1,     4,     4,
       3,     2,     4,     3,     4,     4,     4,     2,     2,     2,
       4,     4,     2,     2,     0,     3,     2,     0,     1,     3,
       1,     3,     0,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     8,     4,
       1,     4,     0,     5,     4,     0,     5,     1,     3,     2,
       4,     2,     2,     0,     4,     2,     1,     3,     1,     0,
       4,     0,     5,     0,     5,     2,     1,     1,     1,     1,
       4,     4,     2,     1,     0,     1,     1,     1,     1,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     6,     1,     0,     5,     2,     3,
       0,     0,     7,     3,     3,     3,     0,     4,     4,     3,
       3,     1,     4,     3,     0,     1,     1,     0,     2,     2,
       3,     4,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     1,     1,     4,     4,     4,
       4,     4,     1,     4,     0,     0,     0,     0,     0,     0,
      14,     1,     1,     1,     1,     1,     0,     2,     5,     1,
       4,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 126 "./ldgram.y" /* yacc.c:1646  */
    { ldlex_defsym(); }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 128 "./ldgram.y" /* yacc.c:1646  */
    {
		  ldlex_popstate();
		  lang_add_assignment(exp_assop((yyvsp[-1].token),(yyvsp[-2].name),(yyvsp[0].etree)));
		}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "./ldgram.y" /* yacc.c:1646  */
    {    	ldlex_mri_script();
			PUSH_ERROR("MRI style script");
		}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 139 "./ldgram.y" /* yacc.c:1646  */
    {	ldlex_popstate(); 
			POP_ERROR();
		}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 152 "./ldgram.y" /* yacc.c:1646  */
    {
			einfo("%P%F: unrecognised keyword in MRI style script '%s'\n",(yyvsp[0].name));
			}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 155 "./ldgram.y" /* yacc.c:1646  */
    {
			config.map_filename = "-";
			}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 161 "./ldgram.y" /* yacc.c:1646  */
    { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 163 "./ldgram.y" /* yacc.c:1646  */
    { mri_public((yyvsp[-2].name), (yyvsp[0].etree)); }
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 165 "./ldgram.y" /* yacc.c:1646  */
    { mri_public((yyvsp[-1].name), (yyvsp[0].etree)); }
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 167 "./ldgram.y" /* yacc.c:1646  */
    { mri_format((yyvsp[0].name)); }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 169 "./ldgram.y" /* yacc.c:1646  */
    { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 171 "./ldgram.y" /* yacc.c:1646  */
    { mri_output_section((yyvsp[-1].name), (yyvsp[0].etree));}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 173 "./ldgram.y" /* yacc.c:1646  */
    { mri_output_section((yyvsp[-2].name), (yyvsp[0].etree));}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 175 "./ldgram.y" /* yacc.c:1646  */
    { mri_align((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 177 "./ldgram.y" /* yacc.c:1646  */
    { mri_alignmod((yyvsp[-2].name),(yyvsp[0].etree)); }
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 181 "./ldgram.y" /* yacc.c:1646  */
    { mri_name((yyvsp[0].name)); }
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 183 "./ldgram.y" /* yacc.c:1646  */
    { mri_alias((yyvsp[-2].name),(yyvsp[0].name),0);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 185 "./ldgram.y" /* yacc.c:1646  */
    { mri_alias((yyvsp[-2].name),0,(int) (yyvsp[0].integer));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 187 "./ldgram.y" /* yacc.c:1646  */
    { mri_base((yyvsp[0].etree)); }
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 189 "./ldgram.y" /* yacc.c:1646  */
    {  mri_truncate((unsigned int) (yyvsp[0].integer)); }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 194 "./ldgram.y" /* yacc.c:1646  */
    { mri_order((yyvsp[0].name)); }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 195 "./ldgram.y" /* yacc.c:1646  */
    { mri_order((yyvsp[0].name)); }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 201 "./ldgram.y" /* yacc.c:1646  */
    { mri_load((yyvsp[0].name)); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 202 "./ldgram.y" /* yacc.c:1646  */
    { mri_load((yyvsp[0].name)); }
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 207 "./ldgram.y" /* yacc.c:1646  */
    { mri_only_load((yyvsp[0].name)); }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 209 "./ldgram.y" /* yacc.c:1646  */
    { mri_only_load((yyvsp[0].name)); }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 213 "./ldgram.y" /* yacc.c:1646  */
    {
	 ldlex_both();
	}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 217 "./ldgram.y" /* yacc.c:1646  */
    {
	ldlex_popstate();
	}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 240 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_target((yyvsp[-1].name)); }
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 242 "./ldgram.y" /* yacc.c:1646  */
    { ldfile_add_library_path ((yyvsp[-1].name), false); }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 244 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_output((yyvsp[-1].name), 1); }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 246 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_output_format ((yyvsp[-1].name), (char *) NULL,
					    (char *) NULL, 1); }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 249 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_output_format ((yyvsp[-5].name), (yyvsp[-3].name), (yyvsp[-1].name), 1); }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 251 "./ldgram.y" /* yacc.c:1646  */
    { ldfile_set_output_arch((yyvsp[-1].name)); }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 253 "./ldgram.y" /* yacc.c:1646  */
    { command_line.force_common_definition = true ; }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 256 "./ldgram.y" /* yacc.c:1646  */
    { lang_enter_group (); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 258 "./ldgram.y" /* yacc.c:1646  */
    { lang_leave_group (); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 260 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_map((yyvsp[-1].name)); }
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 262 "./ldgram.y" /* yacc.c:1646  */
    { ldfile_open_command_file((yyvsp[0].name)); }
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 267 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 270 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 273 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_input_file((yyvsp[0].name),lang_input_file_is_search_file_enum,
				 (char *)NULL); }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 289 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_entry ((yyvsp[-1].name), 0); }
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 295 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_wild((yyvsp[0].name), current_file); }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 297 "./ldgram.y" /* yacc.c:1646  */
    { lang_add_wild((yyvsp[0].name), current_file); }
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 302 "./ldgram.y" /* yacc.c:1646  */
    {
		lang_add_wild((char *)NULL, (yyvsp[0].name));
		}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 306 "./ldgram.y" /* yacc.c:1646  */
    {
			current_file = (char *)NULL;
			}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 312 "./ldgram.y" /* yacc.c:1646  */
    {
			current_file =(yyvsp[0].name);
			}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 317 "./ldgram.y" /* yacc.c:1646  */
    {
			current_file = (char *)NULL;
			}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 326 "./ldgram.y" /* yacc.c:1646  */
    {
 		lang_add_attribute(lang_object_symbols_statement_enum); 
	      	}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 331 "./ldgram.y" /* yacc.c:1646  */
    {
 		
		  lang_add_attribute(lang_constructors_statement_enum); 
		}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 337 "./ldgram.y" /* yacc.c:1646  */
    {
			lang_add_data((int) (yyvsp[-3].integer),(yyvsp[-1].etree));
			}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 342 "./ldgram.y" /* yacc.c:1646  */
    {
			  lang_add_fill
			    (exp_get_value_int((yyvsp[-1].etree),
					       0,
					       "fill value",
					       lang_first_phase_enum));
			}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 363 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].token); }
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 365 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].token); }
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 367 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].token); }
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 369 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.integer) = (yyvsp[0].token); }
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 374 "./ldgram.y" /* yacc.c:1646  */
    {
		  (yyval.integer) =	 exp_get_value_int((yyvsp[0].etree),
					   0,
					   "fill value",
					   lang_first_phase_enum);
		}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 380 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.integer) = 0; }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 387 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = '+'; }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 389 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = '-'; }
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 391 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = '*'; }
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 393 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = '/'; }
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 395 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = LSHIFT; }
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 397 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = RSHIFT; }
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 399 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = '&'; }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 401 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.token) = '|'; }
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 411 "./ldgram.y" /* yacc.c:1646  */
    {
		  lang_add_assignment (exp_assop ((yyvsp[-1].token), (yyvsp[-2].name), (yyvsp[0].etree)));
		}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 415 "./ldgram.y" /* yacc.c:1646  */
    {
		  lang_add_assignment (exp_assop ('=', (yyvsp[-2].name),
						  exp_binop ((yyvsp[-1].token),
							     exp_nameop (NAME,
									 (yyvsp[-2].name)),
							     (yyvsp[0].etree))));
		}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 423 "./ldgram.y" /* yacc.c:1646  */
    {
		  lang_add_assignment (exp_provide ((yyvsp[-3].name), (yyvsp[-1].etree)));
		}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 445 "./ldgram.y" /* yacc.c:1646  */
    { region = lang_memory_region_lookup((yyvsp[0].name)); }
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 451 "./ldgram.y" /* yacc.c:1646  */
    { region->current =
		 region->origin =
		 exp_get_vma((yyvsp[0].etree), 0L,"origin", lang_first_phase_enum);
}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 457 "./ldgram.y" /* yacc.c:1646  */
    { region->length = exp_get_vma((yyvsp[0].etree),
					       ~((bfd_vma)0),
					       "length",
					       lang_first_phase_enum);
		}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 466 "./ldgram.y" /* yacc.c:1646  */
    {
			lang_set_flags(&region->flags, (yyvsp[-1].name));
			}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 475 "./ldgram.y" /* yacc.c:1646  */
    { lang_startup((yyvsp[-1].name)); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 481 "./ldgram.y" /* yacc.c:1646  */
    { ldemul_hll((char *)NULL); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 486 "./ldgram.y" /* yacc.c:1646  */
    { ldemul_hll((yyvsp[0].name)); }
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 488 "./ldgram.y" /* yacc.c:1646  */
    { ldemul_hll((yyvsp[0].name)); }
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 496 "./ldgram.y" /* yacc.c:1646  */
    { ldemul_syslib((yyvsp[0].name)); }
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 502 "./ldgram.y" /* yacc.c:1646  */
    { lang_float(true); }
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 504 "./ldgram.y" /* yacc.c:1646  */
    { lang_float(false); }
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 508 "./ldgram.y" /* yacc.c:1646  */
    { ldlex_expression(); }
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 510 "./ldgram.y" /* yacc.c:1646  */
    { ldlex_popstate(); (yyval.etree)=(yyvsp[0].etree);}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 515 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop('-', (yyvsp[0].etree)); }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 517 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = (yyvsp[-1].etree); }
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 519 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop((int) (yyvsp[-3].integer),(yyvsp[-1].etree)); }
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 521 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop('!', (yyvsp[0].etree)); }
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 523 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = (yyvsp[0].etree); }
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 525 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop('~', (yyvsp[0].etree));}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 528 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('*', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 530 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('/', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 532 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('%', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 534 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('+', (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 536 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('-' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 538 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(LSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 540 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(RSHIFT , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 542 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(EQ , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 544 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(NE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 546 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(LE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 548 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(GE , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 550 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('<' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 552 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('>' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 554 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('&' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 556 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('^' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 558 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop('|' , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 560 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_trinop('?' , (yyvsp[-4].etree), (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 562 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(ANDAND , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 564 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_binop(OROR , (yyvsp[-2].etree), (yyvsp[0].etree)); }
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 566 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_nameop(DEFINED, (yyvsp[-1].name)); }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 568 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_intop((yyvsp[0].integer)); }
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 570 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_nameop(SIZEOF_HEADERS,0); }
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 573 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_nameop(SIZEOF,(yyvsp[-1].name)); }
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 575 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_nameop(ADDR,(yyvsp[-1].name)); }
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 577 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop(ABSOLUTE, (yyvsp[-1].etree)); }
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 579 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[-1].etree)); }
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 581 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_unop(ALIGN_K,(yyvsp[-1].etree)); }
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 583 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = exp_nameop(NAME,(yyvsp[0].name)); }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 588 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = (yyvsp[-1].etree); }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 589 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = 0; }
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 592 "./ldgram.y" /* yacc.c:1646  */
    { ldlex_expression(); }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 594 "./ldgram.y" /* yacc.c:1646  */
    { ldlex_popstate(); }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 596 "./ldgram.y" /* yacc.c:1646  */
    {
			lang_enter_output_section_statement((yyvsp[-5].name),(yyvsp[-3].etree),typebits,0,0,0,(yyvsp[-2].etree));
			}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 600 "./ldgram.y" /* yacc.c:1646  */
    {ldlex_expression();}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 601 "./ldgram.y" /* yacc.c:1646  */
    {
		  ldlex_popstate();
		  lang_leave_output_section_statement((yyvsp[0].integer), (yyvsp[-1].name));
		}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 610 "./ldgram.y" /* yacc.c:1646  */
    { typebits = SEC_NEVER_LOAD; }
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 611 "./ldgram.y" /* yacc.c:1646  */
    { typebits = 0; }
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 612 "./ldgram.y" /* yacc.c:1646  */
    { typebits = 0; }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 613 "./ldgram.y" /* yacc.c:1646  */
    { typebits = 0; }
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 614 "./ldgram.y" /* yacc.c:1646  */
    { typebits = 0; }
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 615 "./ldgram.y" /* yacc.c:1646  */
    { typebits = SEC_ALLOC | SEC_LOAD | SEC_HAS_CONTENTS; }
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 620 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = (yyvsp[-1].etree); typebits =0;}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 621 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree) = (yyvsp[-4].etree); }
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 622 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree)= (etree_type *)NULL; typebits = 0; }
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 623 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.etree)= (etree_type *)NULL;  }
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 628 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.name) = (yyvsp[0].name); }
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 629 "./ldgram.y" /* yacc.c:1646  */
    { (yyval.name) = "*default*"; }
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2667 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 631 "./ldgram.y" /* yacc.c:1906  */

void
yyerror(arg) 
     const char *arg;
{ 
  if (ldfile_assumed_script)
    einfo ("%P:%s: file format not recognized; treating as linker script\n",
	   ldfile_input_filename);
  if (error_index > 0 && error_index < ERROR_NAME_MAX)
     einfo ("%P%F:%S: %s in %s\n", arg, error_names[error_index-1]);
  else
     einfo ("%P%F:%S: %s\n", arg);
}
