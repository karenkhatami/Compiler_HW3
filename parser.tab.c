/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 3 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nesting.h"
#include "symbol_tables.h"
#include "semantic_routines.h"


/* Line 371 of yacc.c  */
#line 78 "parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     CONST = 259,
     VOID = 260,
     INT = 261,
     FLOAT = 262,
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     FOR = 266,
     STRUCT = 267,
     TYPEDEF = 268,
     OP_ASSIGN = 269,
     OP_OR = 270,
     OP_AND = 271,
     OP_NOT = 272,
     OP_EQ = 273,
     OP_NE = 274,
     OP_GT = 275,
     OP_LT = 276,
     OP_GE = 277,
     OP_LE = 278,
     OP_PLUS = 279,
     OP_MINUS = 280,
     OP_TIMES = 281,
     OP_DIVIDE = 282,
     MK_LB = 283,
     MK_RB = 284,
     MK_LPAREN = 285,
     MK_RPAREN = 286,
     MK_LBRACE = 287,
     MK_RBRACE = 288,
     MK_COMMA = 289,
     MK_SEMICOLON = 290,
     MK_DOT = 291,
     ERROR = 292,
     RETURN = 293
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 13 "parser.y"

  char* str;
  int ival;
  double dval;
  id_list_t *ID_List;
  param_list_t *Param_List;
  decl_list_t *Decl_List;


/* Line 387 of yacc.c  */
#line 166 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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



