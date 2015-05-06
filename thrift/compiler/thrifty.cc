
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "thrifty.yy"

/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * Thrift parser.
 *
 * This parser is used on a thrift definition file.
 *
 */

#define __STDC_LIMIT_MACROS
#define __STDC_FORMAT_MACROS
#include <stdio.h>
#include <inttypes.h>
#include <limits.h>
#include "folly/String.h"
#include "thrift/compiler/main.h"
#include "thrift/compiler/globals.h"
#include "thrift/compiler/parse/t_program.h"
#include "thrift/compiler/parse/t_scope.h"

/**
 * This global variable is used for automatic numbering of field indices etc.
 * when parsing the members of a struct. Field values are automatically
 * assigned starting from -1 and working their way down.
 */
int y_field_val = -1;
/**
 * This global variable is used for automatic numbering of enum values.
 * y_enum_val is the last value assigned; the next auto-assigned value will be
 * y_enum_val+1, and then it continues working upwards.  Explicitly specified
 * enum values reset y_enum_val to that value.
 */
int32_t y_enum_val = -1;
int g_arglist = 0;
const int struct_is_struct = 0;
const int struct_is_union = 1;



/* Line 189 of yacc.c  */
#line 131 "thrifty.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tok_identifier = 258,
     tok_literal = 259,
     tok_doctext = 260,
     tok_st_identifier = 261,
     tok_int_constant = 262,
     tok_dub_constant = 263,
     tok_include = 264,
     tok_namespace = 265,
     tok_cpp_namespace = 266,
     tok_cpp_include = 267,
     tok_php_namespace = 268,
     tok_py_module = 269,
     tok_perl_package = 270,
     tok_java_package = 271,
     tok_xsd_all = 272,
     tok_xsd_optional = 273,
     tok_xsd_nillable = 274,
     tok_xsd_namespace = 275,
     tok_xsd_attrs = 276,
     tok_ruby_namespace = 277,
     tok_smalltalk_category = 278,
     tok_smalltalk_prefix = 279,
     tok_cocoa_prefix = 280,
     tok_csharp_namespace = 281,
     tok_void = 282,
     tok_bool = 283,
     tok_byte = 284,
     tok_string = 285,
     tok_binary = 286,
     tok_slist = 287,
     tok_senum = 288,
     tok_i16 = 289,
     tok_i32 = 290,
     tok_i64 = 291,
     tok_double = 292,
     tok_float = 293,
     tok_map = 294,
     tok_hash_map = 295,
     tok_list = 296,
     tok_set = 297,
     tok_oneway = 298,
     tok_typedef = 299,
     tok_struct = 300,
     tok_xception = 301,
     tok_throws = 302,
     tok_extends = 303,
     tok_service = 304,
     tok_enum = 305,
     tok_const = 306,
     tok_required = 307,
     tok_optional = 308,
     tok_union = 309,
     tok_view = 310
   };
#endif
/* Tokens.  */
#define tok_identifier 258
#define tok_literal 259
#define tok_doctext 260
#define tok_st_identifier 261
#define tok_int_constant 262
#define tok_dub_constant 263
#define tok_include 264
#define tok_namespace 265
#define tok_cpp_namespace 266
#define tok_cpp_include 267
#define tok_php_namespace 268
#define tok_py_module 269
#define tok_perl_package 270
#define tok_java_package 271
#define tok_xsd_all 272
#define tok_xsd_optional 273
#define tok_xsd_nillable 274
#define tok_xsd_namespace 275
#define tok_xsd_attrs 276
#define tok_ruby_namespace 277
#define tok_smalltalk_category 278
#define tok_smalltalk_prefix 279
#define tok_cocoa_prefix 280
#define tok_csharp_namespace 281
#define tok_void 282
#define tok_bool 283
#define tok_byte 284
#define tok_string 285
#define tok_binary 286
#define tok_slist 287
#define tok_senum 288
#define tok_i16 289
#define tok_i32 290
#define tok_i64 291
#define tok_double 292
#define tok_float 293
#define tok_map 294
#define tok_hash_map 295
#define tok_list 296
#define tok_set 297
#define tok_oneway 298
#define tok_typedef 299
#define tok_struct 300
#define tok_xception 301
#define tok_throws 302
#define tok_extends 303
#define tok_service 304
#define tok_enum 305
#define tok_const 306
#define tok_required 307
#define tok_optional 308
#define tok_union 309
#define tok_view 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 62 "thrifty.yy"

  char*          id;
  int64_t        iconst;
  double         dconst;
  bool           tbool;
  t_doc*         tdoc;
  t_type*        ttype;
  t_base_type*   tbase;
  t_typedef*     ttypedef;
  t_enum*        tenum;
  t_enum_value*  tenumv;
  t_const*       tconst;
  t_const_value* tconstv;
  t_struct*      tstruct;
  t_service*     tservice;
  t_function*    tfunction;
  t_field*       tfield;
  char*          dtext;
  t_field::e_req ereq;
  t_annotation*  tannot;
  t_field_id     tfieldid;



