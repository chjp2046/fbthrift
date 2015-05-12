
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
     tok_hash_set = 298,
     tok_stream = 299,
     tok_oneway = 300,
     tok_typedef = 301,
     tok_struct = 302,
     tok_xception = 303,
     tok_throws = 304,
     tok_extends = 305,
     tok_service = 306,
     tok_enum = 307,
     tok_const = 308,
     tok_required = 309,
     tok_optional = 310,
     tok_union = 311,
     tok_view = 312
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
#define tok_hash_set 298
#define tok_stream 299
#define tok_oneway 300
#define tok_typedef 301
#define tok_struct 302
#define tok_xception 303
#define tok_throws 304
#define tok_extends 305
#define tok_service 306
#define tok_enum 307
#define tok_const 308
#define tok_required 309
#define tok_optional 310
#define tok_union 311
#define tok_view 312




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
#line 306 "thrifty.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 318 "thrifty.cc"

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
#define YYLAST   235

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  254

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,    67,     2,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    59,
      68,    62,    69,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    61,     2,     2,     2,     2,
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
      55,    56,    57
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
     339,   341,   343,   345,   347,   349,   351,   358,   365,   370,
     375,   380,   385,   389,   390,   393,   394,   398,   401,   402,
     404,   406
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      71,     0,    -1,    74,    77,    -1,    -1,    -1,    74,    73,
      75,    -1,    -1,    76,    -1,    10,     3,     3,    -1,    10,
       3,     4,    -1,    11,     3,    -1,    12,     4,    -1,    13,
       3,    -1,    14,     3,    -1,    15,     3,    -1,    22,     3,
      -1,    23,     6,    -1,    24,     3,    -1,    16,     3,    -1,
      25,     3,    -1,    20,     4,    -1,    26,     3,    -1,     9,
       4,    -1,    77,    72,    78,    -1,    -1,    89,    -1,    79,
      -1,   103,    -1,    80,    -1,    82,    -1,    86,    -1,    96,
      -1,    97,    -1,   102,    -1,    46,   121,     3,    -1,    58,
      -1,    59,    -1,    -1,    52,     3,    60,    83,    61,   132,
      -1,    83,    84,    -1,    -1,    72,    85,    81,    -1,     3,
      62,     7,    -1,     3,    -1,    33,     3,    60,    87,    61,
      -1,    87,    88,    -1,    -1,     4,    81,    -1,    53,   121,
       3,    62,    90,    81,    -1,     7,    -1,     8,    -1,     4,
      -1,     3,    -1,    91,    -1,    93,    -1,    63,    92,    64,
      -1,    92,    90,    81,    -1,    -1,    60,    94,    61,    -1,
      94,    90,    65,    90,    81,    -1,    -1,    47,    -1,    56,
      -1,    95,     3,    98,    60,   113,    61,   132,    -1,    57,
       3,    65,     3,    60,   115,    61,   132,    -1,    17,    -1,
      -1,    18,    -1,    -1,    19,    -1,    -1,    21,    60,   113,
      61,    -1,    -1,    48,     3,    60,   113,    61,   132,    -1,
      51,     3,   106,    60,   104,   107,   105,    61,   136,    -1,
      -1,    -1,    50,     3,    -1,    -1,   107,   108,    -1,    -1,
      72,   111,   120,     3,    66,   109,    67,   112,   136,    81,
      -1,   109,   110,    -1,    -1,   114,    -1,    45,    -1,    -1,
      49,    66,   113,    67,    -1,    -1,   113,   114,    -1,    -1,
      72,   117,   118,   121,     3,   119,    99,   100,   101,   132,
      81,    -1,   115,   116,    -1,    -1,     3,   132,    81,    -1,
      72,     7,    65,   118,   121,     3,   132,    81,    -1,     7,
      65,    -1,    -1,    54,    -1,    55,    -1,    -1,    62,    90,
      -1,    -1,   121,    -1,    27,    -1,     3,   132,    -1,   122,
      -1,   124,    -1,   123,   132,    -1,    30,    -1,    31,    -1,
      32,    -1,    28,    -1,    29,    -1,    34,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,   125,   132,    -1,   126,
      -1,   127,    -1,   128,    -1,   129,    -1,   130,    -1,   131,
      -1,    39,    68,   121,    58,   121,    69,    -1,    40,    68,
     121,    58,   121,    69,    -1,    42,    68,   121,    69,    -1,
      43,    68,   121,    69,    -1,    41,    68,   121,    69,    -1,
      44,    68,   121,    69,    -1,    66,   133,    67,    -1,    -1,
     133,   134,    -1,    -1,     3,   135,    81,    -1,    62,   137,
      -1,    -1,   132,    -1,     4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   255,   255,   268,   279,   288,   293,   298,   302,   309,
     317,   325,   332,   341,   350,   359,   368,   377,   386,   395,
     404,   413,   423,   435,   443,   448,   456,   467,   481,   488,
     495,   502,   509,   516,   525,   533,   535,   538,   541,   553,
     560,   567,   589,   607,   618,   625,   632,   639,   646,   664,
     673,   679,   684,   697,   702,   709,   716,   723,   730,   737,
     744,   751,   755,   761,   776,   848,   853,   858,   863,   868,
     873,   878,   883,   888,   933,   945,   950,   955,   968,   973,
     980,   986,   997,  1007,  1013,  1025,  1030,  1035,  1045,  1050,
    1060,  1066,  1098,  1110,  1116,  1126,  1143,  1179,  1185,  1196,
    1208,  1213,  1222,  1227,  1232,  1239,  1262,  1267,  1273,  1286,
    1291,  1296,  1301,  1306,  1311,  1316,  1321,  1326,  1331,  1337,
    1348,  1353,  1358,  1363,  1368,  1373,  1380,  1387,  1394,  1401,
    1408,  1415,  1422,  1428,  1433,  1441,  1447,  1456,  1462,  1468,
    1492,  1498
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
  "tok_hash_set", "tok_stream", "tok_oneway", "tok_typedef", "tok_struct",
  "tok_xception", "tok_throws", "tok_extends", "tok_service", "tok_enum",
  "tok_const", "tok_required", "tok_optional", "tok_union", "tok_view",
  "','", "';'", "'{'", "'}'", "'='", "'['", "']'", "':'", "'('", "')'",
  "'<'", "'>'", "$accept", "Program", "CaptureDocText", "DestroyDocText",
  "HeaderList", "Header", "Include", "DefinitionList", "Definition",
  "TypeDefinition", "Typedef", "CommaOrSemicolonOptional", "Enum",
  "EnumDefList", "EnumDef", "EnumValue", "Senum", "SenumDefList",
  "SenumDef", "Const", "ConstValue", "ConstList", "ConstListContents",
  "ConstMap", "ConstMapContents", "StructHead", "Struct", "View", "XsdAll",
  "XsdOptional", "XsdNillable", "XsdAttributes", "Xception", "Service",
  "FlagArgs", "UnflagArgs", "Extends", "FunctionList", "Function",
  "ParamList", "Param", "Oneway", "Throws", "FieldList", "Field",
  "ViewFieldList", "ViewField", "FieldIdentifier", "FieldRequiredness",
  "FieldValue", "FunctionType", "FieldType", "BaseType", "SimpleBaseType",
  "ContainerType", "SimpleContainerType", "MapType", "HashMapType",
  "SetType", "HashSetType", "ListType", "StreamType", "TypeAnnotations",
  "TypeAnnotationList", "TypeAnnotation", "TypeAnnotationValue",
  "FunctionAnnotations", "IntOrLiteral", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,    44,    59,
     123,   125,    61,    91,    93,    58,    40,    41,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    81,    82,    83,
      83,    84,    85,    85,    86,    87,    87,    88,    89,    90,
      90,    90,    90,    90,    90,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   103,   104,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   111,   111,   112,   112,   113,
     113,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     125,   125,   125,   125,   125,   125,   126,   127,   128,   129,
     130,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     137,   137
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
       1,     1,     1,     1,     1,     1,     6,     6,     4,     4,
       4,     4,     3,     0,     2,     0,     3,     2,     0,     1,
       1,     1
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
     133,   112,   113,   109,   110,   111,   114,   115,   116,   117,
     118,     0,     0,     0,     0,     0,     0,     0,   106,   133,
     107,   133,   120,   121,   122,   123,   124,   125,     0,    78,
       0,     0,     0,    66,    46,   135,   105,     0,     0,     0,
       0,     0,     0,    34,   108,   119,    90,     0,     0,    40,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,    77,    75,     3,     0,     0,    90,    37,
      44,    45,   138,   132,   134,     0,     0,   130,   128,   129,
     131,   133,    97,    89,    80,   133,     0,    39,    52,    51,
      49,    50,    60,    57,    37,    53,    54,    93,     3,    35,
      36,    47,     0,    37,     0,     0,    73,     0,   100,     3,
      38,    43,    37,     0,     0,    48,     3,   133,   140,   141,
     137,   136,   126,   127,    96,    98,    99,     0,    86,     0,
      79,     0,    41,    58,     0,    55,    37,   133,   133,     0,
      92,    63,     0,    85,     0,   133,    42,     0,    56,    37,
      64,     0,   102,   104,     0,   103,   139,    74,    37,    94,
     100,     0,    68,     0,    59,     0,   101,    67,    70,    83,
       0,    69,    72,     3,   133,     0,   133,    88,    82,    84,
      37,    90,    37,     0,   133,    95,     3,    91,    90,    37,
      71,     3,    81,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   142,     4,     2,    20,    21,     5,    46,    47,
      48,   161,    49,   125,   147,   172,    50,   114,   131,    51,
     154,   155,   174,   156,   173,    52,    53,    54,   113,   228,
     232,   236,    55,    56,   144,   189,   108,   169,   190,   233,
     238,   204,   244,   122,   143,   176,   200,   168,   187,   222,
     214,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,   216,   115,   134,   163,   217,   180
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -162
static const yytype_int16 yypact[] =
{
    -162,    21,    73,  -162,   209,    25,    33,    44,    45,    47,
      46,    49,    50,    58,    63,    67,    69,    74,    75,    76,
    -162,  -162,   -17,  -162,    29,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,    81,   173,  -162,
      82,    84,    85,   173,  -162,    86,  -162,  -162,  -162,  -162,
    -162,  -162,    87,  -162,  -162,  -162,  -162,  -162,  -162,    16,
      31,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,    23,    27,    30,    32,    36,    37,    96,  -162,    31,
    -162,    31,  -162,  -162,  -162,  -162,  -162,  -162,    41,    52,
      48,   104,    62,    92,  -162,  -162,  -162,   173,   173,   173,
     173,   173,   173,  -162,  -162,  -162,  -162,   107,    51,  -162,
      53,   109,  -162,    54,     3,     1,    55,    59,    64,    65,
      66,    68,    70,  -162,  -162,    71,    11,    80,  -162,   -16,
    -162,  -162,    79,  -162,  -162,   173,   173,  -162,  -162,  -162,
    -162,    31,   121,  -162,  -162,    31,   133,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,   -16,  -162,  -162,  -162,    88,  -162,
    -162,  -162,    34,   -16,    77,    78,  -162,    83,   -10,    89,
    -162,    90,   -16,    20,     2,  -162,     8,    31,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,   173,    97,    93,
    -162,   136,  -162,  -162,    91,  -162,   -16,    31,    31,   138,
    -162,  -162,   148,  -162,   156,    31,  -162,    11,  -162,   -16,
    -162,    95,   100,  -162,   150,  -162,  -162,  -162,   -16,  -162,
     -10,    11,   137,    98,  -162,   173,  -162,  -162,   139,  -162,
     154,  -162,   142,   101,    31,   105,    31,   118,  -162,  -162,
     -16,  -162,   -16,   103,    31,  -162,   110,  -162,  -162,   -16,
    -162,   111,  -162,  -162
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,    -3,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -146,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -161,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -125,   -63,  -162,  -162,  -162,   -48,  -162,
    -162,   -43,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,   -59,  -162,  -162,  -162,   -70,  -162
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -77
static const yytype_int16 yytable[] =
{
      91,    96,    22,   158,   132,   148,   149,   129,   175,   150,
     151,   197,   194,   196,   148,   149,    37,   181,   150,   151,
     104,     3,   105,   148,   149,    -2,   192,   150,   151,    38,
      39,    40,    57,    58,    41,    42,    43,    23,   178,    44,
      45,   179,   159,   160,   185,   186,   218,    24,    25,    27,
     208,    26,    28,    29,   116,   117,   118,   119,   120,   121,
     226,    30,   152,   219,   130,   153,   195,    31,   133,   198,
      32,   152,   224,   -24,   153,    33,    94,    34,    35,    36,
     152,   193,   166,   153,    59,    88,   170,    89,    90,    92,
      93,    97,   164,   165,   245,    98,   247,    95,    99,   103,
     100,   106,   107,   252,   101,   102,   -24,   110,   109,   112,
     123,   124,   127,   135,   128,   126,   246,   136,   201,   -24,
     -24,   -24,   146,   251,   -24,   -24,   -24,   111,   167,   -24,
     -24,   141,   145,   137,   138,   139,   171,   140,   209,   210,
     157,   162,   203,   206,   202,   211,   182,   183,   184,   177,
     -76,   212,   191,   223,   205,   227,   207,   234,   231,    60,
     220,   215,   221,   235,   229,   241,   188,   243,   237,   248,
     239,   250,   225,   199,   249,   240,    60,   242,   253,     0,
       0,     0,   230,   213,    61,    62,    63,    64,    65,     0,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    61,    62,    63,    64,    65,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     6,     7,
       8,     9,    10,    11,    12,    13,     0,     0,     0,    14,
       0,    15,    16,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
      43,    60,     5,   128,     3,     3,     4,     4,   154,     7,
       8,     3,   173,   174,     3,     4,    33,   163,     7,     8,
      79,     0,    81,     3,     4,     0,   172,     7,     8,    46,
      47,    48,     3,     4,    51,    52,    53,     4,     4,    56,
      57,     7,    58,    59,    54,    55,   207,     3,     3,     3,
     196,     4,     3,     3,    97,    98,    99,   100,   101,   102,
     221,     3,    60,   209,    61,    63,    64,     4,    67,    61,
       3,    60,   218,     0,    63,     6,    60,     3,     3,     3,
      60,    61,   141,    63,     3,     3,   145,     3,     3,     3,
       3,    68,   135,   136,   240,    68,   242,    66,    68,     3,
      68,    60,    50,   249,    68,    68,    33,     3,    60,    17,
       3,    60,     3,    58,    60,    62,   241,    58,   177,    46,
      47,    48,   125,   248,    51,    52,    53,    65,     7,    56,
      57,    61,    61,    69,    69,    69,     3,    69,   197,   198,
      60,    62,    45,     7,   187,     7,    69,    69,    65,    61,
      61,     3,    62,     3,    61,    18,    65,     3,    19,     3,
      65,   204,    62,    21,    66,    60,   169,    49,    67,    66,
     233,    61,   220,   176,   244,   234,     3,   236,    67,    -1,
      -1,    -1,   225,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    28,    29,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    20,
      -1,    22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    74,     0,    73,    77,     9,    10,    11,    12,
      13,    14,    15,    16,    20,    22,    23,    24,    25,    26,
      75,    76,    72,     4,     3,     3,     4,     3,     3,     3,
       3,     4,     3,     6,     3,     3,     3,    33,    46,    47,
      48,    51,    52,    53,    56,    57,    78,    79,    80,    82,
      86,    89,    95,    96,    97,   102,   103,     3,     4,     3,
       3,    28,    29,    30,    31,    32,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,     3,     3,
       3,   121,     3,     3,    60,    66,   132,    68,    68,    68,
      68,    68,    68,     3,   132,   132,    60,    50,   106,    60,
       3,    65,    17,    98,    87,   133,   121,   121,   121,   121,
     121,   121,   113,     3,    60,    83,    62,     3,    60,     4,
      61,    88,     3,    67,   134,    58,    58,    69,    69,    69,
      69,    61,    72,   114,   104,    61,    72,    84,     3,     4,
       7,     8,    60,    63,    90,    91,    93,    60,   113,    58,
      59,    81,    62,   135,   121,   121,   132,     7,   117,   107,
     132,     3,    85,    94,    92,    81,   115,    61,     4,     7,
     137,    81,    69,    69,    65,    54,    55,   118,    72,   105,
     108,    62,    81,    61,    90,    64,    90,     3,    61,    72,
     116,   132,   121,    45,   111,    61,     7,    65,    81,   132,
     132,     7,     3,    27,   120,   121,   132,   136,    90,    81,
      65,    62,   119,     3,    81,   118,    90,    18,    99,    66,
     121,    19,   100,   109,     3,    21,   101,    67,   110,   114,
     132,    60,   132,    49,   112,    81,   113,    81,    66,   136,
      61,   113,    81,    67
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
#line 256 "thrifty.yy"
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
#line 268 "thrifty.yy"
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
#line 279 "thrifty.yy"
    {
      if (g_parse_mode == PROGRAM) {
        clear_doctext();
      }
    }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 289 "thrifty.yy"
    {
      pdebug("HeaderList -> HeaderList Header");
    }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 293 "thrifty.yy"
    {
      pdebug("HeaderList -> ");
    }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 299 "thrifty.yy"
    {
      pdebug("Header -> Include");
    }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 303 "thrifty.yy"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_identifier");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 310 "thrifty.yy"
    {
      pdebug("Header -> tok_namespace tok_identifier tok_literal");
      if (g_parse_mode == PROGRAM) {
        g_program->set_namespace((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
      }
    }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 318 "thrifty.yy"
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
#line 326 "thrifty.yy"
    {
      pdebug("Header -> tok_cpp_include tok_literal");
      if (g_parse_mode == PROGRAM) {
        g_program->add_cpp_include((yyvsp[(2) - (2)].id));
      }
    }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 333 "thrifty.yy"
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
#line 342 "thrifty.yy"
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
#line 351 "thrifty.yy"
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
#line 360 "thrifty.yy"
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
#line 369 "thrifty.yy"
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
#line 378 "thrifty.yy"
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
#line 387 "thrifty.yy"
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
#line 396 "thrifty.yy"
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
#line 405 "thrifty.yy"
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
#line 414 "thrifty.yy"
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
#line 424 "thrifty.yy"
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
#line 436 "thrifty.yy"
    {
      pdebug("DefinitionList -> DefinitionList Definition");
      if ((yyvsp[(2) - (3)].dtext) != NULL && (yyvsp[(3) - (3)].tdoc) != NULL) {
        (yyvsp[(3) - (3)].tdoc)->set_doc((yyvsp[(2) - (3)].dtext));
      }
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 443 "thrifty.yy"
    {
      pdebug("DefinitionList -> ");
    }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 449 "thrifty.yy"
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
#line 457 "thrifty.yy"
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
#line 468 "thrifty.yy"
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
#line 482 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Typedef");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 489 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Enum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_enum((yyvsp[(1) - (1)].tenum));
      }
    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 496 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Senum");
      if (g_parse_mode == PROGRAM) {
        g_program->add_typedef((yyvsp[(1) - (1)].ttypedef));
      }
    }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 503 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Struct");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 510 "thrifty.yy"
    {
      pdebug("TypeDefinition -> View");
      if (g_parse_mode == PROGRAM) {
        g_program->add_struct((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 517 "thrifty.yy"
    {
      pdebug("TypeDefinition -> Xception");
      if (g_parse_mode == PROGRAM) {
        g_program->add_xception((yyvsp[(1) - (1)].tstruct));
      }
    }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 526 "thrifty.yy"
    {
      pdebug("TypeDef -> tok_typedef FieldType tok_identifier");
      t_typedef *td = new t_typedef(g_program, (yyvsp[(2) - (3)].ttype), (yyvsp[(3) - (3)].id));
      (yyval.ttypedef) = td;
    }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 534 "thrifty.yy"
    {}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 536 "thrifty.yy"
    {}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 538 "thrifty.yy"
    {}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 542 "thrifty.yy"
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
#line 554 "thrifty.yy"
    {
      pdebug("EnumDefList -> EnumDefList EnumDef");
      (yyval.tenum) = (yyvsp[(1) - (2)].tenum);
      (yyval.tenum)->append((yyvsp[(2) - (2)].tenumv));
    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 560 "thrifty.yy"
    {
      pdebug("EnumDefList -> ");
      (yyval.tenum) = new t_enum(g_program);
      y_enum_val = -1;
    }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 568 "thrifty.yy"
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
#line 590 "thrifty.yy"
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
#line 608 "thrifty.yy"
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
#line 619 "thrifty.yy"
    {
      pdebug("Senum -> tok_senum tok_identifier { SenumDefList }");
      (yyval.ttypedef) = new t_typedef(g_program, (yyvsp[(4) - (5)].tbase), (yyvsp[(2) - (5)].id));
    }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 626 "thrifty.yy"
    {
      pdebug("SenumDefList -> SenumDefList SenumDef");
      (yyval.tbase) = (yyvsp[(1) - (2)].tbase);
      (yyval.tbase)->add_string_enum_val((yyvsp[(2) - (2)].id));
    }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 632 "thrifty.yy"
    {
      pdebug("SenumDefList -> ");
      (yyval.tbase) = new t_base_type("string", t_base_type::TYPE_STRING);
      (yyval.tbase)->set_string_enum(true);
    }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 640 "thrifty.yy"
    {
      pdebug("SenumDef -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (2)].id);
    }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 647 "thrifty.yy"
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
#line 665 "thrifty.yy"
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
#line 674 "thrifty.yy"
    {
      pdebug("ConstValue => tok_dub_constant");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_double((yyvsp[(1) - (1)].dconst));
    }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 680 "thrifty.yy"
    {
      pdebug("ConstValue => tok_literal");
      (yyval.tconstv) = new t_const_value((yyvsp[(1) - (1)].id));
    }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 685 "thrifty.yy"
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
#line 698 "thrifty.yy"
    {
      pdebug("ConstValue => ConstList");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 703 "thrifty.yy"
    {
      pdebug("ConstValue => ConstMap");
      (yyval.tconstv) = (yyvsp[(1) - (1)].tconstv);
    }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 710 "thrifty.yy"
    {
      pdebug("ConstList => [ ConstListContents ]");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 717 "thrifty.yy"
    {
      pdebug("ConstListContents => ConstListContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (3)].tconstv);
      (yyval.tconstv)->add_list((yyvsp[(2) - (3)].tconstv));
    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 723 "thrifty.yy"
    {
      pdebug("ConstListContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_list();
    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 731 "thrifty.yy"
    {
      pdebug("ConstMap => { ConstMapContents }");
      (yyval.tconstv) = (yyvsp[(2) - (3)].tconstv);
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 738 "thrifty.yy"
    {
      pdebug("ConstMapContents => ConstMapContents ConstValue CommaOrSemicolonOptional");
      (yyval.tconstv) = (yyvsp[(1) - (5)].tconstv);
      (yyval.tconstv)->add_map((yyvsp[(2) - (5)].tconstv), (yyvsp[(4) - (5)].tconstv));
    }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 744 "thrifty.yy"
    {
      pdebug("ConstMapContents =>");
      (yyval.tconstv) = new t_const_value();
      (yyval.tconstv)->set_map();
    }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 752 "thrifty.yy"
    {
      (yyval.iconst) = struct_is_struct;
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 756 "thrifty.yy"
    {
      (yyval.iconst) = struct_is_union;
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 762 "thrifty.yy"
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
#line 777 "thrifty.yy"
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
#line 849 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 853 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 859 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 863 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 869 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 873 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 879 "thrifty.yy"
    {
      (yyval.tstruct) = (yyvsp[(3) - (4)].tstruct);
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 883 "thrifty.yy"
    {
      (yyval.tstruct) = NULL;
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 889 "thrifty.yy"
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
#line 934 "thrifty.yy"
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
#line 945 "thrifty.yy"
    {
       g_arglist = 1;
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 950 "thrifty.yy"
    {
       g_arglist = 0;
    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 956 "thrifty.yy"
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
#line 968 "thrifty.yy"
    {
      (yyval.tservice) = NULL;
    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 974 "thrifty.yy"
    {
      pdebug("FunctionList -> FunctionList Function");
      (yyval.tservice) = (yyvsp[(1) - (2)].tservice);
      (yyvsp[(1) - (2)].tservice)->add_function((yyvsp[(2) - (2)].tfunction));
    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 980 "thrifty.yy"
    {
      pdebug("FunctionList -> ");
      (yyval.tservice) = new t_service(g_program);
    }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 987 "thrifty.yy"
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
#line 998 "thrifty.yy"
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
#line 1007 "thrifty.yy"
    {
      pdebug("ParamList -> ");
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1014 "thrifty.yy"
    {
      pdebug("Param -> Field");
      (yyval.tfield) = (yyvsp[(1) - (1)].tfield);
      t_type* t = (yyvsp[(1) - (1)].tfield)->get_type();
      if (t && t->is_stream()) {
        yyerror("Arguments of type stream<> are not supported: \"%s %s\"", t->get_full_name().c_str(), (yyvsp[(1) - (1)].tfield)->get_name().c_str());
        exit(1);
      }
    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1026 "thrifty.yy"
    {
      (yyval.tbool) = true;
    }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1030 "thrifty.yy"
    {
      (yyval.tbool) = false;
    }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1036 "thrifty.yy"
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
#line 1045 "thrifty.yy"
    {
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1051 "thrifty.yy"
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
#line 1060 "thrifty.yy"
    {
      pdebug("FieldList -> ");
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1067 "thrifty.yy"
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
#line 1099 "thrifty.yy"
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
#line 1110 "thrifty.yy"
    {
      pdebug("ViewFieldList -> ");
      (yyval.tstruct) = new t_struct(g_program);
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1117 "thrifty.yy"
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
#line 1127 "thrifty.yy"
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
#line 1144 "thrifty.yy"
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
#line 1179 "thrifty.yy"
    {
      (yyval.tfieldid).value = y_field_val--;
      (yyval.tfieldid).auto_assigned = true;
    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1186 "thrifty.yy"
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
#line 1197 "thrifty.yy"
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
#line 1208 "thrifty.yy"
    {
      (yyval.ereq) = t_field::T_OPT_IN_REQ_OUT;
    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1214 "thrifty.yy"
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
#line 1222 "thrifty.yy"
    {
      (yyval.tconstv) = NULL;
    }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1228 "thrifty.yy"
    {
      pdebug("FunctionType -> FieldType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1233 "thrifty.yy"
    {
      pdebug("FunctionType -> tok_void");
      (yyval.ttype) = g_type_void;
    }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1240 "thrifty.yy"
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
#line 1263 "thrifty.yy"
    {
      pdebug("FieldType -> BaseType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1268 "thrifty.yy"
    {
      pdebug("FieldType -> ContainerType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1274 "thrifty.yy"
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
#line 1287 "thrifty.yy"
    {
      pdebug("BaseType -> tok_string");
      (yyval.ttype) = g_type_string;
    }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1292 "thrifty.yy"
    {
      pdebug("BaseType -> tok_binary");
      (yyval.ttype) = g_type_binary;
    }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1297 "thrifty.yy"
    {
      pdebug("BaseType -> tok_slist");
      (yyval.ttype) = g_type_slist;
    }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1302 "thrifty.yy"
    {
      pdebug("BaseType -> tok_bool");
      (yyval.ttype) = g_type_bool;
    }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1307 "thrifty.yy"
    {
      pdebug("BaseType -> tok_byte");
      (yyval.ttype) = g_type_byte;
    }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1312 "thrifty.yy"
    {
      pdebug("BaseType -> tok_i16");
      (yyval.ttype) = g_type_i16;
    }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1317 "thrifty.yy"
    {
      pdebug("BaseType -> tok_i32");
      (yyval.ttype) = g_type_i32;
    }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1322 "thrifty.yy"
    {
      pdebug("BaseType -> tok_i64");
      (yyval.ttype) = g_type_i64;
    }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1327 "thrifty.yy"
    {
      pdebug("BaseType -> tok_double");
      (yyval.ttype) = g_type_double;
    }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1332 "thrifty.yy"
    {
      pdebug("BaseType -> tok_float");
      (yyval.ttype) = g_type_float;
    }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1338 "thrifty.yy"
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
#line 1349 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> MapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1354 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> HashMapType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1359 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> SetType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1364 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> HashSetType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1369 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> ListType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1374 "thrifty.yy"
    {
      pdebug("SimpleContainerType -> StreamType");
      (yyval.ttype) = (yyvsp[(1) - (1)].ttype);
    }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1381 "thrifty.yy"
    {
      pdebug("MapType -> tok_map<FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(3) - (6)].ttype), (yyvsp[(5) - (6)].ttype), false);
    }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1388 "thrifty.yy"
    {
      pdebug("HashMapType -> tok_hash_map<FieldType, FieldType>");
      (yyval.ttype) = new t_map((yyvsp[(3) - (6)].ttype), (yyvsp[(5) - (6)].ttype), true);
    }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1395 "thrifty.yy"
    {
      pdebug("SetType -> tok_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[(3) - (4)].ttype), false);
    }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1402 "thrifty.yy"
    {
      pdebug("HashSetType -> tok_hash_set<FieldType>");
      (yyval.ttype) = new t_set((yyvsp[(3) - (4)].ttype), true);
    }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1409 "thrifty.yy"
    {
      pdebug("ListType -> tok_list<FieldType>");
      (yyval.ttype) = new t_list((yyvsp[(3) - (4)].ttype));
    }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1416 "thrifty.yy"
    {
      pdebug("StreamType -> tok_stream<FieldType>");
      (yyval.ttype) = new t_stream((yyvsp[(3) - (4)].ttype));
    }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1423 "thrifty.yy"
    {
      pdebug("TypeAnnotations -> ( TypeAnnotationList )");
      (yyval.ttype) = (yyvsp[(2) - (3)].ttype);
    }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1428 "thrifty.yy"
    {
      (yyval.ttype) = NULL;
    }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1434 "thrifty.yy"
    {
      pdebug("TypeAnnotationList -> TypeAnnotationList , TypeAnnotation");
      (yyval.ttype) = (yyvsp[(1) - (2)].ttype);
      (yyval.ttype)->annotations_[(yyvsp[(2) - (2)].tannot)->key] = (yyvsp[(2) - (2)].tannot)->val;
      delete (yyvsp[(2) - (2)].tannot);
    }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1441 "thrifty.yy"
    {
      /* Just use a dummy structure to hold the annotations. */
      (yyval.ttype) = new t_struct(g_program);
    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1448 "thrifty.yy"
    {
      pdebug("TypeAnnotation TypeAnnotationValue");
      (yyval.tannot) = new t_annotation;
      (yyval.tannot)->key = (yyvsp[(1) - (3)].id);
      (yyval.tannot)->val = (yyvsp[(2) - (3)].id);
    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1457 "thrifty.yy"
    {
      pdebug("TypeAnnotationValue -> = IntOrLiteral");
      (yyval.id) = (yyvsp[(2) - (2)].id);
    }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1462 "thrifty.yy"
    {
      pdebug("TypeAnnotationValue ->");
      (yyval.id) = strdup("1");
    }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1469 "thrifty.yy"
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

  case 140:

/* Line 1455 of yacc.c  */
#line 1493 "thrifty.yy"
    {
      pdebug("IntOrLiteral -> tok_literal");
      (yyval.id) = (yyvsp[(1) - (1)].id);
    }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1499 "thrifty.yy"
    {
      char buf[21];  // max len of int64_t as string + null terminator
      pdebug("IntOrLiteral -> tok_int_constant");
      sprintf(buf, "%" PRIi64, (yyvsp[(1) - (1)].iconst));
      (yyval.id) = strdup(buf);
    }
    break;



/* Line 1455 of yacc.c  */
#line 3573 "thrifty.cc"
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
#line 1506 "thrifty.yy"