/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 194 "parser.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  234

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    11,    14,    16,    17,
      27,    28,    37,    44,    50,    54,    56,    59,    62,    66,
      70,    75,    80,    81,    83,    84,    87,    89,    91,    92,
      95,    97,    99,   101,   106,   111,   116,   119,   123,   127,
     131,   133,   135,   137,   139,   142,   143,   149,   150,   155,
     156,   161,   162,   166,   168,   170,   174,   179,   182,   186,
     191,   195,   197,   201,   203,   205,   209,   211,   215,   217,
     220,   224,   227,   229,   230,   235,   241,   251,   259,   265,
     267,   272,   275,   277,   280,   284,   289,   291,   292,   296,
     298,   299,   304,   306,   308,   312,   314,   318,   320,   324,
     326,   328,   330,   332,   334,   336,   338,   339,   343,   345,
     349,   351,   353,   355,   359,   361,   363,   365,   369,   374,
     379,   381,   384,   387,   389,   390,   397,   398,   405,   407,
     410,   413,   415,   418,   421,   425
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    -1,    41,    42,    -1,    42,    43,    -1,
      -1,    53,    44,    -1,    44,    -1,    -1,    57,     3,    30,
      47,    31,    32,    45,    52,    33,    -1,    -1,    57,     3,
      30,    31,    32,    46,    52,    33,    -1,    57,     3,    30,
      47,    31,    35,    -1,    57,     3,    30,    31,    35,    -1,
      47,    34,    48,    -1,    48,    -1,    57,     3,    -1,    58,
       3,    -1,    57,     3,    49,    -1,    58,     3,    49,    -1,
      28,    51,    29,    50,    -1,    28,    85,    29,    50,    -1,
      -1,    85,    -1,    -1,    53,    71,    -1,    71,    -1,    53,
      -1,    -1,    53,    54,    -1,    54,    -1,    55,    -1,    56,
      -1,    13,    57,    64,    35,    -1,    13,     5,    64,    35,
      -1,    13,    58,    64,    35,    -1,    58,    35,    -1,    57,
      69,    35,    -1,    58,    64,    35,    -1,     3,    64,    35,
      -1,     6,    -1,     7,    -1,     5,    -1,     1,    -1,    12,
      59,    -1,    -1,     3,    32,    60,    53,    33,    -1,    -1,
      32,    61,    53,    33,    -1,    -1,     3,    32,    62,    33,
      -1,    -1,    32,    63,    33,    -1,     3,    -1,     3,    -1,
      64,    34,     3,    -1,    64,    34,     3,    65,    -1,     3,
      65,    -1,    28,    66,    29,    -1,    65,    28,    66,    29,
      -1,    66,    86,    67,    -1,    67,    -1,    67,    88,    68,
      -1,    68,    -1,     4,    -1,    30,    66,    31,    -1,    70,
      -1,    69,    34,    70,    -1,     3,    -1,     3,    65,    -1,
       3,    14,    79,    -1,    71,    72,    -1,    72,    -1,    -1,
      32,    73,    52,    33,    -1,    10,    30,    83,    31,    72,
      -1,    11,    30,    75,    35,    83,    35,    75,    31,    72,
      -1,     8,    30,    79,    31,    72,     9,    72,    -1,     8,
      30,    79,    31,    72,    -1,    74,    -1,    92,    14,    79,
      35,    -1,    83,    35,    -1,    35,    -1,    38,    35,    -1,
      38,    79,    35,    -1,     3,    30,    83,    31,    -1,    76,
      -1,    -1,    76,    34,    77,    -1,    77,    -1,    -1,     3,
      78,    14,    79,    -1,    79,    -1,    80,    -1,    79,    15,
      80,    -1,    81,    -1,    80,    16,    81,    -1,    85,    -1,
      85,    82,    85,    -1,    21,    -1,    23,    -1,    20,    -1,
      22,    -1,    18,    -1,    19,    -1,    84,    -1,    -1,    84,
      34,    79,    -1,    79,    -1,    85,    86,    87,    -1,    87,
      -1,    24,    -1,    25,    -1,    87,    88,    89,    -1,    89,
      -1,    26,    -1,    27,    -1,    30,    79,    31,    -1,    17,
      30,    79,    31,    -1,    25,    30,    79,    31,    -1,     4,
      -1,    17,     4,    -1,    25,     4,    -1,    74,    -1,    -1,
      17,     3,    90,    30,    83,    31,    -1,    -1,    25,     3,
      91,    30,    83,    31,    -1,    92,    -1,    17,    92,    -1,
      25,    92,    -1,     3,    -1,    92,    93,    -1,    92,    94,
      -1,    28,    85,    29,    -1,    36,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    80,    83,    84,    87,    88,    91,    91,
      94,    94,    96,    97,   100,   101,   104,   105,   106,   107,
     110,   113,   114,   117,   118,   121,   122,   123,   124,   127,
     128,   131,   132,   135,   136,   137,   138,   141,   142,   143,
     147,   148,   149,   150,   153,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   165,   166,   167,   168,   170,   171,
     173,   174,   176,   177,   180,   181,   184,   185,   188,   189,
     190,   193,   194,   197,   197,   199,   200,   202,   204,   206,
     207,   208,   209,   210,   211,   214,   217,   218,   221,   222,
     224,   224,   225,   228,   229,   232,   233,   236,   237,   241,
     242,   243,   244,   245,   246,   249,   250,   253,   254,   257,
     258,   261,   262,   265,   266,   269,   270,   273,   275,   277,
     278,   280,   282,   283,   285,   285,   287,   287,   288,   290,
     292,   295,   296,   297,   301,   304
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CONST", "VOID", "INT", "FLOAT",
  "IF", "ELSE", "WHILE", "FOR", "STRUCT", "TYPEDEF", "OP_ASSIGN", "OP_OR",
  "OP_AND", "OP_NOT", "OP_EQ", "OP_NE", "OP_GT", "OP_LT", "OP_GE", "OP_LE",
  "OP_PLUS", "OP_MINUS", "OP_TIMES", "OP_DIVIDE", "MK_LB", "MK_RB",
  "MK_LPAREN", "MK_RPAREN", "MK_LBRACE", "MK_RBRACE", "MK_COMMA",
  "MK_SEMICOLON", "MK_DOT", "ERROR", "RETURN", "$accept", "program", "$@1",
  "global_decl_list", "global_decl", "function_decl", "$@2", "$@3",
  "param_list", "param", "dim_fn", "dimfn1", "expr_null", "block",
  "decl_list", "decl", "type_decl", "var_decl", "type", "struct_type",
  "tag", "$@4", "$@5", "$@6", "$@7", "id_list", "dim_decl", "cexpr",
  "mcexpr", "cfactor", "init_id_list", "init_id", "stmt_list", "stmt",
  "$@8", "function_call", "assign_expr_list", "nonempty_assign_expr_list",
  "assign_expr", "$@9", "relop_expr", "relop_term", "relop_factor",
  "rel_op", "relop_expr_list", "nonempty_relop_expr_list", "expr",
  "add_op", "term", "mul_op", "factor", "$@10", "$@11", "var_ref", "dim",
  "struct_tail", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    41,    40,    42,    42,    43,    43,    45,    44,
      46,    44,    44,    44,    47,    47,    48,    48,    48,    48,
      49,    50,    50,    51,    51,    52,    52,    52,    52,    53,
      53,    54,    54,    55,    55,    55,    55,    56,    56,    56,
      57,    57,    57,    57,    58,    60,    59,    61,    59,    62,
      59,    63,    59,    59,    64,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    71,    71,    73,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    74,    75,    75,    76,    76,
      78,    77,    77,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    82,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    90,    89,    91,    89,    89,    89,
      89,    92,    92,    92,    93,    94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     1,     0,     9,
       0,     8,     6,     5,     3,     1,     2,     2,     3,     3,
       4,     4,     0,     1,     0,     2,     1,     1,     0,     2,
       1,     1,     1,     4,     4,     4,     2,     3,     3,     3,
       1,     1,     1,     1,     2,     0,     5,     0,     4,     0,
       4,     0,     3,     1,     1,     3,     4,     2,     3,     4,
       3,     1,     3,     1,     1,     3,     1,     3,     1,     2,
       3,     2,     1,     0,     4,     5,     9,     7,     5,     1,
       4,     2,     1,     2,     3,     4,     1,     0,     3,     1,
       0,     4,     1,     1,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     4,     4,
       1,     2,     2,     1,     0,     6,     0,     6,     1,     2,
       2,     1,     2,     2,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,    43,     0,    42,    40,    41,
       0,     0,     4,     7,     0,    30,    31,    32,     0,     0,
      54,     0,    53,    47,    44,     0,     0,     0,     6,    29,
      68,     0,    66,    36,     0,     0,    57,     0,    39,    45,
       0,     0,     0,     0,     0,     0,     0,    69,     0,    37,
      38,    64,     0,     0,    61,    63,     0,    55,     0,     0,
       0,     0,    52,    34,    33,    35,   131,   120,     0,     0,
       0,   123,    70,    93,    95,    97,   110,   114,   128,     0,
       0,    15,     0,     0,    68,    67,     0,   111,   112,    58,
       0,   115,   116,     0,     0,    56,     0,    50,    48,   106,
     131,   121,     0,   129,   131,   122,     0,   130,     0,     0,
       0,   103,   104,   101,    99,   102,   100,     0,     0,     0,
       0,     0,   132,   133,    10,    13,     0,     0,    16,    17,
      65,    60,    62,    59,    46,   108,     0,   105,     0,     0,
       0,     0,   117,    94,    96,    98,   109,   113,     0,   135,
       0,     8,    12,    14,    24,    18,    19,    85,     0,   106,
     118,   106,   119,   134,   131,     0,     0,     0,    73,    82,
       0,     0,     0,    26,    72,    79,     0,   128,     0,     0,
      23,   107,     0,     0,     0,   106,    87,     0,    83,     0,
      11,    25,    71,    81,     0,     0,    22,   125,   127,     0,
       0,   131,     0,    86,    89,    92,     0,    84,     0,     9,
       0,    20,     0,     0,     0,   106,     0,    74,    80,     0,
      78,    75,     0,     0,    88,    22,     0,    91,    87,    21,
      77,     0,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    12,    13,   178,   150,    80,    81,
     155,   211,   179,   171,   172,    15,    16,    17,    61,    19,
      24,    58,    40,    59,    41,    21,    47,    53,    54,    55,
      31,    32,   173,   174,   187,    71,   202,   203,   204,   214,
     135,    73,    74,   117,   176,   137,    75,   118,    76,    93,
      77,   138,   140,    78,   122,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -161
