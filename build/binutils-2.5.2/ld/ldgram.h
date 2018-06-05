/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 62 "./ldgram.y" /* yacc.c:1909  */

  bfd_vma integer;
  char *name;
  int token;
  union etree_union *etree;

#line 227 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