/* Line 214 of yacc.c  */
#line 302 "thrifty.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 314 "thrifty.cc"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      64,    65,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    57,
      66,    60,    67,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,     8,    12,    13,    15,    19,
      23,    26,    29,    32,    35,    38,    41,    44,    47,    50,
      53,    56,    59,    62,    66,    67,    69,    71,    73,    75,
      77,    79,    81,    83,    85,    89,    91,    93,    94,   101,
     104,   105,   109,   113,   115,   121,   124,   125,   128,   135,
     137,   139,   141,   143,   145,   147,   151,   155,   156,   160,
     166,   167,   169,   171,   179,   188,   190,   191,   193,   194,
     196,   197,   202,   203,   210,   220,   221,   222,   225,   226,
     229,   230,   241,   244,   245,   247,   249,   250,   255,   256,
     259,   260,   272,   275,   276,   280,   289,   292,   293,   295,
     297,   298,   301,   302,   304,   306,   309,   311,   313,   316,
     318,   320,   322,   324,   326,   328,   330,   332,   334,   336,
     339,   341,   343,   345,   347,   354,   361,   366,   371,   375,
     376,   379,   380,   384,   387,   388,   390,   392
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      69,     0,    -1,    72,    75,    -1,    -1,    -1,    72,    71,
      73,    -1,    -1,    74,    -1,    10,     3,     3,    -1,    10,
       3,     4,    -1,    11,     3,    -1,    12,     4,    -1,    13,
       3,    -1,    14,     3,    -1,    15,     3,    -1,    22,     3,
      -1,    23,     6,    -1,    24,     3,    -1,    16,     3,    -1,
      25,     3,    -1,    20,     4,    -1,    26,     3,    -1,     9,
       4,    -1,    75,    70,    76,    -1,    -1,    87,    -1,    77,
      -1,   101,    -1,    78,    -1,    80,    -1,    84,    -1,    94,
      -1,    95,    -1,   100,    -1,    44,   119,     3,    -1,    56,
      -1,    57,    -1,    -1,    50,     3,    58,    81,    59,   128,
      -1,    81,    82,    -1,    -1,    70,    83,    79,    -1,     3,
      60,     7,    -1,     3,    -1,    33,     3,    58,    85,    59,
      -1,    85,    86,    -1,    -1,     4,    79,    -1,    51,   119,
       3,    60,    88,    79,    -1,     7,    -1,     8,    -1,     4,
      -1,     3,    -1,    89,    -1,    91,    -1,    61,    90,    62,
      -1,    90,    88,    79,    -1,    -1,    58,    92,    59,    -1,
      92,    88,    63,    88,    79,    -1,    -1,    45,    -1,    54,
      -1,    93,     3,    96,    58,   111,    59,   128,    -1,    55,
       3,    63,     3,    58,   113,    59,   128,    -1,    17,    -1,
      -1,    18,    -1,    -1,    19,    -1,    -1,    21,    58,   111,
      59,    -1,    -1,    46,     3,    58,   111,    59,   128,    -1,
      49,     3,   104,    58,   102,   105,   103,    59,   132,    -1,
      -1,    -1,    48,     3,    -1,    -1,   105,   106,    -1,    -1,
      70,   109,   118,     3,    64,   107,    65,   110,   132,    79,
      -1,   107,   108,    -1,    -1,   112,    -1,    43,    -1,    -1,
      47,    64,   111,    65,    -1,    -1,   111,   112,    -1,    -1,
      70,   115,   116,   119,     3,   117,    97,    98,    99,   128,
      79,    -1,   113,   114,    -1,    -1,     3,   128,    79,    -1,
      70,     7,    63,   116,   119,     3,   128,    79,    -1,     7,
      63,    -1,    -1,    52,    -1,    53,    -1,    -1,    60,    88,
      -1,    -1,   119,    -1,    27,    -1,     3,   128,    -1,   120,
      -1,   122,    -1,   121,   128,    -1,    30,    -1,    31,    -1,
      32,    -1,    28,    -1,    29,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,   123,   128,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,    39,    66,   119,
      56,   119,    67,    -1,    40,    66,   119,    56,   119,    67,
      -1,    42,    66,   119,    67,    -1,    41,    66,   119,    67,
      -1,    64,   129,    65,    -1,    -1,   129,   130,    -1,    -1,
       3,   131,    79,    -1,    60,   133,    -1,    -1,   128,    -1,
       4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   251,   251,   264,   275,   284,   289,   294,   298,   305,
     313,   321,   328,   337,   346,   355,   364,   373,   382,   391,
     400,   409,   419,   431,   439,   444,   452,   463,   477,   484,
     491,   498,   505,   512,   521,   529,   531,   534,   537,   549,
     556,   563,   585,   603,   614,   621,   628,   635,   642,   660,
     669,   675,   680,   693,   698,   705,   712,   719,   726,   733,
     740,   747,   751,   757,   772,   844,   849,   854,   859,   864,
     869,   874,   879,   884,   929,   941,   946,   951,   964,   969,
     976,   982,   993,  1003,  1009,  1016,  1021,  1026,  1036,  1041,
    1051,  1057,  1089,  1101,  1107,  1117,  1134,  1170,  1176,  1187,
    1199,  1204,  1213,  1218,  1223,  1230,  1253,  1258,  1264,  1277,
    1282,  1287,  1292,  1297,  1302,  1307,  1312,  1317,  1322,  1328,
    1339,  1344,  1349,  1354,  1361,  1368,  1375,  1382,  1389,  1395,
    1400,  1408,  1414,  1423,  1429,  1435,  1459,  1465
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tok_identifier", "tok_literal",
  "tok_doctext", "tok_st_identifier", "tok_int_constant",
  "tok_dub_constant", "tok_include", "tok_namespace", "tok_cpp_namespace",
  "tok_cpp_include", "tok_php_namespace", "tok_py_module",
  "tok_perl_package", "tok_java_package", "tok_xsd_all",
  "tok_xsd_optional", "tok_xsd_nillable", "tok_xsd_namespace",
  "tok_xsd_attrs", "tok_ruby_namespace", "tok_smalltalk_category",
  "tok_smalltalk_prefix", "tok_cocoa_prefix", "tok_csharp_namespace",
  "tok_void", "tok_bool", "tok_byte", "tok_string", "tok_binary",
  "tok_slist", "tok_senum", "tok_i16", "tok_i32", "tok_i64", "tok_double",
  "tok_float", "tok_map", "tok_hash_map", "tok_list", "tok_set",
  "tok_oneway", "tok_typedef", "tok_struct", "tok_xception", "tok_throws",
  "tok_extends", "tok_service", "tok_enum", "tok_const", "tok_required",
  "tok_optional", "tok_union", "tok_view", "','", "';'", "'{'", "'}'",
  "'='", "'['", "']'", "':'", "'('", "')'", "'<'", "'>'", "$accept",
  "Program", "CaptureDocText", "DestroyDocText", "HeaderList", "Header",
  "Include", "DefinitionList", "Definition", "TypeDefinition", "Typedef",
  "CommaOrSemicolonOptional", "Enum", "EnumDefList", "EnumDef",
  "EnumValue", "Senum", "SenumDefList", "SenumDef", "Const", "ConstValue",
  "ConstList", "ConstListContents", "ConstMap", "ConstMapContents",
  "StructHead", "Struct", "View", "XsdAll", "XsdOptional", "XsdNillable",
  "XsdAttributes", "Xception", "Service", "FlagArgs", "UnflagArgs",
  "Extends", "FunctionList", "Function", "ParamList", "Param", "Oneway",
  "Throws", "FieldList", "Field", "ViewFieldList", "ViewField",
  "FieldIdentifier", "FieldRequiredness", "FieldValue", "FunctionType",
  "FieldType", "BaseType", "SimpleBaseType", "ContainerType",
  "SimpleContainerType", "MapType", "HashMapType", "SetType", "ListType",
  "TypeAnnotations", "TypeAnnotationList", "TypeAnnotation",
  "TypeAnnotationValue", "FunctionAnnotations", "IntOrLiteral", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    44,    59,   123,   125,
      61,    91,    93,    58,    40,    41,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    75,    75,    76,    76,    76,    77,    77,
      77,    77,    77,    77,    78,    79,    79,    79,    80,    81,
      81,    82,    83,    83,    84,    85,    85,    86,    87,    88,
      88,    88,    88,    88,    88,    89,    90,    90,    91,    92,
      92,    93,    93,    94,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   101,   102,   103,   104,   104,   105,
     105,   106,   107,   107,   108,   109,   109,   110,   110,   111,
     111,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   120,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     123,   123,   123,   123,   124,   125,   126,   127,   128,   128,
     129,   129,   130,   131,   131,   132,   133,   133
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     0,     3,     0,     1,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     0,     6,     2,
       0,     3,     3,     1,     5,     2,     0,     2,     6,     1,
       1,     1,     1,     1,     1,     3,     3,     0,     3,     5,
       0,     1,     1,     7,     8,     1,     0,     1,     0,     1,
       0,     4,     0,     6,     9,     0,     0,     2,     0,     2,
       0,    10,     2,     0,     1,     1,     0,     4,     0,     2,
       0,    11,     2,     0,     3,     8,     2,     0,     1,     1,
       0,     2,     0,     1,     1,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     6,     6,     4,     4,     3,     0,
       2,     0,     3,     2,     0,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     4,     1,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     7,     0,    22,     0,    10,    11,    12,    13,    14,
      18,    20,    15,    16,    17,    19,    21,     0,     0,    61,
       0,     0,     0,     0,    62,     0,    23,    26,    28,    29,
      30,    25,     0,    31,    32,    33,    27,     8,     9,     0,
     129,   112,   113,   109,   110,   111,   114,   115,   116,   117,
     118,     0,     0,     0,     0,     0,   106,   129,   107,   129,
     120,   121,   122,   123,     0,    78,     0,     0,     0,    66,
      46,   131,   105,     0,     0,     0,     0,    34,   108,   119,
      90,     0,     0,    40,     0,     0,    65,     0,     0,     0,
       0,     0,     0,     0,     3,    77,    75,     3,     0,     0,
      90,    37,    44,    45,   134,   128,   130,     0,     0,   127,
     126,   129,    97,    89,    80,   129,     0,    39,    52,    51,
      49,    50,    60,    57,    37,    53,    54,    93,     3,    35,
      36,    47,     0,    37,     0,     0,    73,     0,   100,     3,
      38,    43,    37,     0,     0,    48,     3,   129,   136,   137,
     133,   132,   124,   125,    96,    98,    99,     0,    86,     0,
      79,     0,    41,    58,     0,    55,    37,   129,   129,     0,
      92,    63,     0,    85,     0,   129,    42,     0,    56,    37,
      64,     0,   102,   104,     0,   103,   135,    74,    37,    94,
     100,     0,    68,     0,    59,     0,   101,    67,    70,    83,
       0,    69,    72,     3,   129,     0,   129,    88,    82,    84,
      37,    90,    37,     0,   129,    95,     3,    91,    90,    37,
      71,     3,    81,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   132,     4,     2,    20,    21,     5,    46,    47,
      48,   151,    49,   117,   137,   162,    50,   108,   123,    51,
     144,   145,   164,   146,   163,    52,    53,    54,   107,   218,
     222,   226,    55,    56,   134,   179,   102,   159,   180,   223,
     228,   194,   234,   114,   133,   166,   190,   158,   177,   212,
     204,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     206,   109,   126,   153,   207,   170
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -155
static const yytype_int16 yypact[] =
{
    -155,    13,    86,  -155,   195,    17,    15,    35,    36,    37,
      39,    41,    43,    44,    45,    51,     1,    52,    53,    56,
    -155,  -155,    50,  -155,    12,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,    57,   161,  -155,
      59,    61,    62,   161,  -155,    63,  -155,  -155,  -155,  -155,
    -155,  -155,    66,  -155,  -155,  -155,  -155,  -155,  -155,   -10,
     -24,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,     5,     8,     9,    26,    67,  -155,   -24,  -155,   -24,
    -155,  -155,  -155,  -155,    20,    25,    48,    90,    34,    85,
    -155,  -155,  -155,   161,   161,   161,   161,  -155,  -155,  -155,
    -155,   100,    49,  -155,    58,   106,  -155,    54,     4,     3,
      55,    60,    46,    71,    64,  -155,  -155,    65,    21,    68,
    -155,   -26,  -155,  -155,    73,  -155,  -155,   161,   161,  -155,
    -155,   -24,   103,  -155,  -155,   -24,   114,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,   -26,  -155,  -155,  -155,    80,  -155,
    -155,  -155,     7,   -26,    75,    76,  -155,    81,   -18,    87,
    -155,    88,   -26,    29,    19,  -155,     2,   -24,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,   161,    77,    91,
    -155,   118,  -155,  -155,    82,  -155,   -26,   -24,   -24,   120,
    -155,  -155,   144,  -155,   146,   -24,  -155,    21,  -155,   -26,
    -155,    89,    93,  -155,   151,  -155,  -155,  -155,   -26,  -155,
     -18,    21,   137,    94,  -155,   161,  -155,  -155,   102,  -155,
     154,  -155,   138,    95,   -24,   104,   -24,   119,  -155,  -155,
     -26,  -155,   -26,    97,   -24,  -155,   109,  -155,  -155,   -26,
    -155,   105,  -155,  -155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,    -3,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -141,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -154,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -116,   -54,  -155,  -155,  -155,   -39,  -155,
    -155,   -43,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
     -59,  -155,  -155,  -155,   -55,  -155
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -77
static const yytype_int16 yytable[] =
{
      87,    92,    22,   165,   148,   187,   124,    33,   121,   184,
     186,   168,   171,     3,   169,    57,    58,    -2,    98,    23,
      99,   182,   138,   139,   138,   139,   140,   141,   140,   141,
     149,   150,   138,   139,   175,   176,   140,   141,    24,    25,
      91,    26,    27,   208,    28,   198,    29,    30,    90,    31,
     110,   111,   112,   113,    32,    34,    35,   216,   209,    36,
      59,   188,    84,   122,    85,    86,    88,   214,   125,    89,
      97,    93,   156,   101,    94,    95,   160,   142,   100,   142,
     143,   185,   143,    37,   154,   155,   -24,   142,   183,   235,
     143,   237,    96,   104,    38,    39,    40,   105,   242,    41,
      42,    43,   106,   115,    44,    45,   103,   116,   191,   119,
     157,   127,   120,   129,   136,   236,   128,   161,   118,   -24,
     193,   221,   241,   131,   135,   196,   147,   201,   199,   200,
     -24,   -24,   -24,   152,   192,   -24,   -24,   -24,   130,   167,
     -24,   -24,   172,   173,   174,   197,   -76,   202,   181,    60,
     195,   205,   210,   211,   213,   217,   178,   224,   219,   225,
     227,   238,   231,   189,    60,   230,   233,   232,   240,   229,
     243,   215,   220,   203,    61,    62,    63,    64,    65,   239,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    61,
      62,    63,    64,    65,     0,    66,    67,    68,    69,    70,
      71,    72,    73,    74,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,    14,     0,    15,    16,    17,
      18,    19
};

static const yytype_int16 yycheck[] =
{
      43,    60,     5,   144,   120,     3,     3,     6,     4,   163,
     164,     4,   153,     0,     7,     3,     4,     0,    77,     4,
      79,   162,     3,     4,     3,     4,     7,     8,     7,     8,
      56,    57,     3,     4,    52,    53,     7,     8,     3,     3,
      64,     4,     3,   197,     3,   186,     3,     3,    58,     4,
      93,    94,    95,    96,     3,     3,     3,   211,   199,     3,
       3,    59,     3,    59,     3,     3,     3,   208,    65,     3,
       3,    66,   131,    48,    66,    66,   135,    58,    58,    58,
      61,    62,    61,    33,   127,   128,     0,    58,    59,   230,
      61,   232,    66,     3,    44,    45,    46,    63,   239,    49,
      50,    51,    17,     3,    54,    55,    58,    58,   167,     3,
       7,    56,    58,    67,   117,   231,    56,     3,    60,    33,
      43,    19,   238,    59,    59,     7,    58,     7,   187,   188,
      44,    45,    46,    60,   177,    49,    50,    51,    67,    59,
      54,    55,    67,    67,    63,    63,    59,     3,    60,     3,
      59,   194,    63,    60,     3,    18,   159,     3,    64,    21,
      65,    64,    58,   166,     3,   224,    47,   226,    59,   223,
      65,   210,   215,    27,    28,    29,    30,    31,    32,   234,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    28,
      29,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    20,    -1,    22,    23,    24,
      25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    69,    72,     0,    71,    75,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    22,    23,    24,    25,    26,
      73,    74,    70,     4,     3,     3,     4,     3,     3,     3,
       3,     4,     3,     6,     3,     3,     3,    33,    44,    45,
      46,    49,    50,    51,    54,    55,    76,    77,    78,    80,
      84,    87,    93,    94,    95,   100,   101,     3,     4,     3,
       3,    28,    29,    30,    31,    32,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     3,     3,     3,   119,     3,     3,
      58,    64,   128,    66,    66,    66,    66,     3,   128,   128,
      58,    48,   104,    58,     3,    63,    17,    96,    85,   129,
     119,   119,   119,   119,   111,     3,    58,    81,    60,     3,
      58,     4,    59,    86,     3,    65,   130,    56,    56,    67,
      67,    59,    70,   112,   102,    59,    70,    82,     3,     4,
       7,     8,    58,    61,    88,    89,    91,    58,   111,    56,
      57,    79,    60,   131,   119,   119,   128,     7,   115,   105,
     128,     3,    83,    92,    90,    79,   113,    59,     4,     7,
     133,    79,    67,    67,    63,    52,    53,   116,    70,   103,
     106,    60,    79,    59,    88,    62,    88,     3,    59,    70,
     114,   128,   119,    43,   109,    59,     7,    63,    79,   128,
     128,     7,     3,    27,   118,   119,   128,   132,    88,    79,
      63,    60,   117,     3,    79,   116,    88,    18,    97,    64,
     119,    19,    98,   107,     3,    21,    99,    65,   108,   112,
     128,    58,   128,    47,   110,    79,   111,    79,    64,   132,
      59,   111,    79,    65
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 252 "thrifty.yy"
    {
      pdebug("Program -> Headers DefinitionList");
      /*
      TODO(dreiss): Decide whether full-program doctext is worth the trouble.
      if ($1 != NULL) {
        g_program->set_doc($1);
      }
      */
      clear_doctext();
    }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 264 "thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.dtext) = g_doctext;
        g_doctext = NULL;
      } else {
        (yyval.dtext) = NULL;
      }
    }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 275 "thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        clear_doctext();
      }
    }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 285 "thrifty.yy"
    {
      pdebug("HeaderList -> HeaderList Header");
    }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 289 "thrifty.yy"
    {
      pdebug("HeaderList -> ");
    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 295 "thrifty.yy"
    {
      pdebug("Header -> Include");
    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 299 "thrifty.yy"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 306 "thrifty.yy"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_literal");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 314 "thrifty.yy"
    {
      pwarning(1, "'cpp_namespace' is deprecated. Use 'namespace cpp' instead");
      pdebug("Header -> tok_cpp_namespace tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cpp", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 322 "thrifty.yy"
    {
      pdebug("Header -> tok_cpp_include tok_literal");
      if (g_parse_mode == PROGRAM) {
        g_program->add_cpp_include((yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 329 "thrifty.yy"
    {
      pwarning(1, "'php_namespace' is deprecated. Use 'namespace php' instead");
      pdebug("Header -> tok_php_namespace tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("php", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 338 "thrifty.yy"
    {
      pwarning(1, "'py_module' is deprecated. Use 'namespace py' instead");
      pdebug("Header -> tok_py_module tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("py", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 347 "thrifty.yy"
    {
      pwarning(1, "'perl_package' is deprecated. Use 'namespace perl' instead");
      pdebug("Header -> tok_perl_namespace tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("perl", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 356 "thrifty.yy"
    {
      pwarning(1, "'ruby_namespace' is deprecated. Use 'namespace rb' instead");
      pdebug("Header -> tok_ruby_namespace tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("rb", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 365 "thrifty.yy"
    {
      pwarning(1, "'smalltalk_category' is deprecated. Use 'namespace smalltalk.category' instead");
      pdebug("Header -> tok_smalltalk_category tok_st_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("smalltalk.category", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 374 "thrifty.yy"
    {
      pwarning(1, "'smalltalk_prefix' is deprecated. Use 'namespace smalltalk.prefix' instead");
      pdebug("Header -> tok_smalltalk_prefix tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("smalltalk.prefix", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 383 "thrifty.yy"
    {
      pwarning(1, "'java_package' is deprecated. Use 'namespace java' instead");
      pdebug("Header -> tok_java_package tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("java", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 392 "thrifty.yy"
    {
      pwarning(1, "'cocoa_prefix' is deprecated. Use 'namespace cocoa' instead");
      pdebug("Header -> tok_cocoa_prefix tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cocoa", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 401 "thrifty.yy"
    {
      pwarning(1, "'xsd_namespace' is deprecated. Use 'namespace xsd' instead");
      pdebug("Header -> tok_xsd_namespace tok_literal");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace("cocoa", (yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 410 "thrifty.yy"
    {
     pwarning(1, "'csharp_namespace' is deprecated. Use 'namespace csharp' instead");
     pdebug("Header -> tok_csharp_namespace tok_identifier");
     if (g_parse_mode == PROGRAM) {
       g_program->set_namespace("csharp", (yyvsp[(2) - (2)].id));
     }
   }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 420 "thrifty.yy"
    {
      pdebug("Include -> tok_include tok_literal");
      if (g_parse_mode == INCLUDES) {
        std::string path = include_file(std::string((yyvsp[(2) - (2)].id)));
        if (!path.empty()) {
          g_program->add_include(path, std::string((yyvsp[(2) - (2)].id)));
        }
      }
    }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 432 "thrifty.yy"
    {
      pdebug("DefinitionList -> DefinitionList Definition");
      if ((yyvsp[(2) - (3)].dtext) != NULL && (yyvsp[(3) - (3)].tdoc) != NULL) {
        (yyvsp[(3) - (3)].tdoc)->set_doc((yyvsp[(2) - (3)].dtext));
      }
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 439 "thrifty.yy"
    {
      pdebug("DefinitionList -> ");
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 445 "thrifty.yy"
    {
      pdebug("Definition -> Const");
      if (g_parse_mode == PROGRAM) {
        g_program->add_const((yyvsp[(1) - (1)].tconst));
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tconst);
    }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 453 "thrifty.yy"
    {
      pdebug("Definition -> TypeDefinition");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_type((yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_type(g_parent_prefix + (yyvsp[(1) - (1)].ttype)->get_name(), (yyvsp[(1) - (1)].ttype));
        }
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 464 "thrifty.yy"
    {
      pdebug("Definition -> Service");
      if (g_parse_mode == PROGRAM) {
        g_scope->add_service((yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_service(g_parent_prefix + (yyvsp[(1) - (1)].tservice)->get_name(), (yyvsp[(1) - (1)].tservice));
        }
        g_program->add_service((yyvsp[(1) - (1)].tservice));
      }
      (yyval.tdoc) = (yyvsp[(1) - (1)].tservice);
    }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 478 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Typedef");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 485 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Enum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_enum((yyvsp[(1) - (1)].tenum));
      }
    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 492 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Senum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 499 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Struct");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 506 "thrifty.yy"
    {
      pdebug("TypeDefinition -> View");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 513 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Xception");
      if (g_parse_mode == PROGRAM) {
        g_program->add_xception((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 522 "thrifty.yy"
    {
      pdebug("TypeDef -> tok_typedef FieldType tok_identifier");
      t_typedef *td = new t_typedef(g_program, (yyvsp[(2) - (3)].ttype), (yyvsp[(3) - (3)].id));
      (yyval.ttypedef) = td;
    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 530 "thrifty.yy"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 532 "thrifty.yy"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 534 "thrifty.yy"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 538 "thrifty.yy"
    {
      pdebug("Enum -> tok_enum tok_identifier { EnumDefList }");
      (yyval.tenum) = (yyvsp[(4) - (6)].tenum);
      (yyval.tenum)->set_name((yyvsp[(2) - (6)].id));
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tenum)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }
    }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 550 "thrifty.yy"
    {
      pdebug("EnumDefList -> EnumDefList EnumDef");
      (yyval.tenum) = (yyvsp[(1) - (2)].tenum);
      (yyval.tenum)->append((yyvsp[(2) - (2)].tenumv));
    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 556 "thrifty.yy"
    {
      pdebug("EnumDefList -> ");
      (yyval.tenum) = new t_enum(g_program);
      y_enum_val = -1;
    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 564 "thrifty.yy"
    {
      pdebug("EnumDef -> EnumValue");
      (yyval.tenumv) = (yyvsp[(2) - (3)].tenumv);
      if ((yyvsp[(1) - (3)].dtext) != NULL) {
        (yyval.tenumv)->set_doc((yyvsp[(1) - (3)].dtext));
      }
      if (g_parse_mode == PROGRAM) {
        // The scope constants never get deleted, so it's okay for us
        // to share a single t_const object between our scope and the parent
        // scope
        t_const* constant = new t_const(g_type_i32, (yyvsp[(2) - (3)].tenumv)->get_name(),
                                        new t_const_value((yyvsp[(2) - (3)].tenumv)->get_value()));
        g_scope->add_constant((yyvsp[(2) - (3)].tenumv)->get_name(), constant);
        if (g_parent_scope != NULL) {
          g_parent_scope->add_constant(g_parent_prefix + (yyvsp[(2) - (3)].tenumv)->get_name(),
                                       constant);
        }
      }
    }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 586 "thrifty.yy"
    {
      pdebug("EnumValue -> tok_identifier = tok_int_constant");
      if ((yyvsp[(3) - (3)].iconst) < 0 && !g_allow_neg_enum_vals) {
        pwarning(1, "Negative value supplied for enum %s.", (yyvsp[(1) - (3)].id));
      }
      if ((yyvsp[(3) - (3)].iconst) < INT32_MIN || (yyvsp[(3) - (3)].iconst) > INT32_MAX) {
        // Note: this used to be just a warning.  However, since thrift always
        // treats enums as i32 values, I'm changing it to a fatal error.
        // I doubt this will affect many people, but users who run into this
        // will have to update their thrift files to manually specify the
        // truncated i32 value that thrift has always been using anyway.
        failure("64-bit value supplied for enum %s will be truncated.", (yyvsp[(1) - (3)].id));
      }
      y_enum_val = (yyvsp[(3) - (3)].iconst);
      (yyval.tenumv) = new t_enum_value((yyvsp[(1) - (3)].id), y_enum_val);
    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 604 "thrifty.yy"
    {
      pdebug("EnumValue -> tok_identifier");
      if (y_enum_val == INT32_MAX) {
        failure("enum value overflow at enum %s", (yyvsp[(1) - (1)].id));
      }
      ++y_enum_val;
      (yyval.tenumv) = new t_enum_value((yyvsp[(1) - (1)].id), y_enum_val);
    }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 615 "thrifty.yy"
    {
      pdebug("Senum -> tok_senum tok_identifier { SenumDefList }");
      (yyval.ttypedef) = new t_typedef(g_program, (yyvsp[(4) - (5)].tbase), (yyvsp[(2) - (5)].id));
    }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 622 "thrifty.yy"
    {
      pdebug("SenumDefList -> SenumDefList SenumDef");
      (yyval.tbase) = (yyvsp[(1) - (2)].tbase);
      (yyval.tbase)->add_string_enum_val((yyvsp[(2) - (2)].id));
    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 628 "thrifty.yy"
    {
      pdebug("SenumDefList -> ");
      (yyval.tbase) = new t_base_type("string", t_base_type::TYPE_STRING);
      (yyval.tbase)->set_string_enum(true);
    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 636 "thrifty.yy"
    {
      pdebug("SenumDef -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (2)].id);
    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 643 "thrifty.yy"
    {
      pdebug("Const -> tok_const FieldType tok_identifier = ConstValue");
      if (g_parse_mode == PROGRAM) {
        (yyval.tconst) = new t_const((yyvsp[(2) - (6)].ttype), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].tconstv));
        validate_const_type((yyval.tconst));

        g_scope->add_constant((yyvsp[(3) - (6)].id), (yyval.tconst));
        if (g_parent_scope != NULL) {
          g_parent_scope->add_constant(g_parent_prefix + (yyvsp[(3) - (6)].id), (yyval.tconst));
        }

      } else {
        (yyval.tconst) = NULL;
      }
    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 661 "thrifty.yy"
    {
      pdebug("ConstValue => tok_int_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_integer((yyvsp[(1) - (1)].iconst));
      if (!g_allow_64bit_consts && ((yyvsp[(1) - (1)].iconst) < INT32_MIN || (yyvsp[(1) - (1)].iconst) > INT32_MAX)) {
        pwarning(1, "64-bit constant \"%" PRIi64 "\" may not work in all languages.", (yyvsp[(1) - (1)].iconst));
      }
    }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 670 "thrifty.yy"
    {
      pdebug("ConstValue => tok_dub_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_double((yyvsp[(1) - (1)].dconst));
    }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 676 "thrifty.yy"
    {
      pdebug("ConstValue => tok_literal");
      (yyval.tconstv) = new t_const_value((yyvsp[(1) - (1)].id));
    }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 681 "thrifty.yy"
    {
      pdebug("ConstValue => tok_identifier");
      t_const* constant = g_scope->get_constant((yyvsp[(1) - (1)].id));
      if (constant != NULL) {
        (yyval.tconstv) = constant->get_value();
      } else {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "Constant strings should be quoted: %s", (yyvsp[(1) - (1)].id));
        }
        (yyval.tconstv) = new t_const_value((yyvsp[(1) - (1)].id));
      }
    }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 694 "thrifty.yy"
    {
      pdebug("ConstValue => ConstList");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 699 "thrifty.yy"
    {
      pdebug("ConstValue => ConstMap");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 706 "thrifty.yy"
    {
      pdebug("ConstList => [ ConstListContents ]");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 713 "thrifty.yy"
    {
      pdebug("ConstListContents => ConstListContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (3)].tconstv);
      (yyval.tconstv)->add_list((yyvsp[(2) - (3)].tconstv));
    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 719 "thrifty.yy"
    {
      pdebug("ConstListContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_list();
    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 727 "thrifty.yy"
    {
      pdebug("ConstMap => { ConstMapContents }");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 734 "thrifty.yy"
    {
      pdebug("ConstMapContents => ConstMapContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (5)].tconstv);
      (yyval.tconstv)->add_map((yyvsp[(2) - (5)].tconstv), (yyvsp[(4) - (5)].tconstv));
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 740 "thrifty.yy"
    {
      pdebug("ConstMapContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_map();
    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 748 "thrifty.yy"
    {
      (yyval.iconst) = struct_is_struct;
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 752 "thrifty.yy"
    {
      (yyval.iconst) = struct_is_union;
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 758 "thrifty.yy"
    {
      pdebug("Struct -> tok_struct tok_identifier { FieldList }");
      (yyvsp[(5) - (7)].tstruct)->set_xsd_all((yyvsp[(3) - (7)].tbool));
      (yyvsp[(5) - (7)].tstruct)->set_union((yyvsp[(1) - (7)].iconst) == struct_is_union);
      (yyval.tstruct) = (yyvsp[(5) - (7)].tstruct);
      (yyval.tstruct)->set_name((yyvsp[(2) - (7)].id));
      if ((yyvsp[(7) - (7)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(7) - (7)].ttype)->annotations_;
        delete (yyvsp[(7) - (7)].ttype);
      }
      y_field_val = -1;
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 773 "thrifty.yy"
    {
      pdebug("View -> tok_view tok_identifier { ViewFieldList }");
      if (g_parse_mode == INCLUDES) {
        (yyval.tstruct) = (yyvsp[(6) - (8)].tstruct);
        (yyval.tstruct)->set_name((yyvsp[(2) - (8)].id));
      } else {
        // Lookup the identifier in the current scope
        t_type* parent_type = g_scope->get_type((yyvsp[(4) - (8)].id));
        if (parent_type == NULL || !parent_type->is_struct()) {
          yyerror("Struct \"%s\" has not been defined. %d", (yyvsp[(4) - (8)].id), g_parse_mode);
          exit(1);
        }
        t_struct* parent_struct = dynamic_cast<t_struct*>(parent_type);
        (yyval.tstruct) = new t_struct(g_program);
        (yyval.tstruct)->set_name((yyvsp[(2) - (8)].id));
        (yyval.tstruct)->set_view_parent(parent_struct->get_view_parent());
        (yyval.tstruct)->annotations_ = parent_struct->annotations_;
        for (const auto& it : (yyvsp[(6) - (8)].tstruct)->get_members()) {
          if (!parent_struct->has_field_named(it->get_name().c_str())) {
            failure("view field '%s.%s' is not found in parent struct '%s'",
                    (yyvsp[(2) - (8)].id), it->get_name().c_str(), (yyvsp[(4) - (8)].id));
          }
          const t_field* f = parent_struct->get_field_named(it->get_name().c_str());
          t_field* nf;
          if (it->get_type() != NULL) {
            // Field is fully described, verify that definitions are compatible
            nf = it;
            if (nf->get_key() != f->get_key()) {
              failure("view field '%s.%s' has a different key from parent struct '%s':"
                      " %d vs %d",
                      (yyvsp[(2) - (8)].id), it->get_name().c_str(), (yyvsp[(4) - (8)].id), f->get_key(), nf->get_key());
            }
            if (nf->get_req() != f->get_req()) {
              failure("view field '%s.%s' has a different requirement specifier "
                      "from parent struct '%s'",
                      (yyvsp[(2) - (8)].id), it->get_name().c_str(), (yyvsp[(4) - (8)].id));
            }
            if (nf->get_type()->get_impl_full_name() != f->get_type()->get_impl_full_name()) {
              failure("view field '%s.%s' has a different type from parent struct '%s':"
                      " '%s' vs '%s'",
                      (yyvsp[(2) - (8)].id), it->get_name().c_str(), (yyvsp[(4) - (8)].id),
                      f->get_type()->get_impl_full_name().c_str(),
                      nf->get_type()->get_impl_full_name().c_str());
            }
            if (f->get_value()) {
              nf->set_value(new t_const_value(*f->get_value()));
            }
          } else {
            // It's just a reference to the field, copy the definition from the
            // parent struct
            nf = new t_field(*f);
            override_annotations(nf->annotations_, it->annotations_);
          }
          if (!(yyval.tstruct)->append(nf)) {
            yyerror("Field identifier %d for \"%s\" has already been used", nf->get_key(), nf->get_name().c_str());
            exit(1);
          }
          if (nf != it) {
            delete it;
          }
        }
        if ((yyvsp[(8) - (8)].ttype) != NULL) {
          override_annotations((yyval.tstruct)->annotations_, (yyvsp[(8) - (8)].ttype)->annotations_);
          delete (yyvsp[(8) - (8)].ttype);
        }
        delete (yyvsp[(6) - (8)].tstruct);
      }
      y_field_val = -1;
    }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 845 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 849 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 855 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 859 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 865 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 869 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 875 "thrifty.yy"
    {
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 879 "thrifty.yy"
    {
      (yyval.tstruct) = NULL;
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 885 "thrifty.yy"
    {
      pdebug("Xception -> tok_xception tok_identifier { FieldList }");
      (yyvsp[(4) - (6)].tstruct)->set_name((yyvsp[(2) - (6)].id));
      (yyvsp[(4) - (6)].tstruct)->set_xception(true);
      (yyval.tstruct) = (yyvsp[(4) - (6)].tstruct);
      if ((yyvsp[(6) - (6)].ttype) != NULL) {
        (yyval.tstruct)->annotations_ = (yyvsp[(6) - (6)].ttype)->annotations_;
        delete (yyvsp[(6) - (6)].ttype);
      }

      const char* annotations[] = {"message", "code"};
      for (auto& annotation: annotations) {
        if (g_parse_mode == PROGRAM
            && (yyval.tstruct)->has_field_named(annotation)
            && (yyval.tstruct)->annotations_.find(annotation) != (yyval.tstruct)->annotations_.end()
            && strcmp(annotation, (yyval.tstruct)->annotations_.find(annotation)->second.c_str()) != 0) {
          pwarning(1, "Some generators (eg. PHP) will ignore annotation '%s' "
                      "as it is also used as field", annotation);
        }
      }

      // Check that value of "message" annotation is
      // - a valid member of struct
      // - of type STRING
      if (g_parse_mode == PROGRAM
          && (yyval.tstruct)->annotations_.find("message") != (yyval.tstruct)->annotations_.end()) {
        const std::string v = (yyval.tstruct)->annotations_.find("message")->second;

        if (!(yyval.tstruct)->has_field_named(v.c_str())) {
          failure("member specified as exception 'message' should be a valid"
                  " struct member, '%s' in '%s' is not", v.c_str(), (yyvsp[(2) - (6)].id));
        }

        auto field = (yyval.tstruct)->get_field_named(v.c_str());
        if (!field->get_type()->is_string()) {
          failure("member specified as exception 'message' should be of type "
                  "STRING, '%s' in '%s' is not", v.c_str(), (yyvsp[(2) - (6)].id));
        }
      }

      y_field_val = -1;
    }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 930 "thrifty.yy"
    {
      pdebug("Service -> tok_service tok_identifier { FunctionList }");
      (yyval.tservice) = (yyvsp[(6) - (9)].tservice);
      (yyval.tservice)->set_name((yyvsp[(2) - (9)].id));
      (yyval.tservice)->set_extends((yyvsp[(3) - (9)].tservice));
      if ((yyvsp[(9) - (9)].ttype)) {
        (yyval.tservice)->annotations_ = (yyvsp[(9) - (9)].ttype)->annotations_;
      }
    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 941 "thrifty.yy"
    {
       g_arglist = 1;
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 946 "thrifty.yy"
    {
       g_arglist = 0;
    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 952 "thrifty.yy"
    {
      pdebug("Extends -> tok_extends tok_identifier");
      (yyval.tservice) = NULL;
      if (g_parse_mode == PROGRAM) {
        (yyval.tservice) = g_scope->get_service((yyvsp[(2) - (2)].id));
        if ((yyval.tservice) == NULL) {
          yyerror("Service \"%s\" has not been defined.", (yyvsp[(2) - (2)].id));
          exit(1);
        }
      }
    }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 964 "thrifty.yy"
    {
      (yyval.tservice) = NULL;
    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 970 "thrifty.yy"
    {
      pdebug("FunctionList -> FunctionList Function");
      (yyval.tservice) = (yyvsp[(1) - (2)].tservice);
      (yyvsp[(1) - (2)].tservice)->add_function((yyvsp[(2) - (2)].tfunction));
    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 976 "thrifty.yy"
    {
      pdebug("FunctionList -> ");
      (yyval.tservice) = new t_service(g_program);
    }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 983 "thrifty.yy"
    {
      (yyvsp[(6) - (10)].tstruct)->set_name(std::string((yyvsp[(4) - (10)].id)) + "_args");
      (yyval.tfunction) = new t_function((yyvsp[(3) - (10)].ttype), (yyvsp[(4) - (10)].id), (yyvsp[(6) - (10)].tstruct), (yyvsp[(8) - (10)].tstruct), (yyvsp[(9) - (10)].ttype), (yyvsp[(2) - (10)].tbool));
      if ((yyvsp[(1) - (10)].dtext) != NULL) {
        (yyval.tfunction)->set_doc((yyvsp[(1) - (10)].dtext));
      }
      y_field_val = -1;
    }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 994 "thrifty.yy"
    {
      pdebug("ParamList -> ParamList , Param");
      (yyval.tstruct) = (yyvsp[(1) - (2)].tstruct);
      if (!((yyval.tstruct)->append((yyvsp[(2) - (2)].tfield)))) {
        yyerror("Parameter identifier %d for \"%s\" has already been used", (yyvsp[(2) - (2)].tfield)->get_key(), (yyvsp[(2) - (2)].tfield)->get_name().c_str());
        exit(1);
      }
    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1003 "thrifty.yy"
    {
      pdebug("ParamList -> ");
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1010 "thrifty.yy"
    {
      pdebug("Param -> Field");
      (yyval.tfield) = (yyvsp[(1) - (1)].tfield);
    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1017 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1021 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1027 "thrifty.yy"
    {
      pdebug("Throws -> tok_throws ( FieldList )");
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
      if (g_parse_mode == PROGRAM && !validate_throws((yyval.tstruct))) {
        yyerror("Throws clause may not contain non-exception types");
        exit(1);
      }
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1036 "thrifty.yy"
    {
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1042 "thrifty.yy"
    {
      pdebug("FieldList -> FieldList , Field");
      (yyval.tstruct) = (yyvsp[(1) - (2)].tstruct);
      if (!((yyval.tstruct)->append((yyvsp[(2) - (2)].tfield)))) {
        yyerror("Field identifier %d for \"%s\" has already been used", (yyvsp[(2) - (2)].tfield)->get_key(), (yyvsp[(2) - (2)].tfield)->get_name().c_str());
        exit(1);
      }
    }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1051 "thrifty.yy"
    {
      pdebug("FieldList -> ");
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1058 "thrifty.yy"
    {
      pdebug("tok_int_constant : Field -> FieldType tok_identifier");
      if ((yyvsp[(2) - (11)].tfieldid).auto_assigned) {
        pwarning(1, "No field key specified for %s, resulting protocol may have conflicts or not be backwards compatible!", (yyvsp[(5) - (11)].id));
        if (g_strict >= 192) {
          yyerror("Implicit field keys are deprecated and not allowed with -strict");
          exit(1);
        }
      }

      (yyval.tfield) = new t_field((yyvsp[(4) - (11)].ttype), (yyvsp[(5) - (11)].id), (yyvsp[(2) - (11)].tfieldid).value);
      (yyval.tfield)->set_req((yyvsp[(3) - (11)].ereq));
      if ((yyvsp[(6) - (11)].tconstv) != NULL) {
        validate_field_value((yyval.tfield), (yyvsp[(6) - (11)].tconstv));
        (yyval.tfield)->set_value((yyvsp[(6) - (11)].tconstv));
      }
      (yyval.tfield)->set_xsd_optional((yyvsp[(7) - (11)].tbool));
      (yyval.tfield)->set_xsd_nillable((yyvsp[(8) - (11)].tbool));
      if ((yyvsp[(1) - (11)].dtext) != NULL) {
        (yyval.tfield)->set_doc((yyvsp[(1) - (11)].dtext));
      }
      if ((yyvsp[(9) - (11)].tstruct) != NULL) {
        (yyval.tfield)->set_xsd_attrs((yyvsp[(9) - (11)].tstruct));
      }
      if ((yyvsp[(10) - (11)].ttype) != NULL) {
        (yyval.tfield)->annotations_ = (yyvsp[(10) - (11)].ttype)->annotations_;
        delete (yyvsp[(10) - (11)].ttype);
      }
    }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1090 "thrifty.yy"
    {
      pdebug("ViewFieldList -> ViewFieldList , ViewField");
      (yyval.tstruct) = (yyvsp[(1) - (2)].tstruct);
      // do not bother about field identifiers
      if ((yyval.tstruct)->has_field_named((yyvsp[(2) - (2)].tfield)->get_name().c_str())) {
        yyerror("Field name %s has already been listed", (yyvsp[(2) - (2)].tfield)->get_name().c_str());
        exit(1);
      }
      (yyval.tstruct)->append((yyvsp[(2) - (2)].tfield));
    }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1101 "thrifty.yy"
    {
      pdebug("ViewFieldList -> ");
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1108 "thrifty.yy"
    {
      pdebug("tok_int_constant : FieldTypeOptional tok_identifier");
      // used only for tracking names, we'll reuse structs from original struct
      (yyval.tfield) = new t_field(NULL, (yyvsp[(1) - (3)].id));
      if ((yyvsp[(2) - (3)].ttype) != NULL) {
        (yyval.tfield)->annotations_ = (yyvsp[(2) - (3)].ttype)->annotations_;
        delete (yyvsp[(2) - (3)].ttype);
      }
    }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1118 "thrifty.yy"
    {
      // In order to make grammar parsable we have to make id specifier required
      // if type is provided.
      pdebug("ViewField -> tok_int_constant : FieldType tok_identifier");
      (yyval.tfield) = new t_field((yyvsp[(5) - (8)].ttype), (yyvsp[(6) - (8)].id), (yyvsp[(2) - (8)].iconst));
      (yyval.tfield)->set_req((yyvsp[(4) - (8)].ereq));
      if ((yyvsp[(1) - (8)].dtext) != NULL) {
        (yyval.tfield)->set_doc((yyvsp[(1) - (8)].dtext));
      }
      if ((yyvsp[(7) - (8)].ttype) != NULL) {
        (yyval.tfield)->annotations_ = (yyvsp[(7) - (8)].ttype)->annotations_;
        delete (yyvsp[(7) - (8)].ttype);
      }
    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1135 "thrifty.yy"
    {
      if ((yyvsp[(1) - (2)].iconst) <= 0) {
        if (g_allow_neg_field_keys) {
          /*
           * g_allow_neg_field_keys exists to allow users to add explicitly
           * specified key values to old .thrift files without breaking
           * protocol compatibility.
           */
          if ((yyvsp[(1) - (2)].iconst) != y_field_val) {
            /*
             * warn if the user-specified negative value isn't what
             * thrift would have auto-assigned.
             */
            pwarning(1, "Negative field key (%d) differs from what would be "
                     "auto-assigned by thrift (%d).", (yyvsp[(1) - (2)].iconst), y_field_val);
          }
          /*
           * Leave $1 as-is, and update y_field_val to be one less than $1.
           * The FieldList parsing will catch any duplicate key values.
           */
          y_field_val = (yyvsp[(1) - (2)].iconst) - 1;
          (yyval.tfieldid).value = (yyvsp[(1) - (2)].iconst);
          (yyval.tfieldid).auto_assigned = false;
        } else {
          pwarning(1, "Nonpositive value (%d) not allowed as a field key.",
                   (yyvsp[(1) - (2)].iconst));
          (yyval.tfieldid).value = y_field_val--;
          (yyval.tfieldid).auto_assigned = true;
        }
      } else {
        (yyval.tfieldid).value = (yyvsp[(1) - (2)].iconst);
        (yyval.tfieldid).auto_assigned = false;
      }
    }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1170 "thrifty.yy"
    {
      (yyval.tfieldid).value = y_field_val--;
      (yyval.tfieldid).auto_assigned = true;
    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1177 "thrifty.yy"
    {
      if (g_arglist) {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "required keyword is ignored in argument lists.");
        }
        (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
      } else {
        (yyval.ereq) = t_field::T_REQUIRED;
      }
    }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1188 "thrifty.yy"
    {
      if (g_arglist) {
        if (g_parse_mode == PROGRAM) {
          pwarning(1, "optional keyword is ignored in argument lists.");
        }
        (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
      } else {
        (yyval.ereq) = t_field::T_OPTIONAL;
      }
    }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1199 "thrifty.yy"
    {
      (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1205 "thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        (yyval.tconstv) = (yyvsp[(2) - (2)].tconstv);
      } else {
        (yyval.tconstv) = NULL;
      }
    }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1213 "thrifty.yy"
    {
      (yyval.tconstv) = NULL;
    }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1219 "thrifty.yy"
    {
      pdebug("FunctionType -> FieldType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1224 "thrifty.yy"
    {
      pdebug("FunctionType -> tok_void");
      (yyval.ttype) = g_type_void;
    }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1231 "thrifty.yy"
    {
      pdebug("FieldType -> tok_identifier");
      if (g_parse_mode == INCLUDES) {
        // Ignore identifiers in include mode
        (yyval.ttype) = NULL;
      } else {
        // Lookup the identifier in the current scope
        (yyval.ttype) = g_scope->get_type((yyvsp[(1) - (2)].id));
        if ((yyval.ttype) == NULL || (yyvsp[(2) - (2)].ttype) != NULL) {
          /*
           * Either this type isn't yet declared, or it's never
             declared.  Either way allow it and we'll figure it out
             during generation.
           */
          (yyval.ttype) = new t_typedef(g_program, (yyvsp[(1) - (2)].id));
          if ((yyvsp[(2) - (2)].ttype) != NULL) {
            (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
            delete (yyvsp[(2) - (2)].ttype);          
          }
        }
      }
    }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1254 "thrifty.yy"
    {
      pdebug("FieldType -> BaseType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1259 "thrifty.yy"
    {
      pdebug("FieldType -> ContainerType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1265 "thrifty.yy"
    {
      pdebug("BaseType -> SimpleBaseType TypeAnnotations");
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype) = new t_base_type(*static_cast<t_base_type*>((yyvsp[(1) - (2)].ttype)));
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      } else {
        (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      }
    }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1278 "thrifty.yy"
    {
      pdebug("BaseType -> tok_string");
      (yyval.ttype) = g_type_string;
    }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1283 "thrifty.yy"
    {
      pdebug("BaseType -> tok_binary");
      (yyval.ttype) = g_type_binary;
    }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1288 "thrifty.yy"
    {
      pdebug("BaseType -> tok_slist");
      (yyval.ttype) = g_type_slist;
    }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1293 "thrifty.yy"
    {
      pdebug("BaseType -> tok_bool");
      (yyval.ttype) = g_type_bool;
    }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1298 "thrifty.yy"
    {
      pdebug("BaseType -> tok_byte");
      (yyval.ttype) = g_type_byte;
    }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1303 "thrifty.yy"
    {
      pdebug("BaseType -> tok_i16");
      (yyval.ttype) = g_type_i16;
    }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1308 "thrifty.yy"
    {
      pdebug("BaseType -> tok_i32");
      (yyval.ttype) = g_type_i32;
    }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1313 "thrifty.yy"
    {
      pdebug("BaseType -> tok_i64");
      (yyval.ttype) = g_type_i64;
    }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1318 "thrifty.yy"
    {
      pdebug("BaseType -> tok_double");
      (yyval.ttype) = g_type_double;
    }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1323 "thrifty.yy"
    {
      pdebug("BaseType -> tok_float");
      (yyval.ttype) = g_type_float;
    }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1329 "thrifty.yy"
    {
      pdebug("ContainerType -> SimpleContainerType TypeAnnotations");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      if ((yyvsp[(2) - (2)].ttype) != NULL) {
        (yyval.ttype)->annotations_ = (yyvsp[(2) - (2)].ttype)->annotations_;
        delete (yyvsp[(2) - (2)].ttype);
      }
    }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1340 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> MapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1345 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> HashMapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1350 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> SetType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1355 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> ListType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1362 "thrifty.yy"
    {
      pdebug("MapType -> tok_map <FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(3) - (6)].ttype), (yyvsp[(5) - (6)].ttype), false);
    }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1369 "thrifty.yy"
    {
      pdebug("HashMapType -> tok_hash_map <FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(3) - (6)].ttype), (yyvsp[(5) - (6)].ttype), true);
    }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1376 "thrifty.yy"
    {
      pdebug("SetType -> tok_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[(3) - (4)].ttype));
    }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1383 "thrifty.yy"
    {
      pdebug("ListType -> tok_list<FieldType>");
      (yyval.ttype) = new t_list((yyvsp[(3) - (4)].ttype));
    }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1390 "thrifty.yy"
    {
      pdebug("TypeAnnotations -> ( TypeAnnotationList )");
      (yyval.ttype) = (yyvsp[(2) - (3)].ttype);
    }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1395 "thrifty.yy"
    {
      (yyval.ttype) = NULL;
    }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1401 "thrifty.yy"
    {
      pdebug("TypeAnnotationList -> TypeAnnotationList , TypeAnnotation");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      (yyval.ttype)->annotations_[(yyvsp[(2) - (2)].tannot)->key] = (yyvsp[(2) - (2)].tannot)->val;
      delete (yyvsp[(2) - (2)].tannot);
    }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1408 "thrifty.yy"
    {
      /* Just use a dummy structure to hold the annotations. */
      (yyval.ttype) = new t_struct(g_program);
    }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1415 "thrifty.yy"
    {
      pdebug("TypeAnnotation TypeAnnotationValue");
      (yyval.tannot) = new t_annotation;
      (yyval.tannot)->key = (yyvsp[(1) - (3)].id);
      (yyval.tannot)->val = (yyvsp[(2) - (3)].id);
    }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1424 "thrifty.yy"
    {
      pdebug("TypeAnnotationValue -> = IntOrLiteral");
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1429 "thrifty.yy"
    {
      pdebug("TypeAnnotationValue ->");
      (yyval.id) = strdup("1");
    }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1436 "thrifty.yy"
    {
      pdebug("FunctionAnnotations -> TypeAnnotations");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
      if ((yyval.ttype) == nullptr) {
        break;
      }
      auto prio_iter = (yyval.ttype)->annotations_.find("priority");
      if (prio_iter == (yyval.ttype)->annotations_.end()) {
       break;
      }
      const std::string& prio = prio_iter->second;
      const std::string prio_list[] = {"HIGH_IMPORTANT", "HIGH", "IMPORTANT",
                                       "NORMAL", "BEST_EFFORT"};
      const auto end = prio_list + sizeof(prio_list)/sizeof(prio_list[0]);
      if (std::find(prio_list, end, prio) == end) {
        std::string s;
        folly::join(std::string("','"), prio_list, end, s);
        failure("Bad priority '%s'. Choose one of '%s'.",
                prio.c_str(), s.c_str());
      }
    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1460 "thrifty.yy"
    {
      pdebug("IntOrLiteral -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (1)].id);
    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1466 "thrifty.yy"
    {
      char buf[21];  // max len of int64_t as string + null terminator
      pdebug("IntOrLiteral -> tok_int_constant");
      sprintf(buf, "%" PRIi64, (yyvsp[(1) - (1)].iconst));
      (yyval.id) = strdup(buf);
    }
    break;



/* Line 1455 of yacc.c  */
#line 3513 "thrifty.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1473 "thrifty.yy"