static const yytype_int16 yypact[] =
{
    -161,    12,  -161,  -161,   252,  -161,    19,  -161,  -161,  -161,
      30,   163,  -161,  -161,   265,  -161,  -161,  -161,    31,    13,
      35,    75,    85,    71,  -161,    19,    19,    19,  -161,  -161,
      84,   216,  -161,  -161,   271,    64,    95,   112,  -161,   107,
     265,   111,   273,   276,   278,   149,    70,    95,   151,  -161,
    -161,  -161,    64,   266,   288,  -161,    64,    35,   265,   129,
      23,   151,  -161,  -161,  -161,  -161,   148,  -161,    17,    34,
     149,  -161,   165,   174,  -161,   263,   288,  -161,    -9,    38,
     142,  -161,   194,   196,    46,  -161,   208,  -161,  -161,  -161,
      64,  -161,  -161,    64,   269,    95,    83,  -161,  -161,   149,
     171,  -161,   149,    -9,   190,  -161,   149,    -9,    66,   149,
     149,  -161,  -161,  -161,  -161,  -161,  -161,   149,   149,   149,
     149,   207,  -161,  -161,  -161,  -161,   180,   268,   195,   195,
    -161,   288,  -161,  -161,  -161,   165,   197,   191,   205,    77,
     217,    87,  -161,   174,  -161,   292,   288,  -161,   272,  -161,
     125,  -161,  -161,  -161,   149,  -161,  -161,  -161,   149,   149,
    -161,   149,  -161,  -161,    29,   233,   237,   246,  -161,  -161,
     201,   256,   181,   192,  -161,   222,   244,   120,   125,   274,
     292,   165,   261,   287,   149,   149,   204,   125,  -161,     8,
    -161,   192,  -161,  -161,   149,   286,   281,  -161,  -161,    88,
     289,   137,   267,   290,  -161,   165,   293,  -161,    72,  -161,
     149,  -161,   192,   192,   307,   149,   204,  -161,  -161,   275,
     313,  -161,   149,   294,  -161,   281,   192,   165,   204,  -161,
    -161,   296,   192,  -161
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -161,  -161,  -161,  -161,  -161,   309,  -161,  -161,  -161,   198,
     199,   105,  -161,    -6,    11,   -11,  -161,  -161,     0,    -5,
    -161,  -161,  -161,  -161,  -161,   235,    -2,    91,   241,   239,
    -161,   285,   162,  -160,  -161,  -133,   108,  -161,   119,  -161,
     -45,   228,   229,  -161,   -94,  -161,  -110,   -44,   220,   -68,
     221,  -161,  -161,   -67,  -161,  -161
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      72,   103,   107,    29,    18,   136,    27,   145,   119,    90,
     148,    26,     3,   192,    18,    14,    20,   175,    36,   120,
     100,   101,    20,   109,     5,   108,     6,   121,     7,     8,
       9,   192,    20,    22,    30,    10,    11,   104,   105,   175,
     175,    83,    90,   207,   180,   175,    82,   102,    33,    29,
      90,    60,   220,   221,   175,    95,    98,   139,   175,    99,
      45,   141,    23,    35,   106,   182,   230,   183,    51,    96,
     124,     5,   233,   125,    35,     7,     8,     9,   119,   175,
     175,   109,    10,   177,     5,    29,     6,   109,     7,     8,
       9,   200,   109,   175,    52,    10,    11,   142,    45,   175,
     219,    79,   109,   109,   -51,   177,   177,   218,   160,    37,
      38,   177,    35,   181,    46,    57,   134,    39,   162,   212,
     177,   223,    83,    56,   177,   189,     5,    82,   164,    67,
       7,     8,     9,   165,   194,   166,   167,    10,    11,   199,
     -49,   205,    68,    86,    62,   177,   177,    94,   120,   208,
      69,   -90,    66,    67,    84,    70,   121,   168,   -28,   177,
     169,    29,    97,   170,     5,   177,    68,    99,    25,     8,
       9,   205,   195,   126,    69,    10,   127,   227,    99,    70,
     109,   206,     5,   205,   164,    67,     7,     8,     9,   165,
     110,   166,   167,    10,    11,    66,    67,   128,    68,   129,
     165,  -124,   166,   167,    66,    67,    69,   201,    67,    68,
     149,    70,   151,   168,   -27,   152,   169,    69,    68,   170,
    -126,    68,    70,   154,   168,   158,    69,   169,   157,    69,
     170,    70,    87,    88,    70,   159,   188,  -123,  -123,   130,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,   161,  -123,  -123,
      48,    49,    -3,     5,    34,     6,  -123,     7,     8,     9,
      42,    43,    44,   184,    10,    11,     5,   185,     6,     5,
       7,     8,     9,     7,     8,     9,   186,    10,    11,   193,
      10,   111,   112,   113,   114,   115,   116,    87,    88,   190,
      87,    88,   197,    87,    88,    89,    87,    88,   133,    87,
      88,   163,   215,   196,   225,    37,    50,    37,    63,   210,
      37,    64,    37,    65,    91,    92,    87,    88,   198,   209,
     213,   222,   226,    28,   216,   153,   217,   232,   156,   228,
     229,   131,   132,    85,   191,   224,   231,   143,   146,   144,
     147
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-161)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      45,    68,    69,    14,     4,    99,    11,   117,    76,    53,
     120,    11,     0,   173,    14,     4,     3,   150,    20,    28,
       3,     4,     3,    15,     1,    70,     3,    36,     5,     6,
       7,   191,     3,     3,     3,    12,    13,     3,     4,   172,
     173,    46,    86,    35,   154,   178,    46,    30,    35,    60,
      94,    40,   212,   213,   187,    57,    33,   102,   191,    30,
      14,   106,    32,    28,    30,   159,   226,   161,     4,    58,
      32,     1,   232,    35,    28,     5,     6,     7,   146,   212,
     213,    15,    12,   150,     1,    96,     3,    15,     5,     6,
       7,   185,    15,   226,    30,    12,    13,    31,    14,   232,
     210,    31,    15,    15,    33,   172,   173,    35,    31,    34,
      35,   178,    28,   158,    30,     3,    33,    32,    31,    31,
     187,   215,   127,    28,   191,   170,     1,   127,     3,     4,
       5,     6,     7,     8,    14,    10,    11,    12,    13,   184,
      33,   186,    17,    52,    33,   212,   213,    56,    28,   194,
      25,    14,     3,     4,     3,    30,    36,    32,    33,   226,
      35,   172,    33,    38,     1,   232,    17,    30,     5,     6,
       7,   216,   178,    31,    25,    12,    34,   222,    30,    30,
      15,   187,     1,   228,     3,     4,     5,     6,     7,     8,
      16,    10,    11,    12,    13,     3,     4,     3,    17,     3,
       8,    30,    10,    11,     3,     4,    25,     3,     4,    17,
       3,    30,    32,    32,    33,    35,    35,    25,    17,    38,
      30,    17,    30,    28,    32,    34,    25,    35,    31,    25,
      38,    30,    24,    25,    30,    30,    35,    15,    16,    31,
      18,    19,    20,    21,    22,    23,    24,    30,    26,    27,
      34,    35,     0,     1,    19,     3,    34,     5,     6,     7,
      25,    26,    27,    30,    12,    13,     1,    30,     3,     1,
       5,     6,     7,     5,     6,     7,    30,    12,    13,    35,
      12,    18,    19,    20,    21,    22,    23,    24,    25,    33,
      24,    25,    31,    24,    25,    29,    24,    25,    29,    24,
      25,    29,    35,    29,    29,    34,    35,    34,    35,    28,
      34,    35,    34,    35,    26,    27,    24,    25,    31,    33,
      31,    14,     9,    14,    34,   127,    33,    31,   129,    35,
     225,    90,    93,    48,   172,   216,   228,   109,   118,   110,
     119
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,    42,     1,     3,     5,     6,     7,
      12,    13,    43,    44,    53,    54,    55,    56,    57,    58,
       3,    64,     3,    32,    59,     5,    57,    58,    44,    54,
       3,    69,    70,    35,    64,    28,    65,    34,    35,    32,
      61,    63,    64,    64,    64,    14,    30,    65,    34,    35,
      35,     4,    30,    66,    67,    68,    28,     3,    60,    62,
      53,    57,    33,    35,    35,    35,     3,     4,    17,    25,
      30,    74,    79,    80,    81,    85,    87,    89,    92,    31,
      47,    48,    57,    58,     3,    70,    66,    24,    25,    29,
      86,    26,    27,    88,    66,    65,    53,    33,    33,    30,
       3,     4,    30,    92,     3,     4,    30,    92,    79,    15,
      16,    18,    19,    20,    21,    22,    23,    82,    86,    88,
      28,    36,    93,    94,    32,    35,    31,    34,     3,     3,
      31,    67,    68,    29,    33,    79,    83,    84,    90,    79,
      91,    79,    31,    80,    81,    85,    87,    89,    85,     3,
      46,    32,    35,    48,    28,    49,    49,    31,    34,    30,
      31,    30,    31,    29,     3,     8,    10,    11,    32,    35,
      38,    52,    53,    71,    72,    74,    83,    92,    45,    51,
      85,    79,    83,    83,    30,    30,    30,    73,    35,    79,
      33,    71,    72,    35,    14,    52,    29,    31,    31,    79,
      83,     3,    75,    76,    77,    79,    52,    35,    79,    33,
      28,    50,    31,    31,    78,    35,    34,    33,    35,    85,
      72,    72,    14,    83,    77,    29,     9,    79,    35,    50,
      72,    75,    31,    72
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
/* Line 1787 of yacc.c  */
#line 80 "parser.y"
    { init_all(); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 80 "parser.y"
    { print_vars(); print_types(); print_funcs(); print_structs();}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 91 "parser.y"
    {func_decl((yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].Param_List)); inc_nesting();}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 91 "parser.y"
    {dec_nesting();}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 94 "parser.y"
    {func_decl((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), NULL); inc_nesting();}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 94 "parser.y"
    {dec_nesting();}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 96 "parser.y"
    {func_decl((yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].Param_List));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 97 "parser.y"
    {func_decl((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), NULL);}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 100 "parser.y"
    { (yyval.Param_List)->next=(yyvsp[(3) - (3)].Param_List); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 104 "parser.y"
    { (yyval.Param_List)=func_param_decl ( (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str), 0, get_nesting()+1 ); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 105 "parser.y"
    { (yyval.Param_List)=NULL; }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 106 "parser.y"
    { (yyval.Param_List)=func_param_decl ( (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].ival), get_nesting()+1 ); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 107 "parser.y"
    { (yyval.Param_List)=NULL; }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 110 "parser.y"
    {(yyval.ival)=(yyvsp[(4) - (4)].ival)+1;}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 113 "parser.y"
    {(yyval.ival)=(yyvsp[(4) - (4)].ival)+1;}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 114 "parser.y"
    {(yyval.ival)=0;}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 135 "parser.y"
    { type_def((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].ID_List), get_nesting()); }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 136 "parser.y"
    { type_def((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].ID_List), get_nesting()); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 141 "parser.y"
    { add_var_list((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].ID_List), get_nesting()); }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 142 "parser.y"
    { add_var_list((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].ID_List), get_nesting()); }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 143 "parser.y"
    { add_var_list((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].ID_List), get_nesting()); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 147 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 148 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 149 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 150 "parser.y"
    {(yyval.str)="error";}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 153 "parser.y"
    {(yyval.str)=build_struct_type( (yyvsp[(2) - (2)].str) );}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 157 "parser.y"
    {inc_nesting();}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 157 "parser.y"
    {struct_decl( (yyvsp[(1) - (5)].str) ); dec_nesting(); (yyval.str)=(yyvsp[(1) - (5)].str);}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 158 "parser.y"
    {inc_nesting();}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 158 "parser.y"
    {struct_decl( get_random_name() ); dec_nesting(); (yyval.str)=get_random_name();}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 159 "parser.y"
    {inc_nesting();}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 159 "parser.y"
    {struct_decl( (yyvsp[(1) - (4)].str) ); dec_nesting(); (yyval.str)=(yyvsp[(1) - (4)].str);}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 160 "parser.y"
    {inc_nesting();}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 160 "parser.y"
    {struct_decl( get_random_name() ); dec_nesting(); (yyval.str)=get_random_name();}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 161 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 165 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (1)].str), 0); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 166 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(3) - (3)].str), 0); (yyval.ID_List)->next=(yyvsp[(1) - (3)].ID_List); }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 167 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].ival)); (yyval.ID_List)->next=(yyvsp[(1) - (4)].ID_List); }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 168 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].ival)); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 170 "parser.y"
    {(yyval.ival)=1;}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 171 "parser.y"
    {(yyval.ival)=(yyvsp[(1) - (4)].ival)+1;}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 184 "parser.y"
    {(yyval.ID_List)=(yyvsp[(1) - (1)].ID_List);}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 185 "parser.y"
    { (yyvsp[(3) - (3)].ID_List)->next=(yyvsp[(1) - (3)].ID_List) ; (yyval.ID_List)=(yyvsp[(3) - (3)].ID_List); }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 188 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (1)].str), 0); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 189 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].ival)); }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 190 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (3)].str), 0); }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 197 "parser.y"
    {inc_nesting();}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 197 "parser.y"
    {dec_nesting();}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 224 "parser.y"
    {process_id((yyvsp[(1) - (1)].str));}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 285 "parser.y"
    {process_id((yyvsp[(2) - (2)].str));}
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 287 "parser.y"
    {process_id((yyvsp[(2) - (2)].str));}
    break;

  case 131:
/* Line 1787 of yacc.c  */
#line 295 "parser.y"
    {process_id((yyvsp[(1) - (1)].str)); (yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 132:
/* Line 1787 of yacc.c  */
#line 296 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (2)].str);}
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 297 "parser.y"
    {struct_ref( (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str) );}
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 304 "parser.y"
    {(yyval.str)=(yyvsp[(2) - (2)].str);}
    break;


/* Line 1787 of yacc.c  */
#line 1961 "parser.tab.c"
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


/* Line 2050 of yacc.c  */
#line 306 "parser.y"

#include "lex.yy.c"

int scope = 0;

int main (int argc, char *argv[])
{
	int errors_found = 0;
    //init_symtab();
    if(argc>0)
        yyin = fopen(argv[1],"r");
    else
        yyin=stdin;
    yyparse();
	if( (errors_found=get_errors())==0 )
	{
    	printf("%s\n", "Parsing completed. No errors found.");
	}
	else
	{
		printf("Parsing completed. %d errors found.\n", errors_found);
	}
    //cleanup_symtab();
    return 0;
} /* main */


yyerror (mesg)
char *mesg;
  {
      printf("%s\t%d\t%s\t%s\n", "Error found in Line ", get_linenumber(), "next token: ", yytext );
      printf("%s\n", mesg);
      exit(1);
  }
