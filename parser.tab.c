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


/* Line 387 of yacc.c  */
#line 164 "parser.tab.c"
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
#line 192 "parser.tab.c"

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
#define YYLAST   352

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  230

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
     131,   133,   135,   137,   139,   142,   147,   151,   155,   158,
     160,   162,   166,   171,   174,   178,   183,   187,   189,   193,
     195,   197,   201,   203,   207,   209,   212,   216,   219,   221,
     222,   227,   233,   243,   251,   257,   259,   264,   267,   269,
     272,   276,   281,   283,   284,   288,   290,   291,   296,   298,
     300,   304,   306,   310,   312,   316,   318,   320,   322,   324,
     326,   328,   330,   331,   335,   337,   341,   343,   345,   347,
     351,   353,   355,   357,   361,   366,   371,   373,   376,   379,
     381,   382,   389,   390,   397,   399,   402,   405,   407,   410,
     413,   417
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
      28,    51,    29,    50,    -1,    28,    81,    29,    50,    -1,
      -1,    81,    -1,    -1,    53,    67,    -1,    67,    -1,    53,
      -1,    -1,    53,    54,    -1,    54,    -1,    55,    -1,    56,
      -1,    13,    57,    60,    35,    -1,    13,     5,    60,    35,
      -1,    13,    58,    60,    35,    -1,    58,    35,    -1,    57,
      65,    35,    -1,    58,    60,    35,    -1,     3,    60,    35,
      -1,     6,    -1,     7,    -1,     5,    -1,     1,    -1,    12,
      59,    -1,     3,    32,    53,    33,    -1,    32,    53,    33,
      -1,     3,    32,    33,    -1,    32,    33,    -1,     3,    -1,
       3,    -1,    60,    34,     3,    -1,    60,    34,     3,    61,
      -1,     3,    61,    -1,    28,    62,    29,    -1,    61,    28,
      62,    29,    -1,    62,    82,    63,    -1,    63,    -1,    63,
      84,    64,    -1,    64,    -1,     4,    -1,    30,    62,    31,
      -1,    66,    -1,    65,    34,    66,    -1,     3,    -1,     3,
      61,    -1,     3,    14,    75,    -1,    67,    68,    -1,    68,
      -1,    -1,    32,    69,    52,    33,    -1,    10,    30,    79,
      31,    68,    -1,    11,    30,    71,    35,    79,    35,    71,
      31,    68,    -1,     8,    30,    75,    31,    68,     9,    68,
      -1,     8,    30,    75,    31,    68,    -1,    70,    -1,    88,
      14,    75,    35,    -1,    79,    35,    -1,    35,    -1,    38,
      35,    -1,    38,    75,    35,    -1,     3,    30,    79,    31,
      -1,    72,    -1,    -1,    72,    34,    73,    -1,    73,    -1,
      -1,     3,    74,    14,    75,    -1,    75,    -1,    76,    -1,
      75,    15,    76,    -1,    77,    -1,    76,    16,    77,    -1,
      81,    -1,    81,    78,    81,    -1,    21,    -1,    23,    -1,
      20,    -1,    22,    -1,    18,    -1,    19,    -1,    80,    -1,
      -1,    80,    34,    75,    -1,    75,    -1,    81,    82,    83,
      -1,    83,    -1,    24,    -1,    25,    -1,    83,    84,    85,
      -1,    85,    -1,    26,    -1,    27,    -1,    30,    75,    31,
      -1,    17,    30,    75,    31,    -1,    25,    30,    75,    31,
      -1,     4,    -1,    17,     4,    -1,    25,     4,    -1,    70,
      -1,    -1,    17,     3,    86,    30,    79,    31,    -1,    -1,
      25,     3,    87,    30,    79,    31,    -1,    88,    -1,    17,
      88,    -1,    25,    88,    -1,     3,    -1,    88,    89,    -1,
      88,    90,    -1,    28,    81,    29,    -1,    36,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    74,    77,    78,    81,    82,    85,    85,
      88,    88,    90,    91,    94,    95,    98,    99,   100,   101,
     104,   107,   108,   111,   112,   115,   116,   117,   118,   121,
     122,   125,   126,   129,   130,   131,   132,   135,   136,   137,
     141,   142,   143,   144,   147,   151,   152,   153,   154,   155,
     159,   160,   161,   162,   164,   165,   167,   168,   170,   171,
     174,   175,   178,   179,   182,   183,   184,   187,   188,   191,
     191,   193,   194,   196,   198,   200,   201,   202,   203,   204,
     205,   208,   211,   212,   215,   216,   218,   218,   219,   222,
     223,   226,   227,   230,   231,   235,   236,   237,   238,   239,
     240,   243,   244,   247,   248,   251,   252,   255,   256,   259,
     260,   263,   264,   267,   269,   271,   272,   274,   276,   277,
     279,   279,   281,   281,   282,   284,   286,   289,   290,   291,
     295,   298
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
  "tag", "id_list", "dim_decl", "cexpr", "mcexpr", "cfactor",
  "init_id_list", "init_id", "stmt_list", "stmt", "$@4", "function_call",
  "assign_expr_list", "nonempty_assign_expr_list", "assign_expr", "$@5",
  "relop_expr", "relop_term", "relop_factor", "rel_op", "relop_expr_list",
  "nonempty_relop_expr_list", "expr", "add_op", "term", "mul_op", "factor",
  "$@6", "$@7", "var_ref", "dim", "struct_tail", YY_NULL
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
      57,    57,    57,    57,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    67,    67,    69,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    70,    71,    71,    72,    72,    74,    73,    73,    75,
      75,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    85,    85,    85,    85,    85,
      86,    85,    87,    85,    85,    85,    85,    88,    88,    88,
      89,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     1,     0,     9,
       0,     8,     6,     5,     3,     1,     2,     2,     3,     3,
       4,     4,     0,     1,     0,     2,     1,     1,     0,     2,
       1,     1,     1,     4,     4,     4,     2,     3,     3,     3,
       1,     1,     1,     1,     2,     4,     3,     3,     2,     1,
       1,     3,     4,     2,     3,     4,     3,     1,     3,     1,
       1,     3,     1,     3,     1,     2,     3,     2,     1,     0,
       4,     5,     9,     7,     5,     1,     4,     2,     1,     2,
       3,     4,     1,     0,     3,     1,     0,     4,     1,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     4,     4,     1,     2,     2,     1,
       0,     6,     0,     6,     1,     2,     2,     1,     2,     2,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     5,     1,     0,    43,     0,    42,    40,    41,
       0,     0,     4,     7,     0,    30,    31,    32,     0,     0,
      50,     0,    49,     0,    44,     0,     0,     0,     6,    29,
      64,     0,    62,    36,     0,     0,    53,     0,    39,     0,
      48,     0,     0,     0,     0,     0,     0,     0,    65,     0,
      37,    38,    60,     0,     0,    57,    59,     0,    51,    47,
       0,    46,    64,    34,    33,    35,   127,   116,     0,     0,
       0,   119,    66,    89,    91,    93,   106,   110,   124,     0,
       0,    15,     0,     0,    63,     0,   107,   108,    54,     0,
     111,   112,     0,     0,    52,    45,   102,   127,   117,     0,
     125,   127,   118,     0,   126,     0,     0,     0,    99,   100,
      97,    95,    98,    96,     0,     0,     0,     0,     0,   128,
     129,    10,    13,     0,     0,    16,    17,    61,    56,    58,
      55,   104,     0,   101,     0,     0,     0,     0,   113,    90,
      92,    94,   105,   109,     0,   131,     0,     8,    12,    14,
      24,    18,    19,    81,     0,   102,   114,   102,   115,   130,
     127,     0,     0,     0,    69,    78,     0,     0,     0,    26,
      68,    75,     0,   124,     0,     0,    23,   103,     0,     0,
       0,   102,    83,     0,    79,     0,    11,    25,    67,    77,
       0,     0,    22,   121,   123,     0,     0,   127,     0,    82,
      85,    88,     0,    80,     0,     9,     0,    20,     0,     0,
       0,   102,     0,    70,    76,     0,    74,    71,     0,     0,
      84,    22,     0,    87,    83,    21,    73,     0,     0,    72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    12,    13,   174,   146,    80,    81,
     151,   207,   175,   167,   168,    15,    16,    17,    42,    19,
      24,    21,    48,    54,    55,    56,    31,    32,   169,   170,
     183,    71,   198,   199,   200,   210,   131,    73,    74,   114,
     172,   133,    75,   115,    76,    92,    77,   134,   136,    78,
     119,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -157
static const yytype_int16 yypact[] =
{
    -157,    25,  -157,  -157,   191,  -157,    62,  -157,  -157,  -157,
      13,   272,  -157,  -157,   301,  -157,  -157,  -157,    68,    14,
      45,   165,    50,    78,  -157,    62,    62,    62,  -157,  -157,
      93,   201,  -157,  -157,   214,     2,    77,   109,  -157,   227,
    -157,   250,   124,   265,   275,   299,   126,    91,    77,   124,
    -157,  -157,  -157,     2,    -3,   311,  -157,     2,    45,  -157,
     263,  -157,    49,  -157,  -157,  -157,   115,  -157,    30,    63,
     126,  -157,    99,   125,  -157,   305,   311,  -157,    -5,    69,
      82,  -157,   145,   150,  -157,   257,  -157,  -157,  -157,     2,
    -157,  -157,     2,   146,    77,  -157,   126,   130,  -157,   126,
      -5,   132,  -157,   126,    -5,   111,   126,   126,  -157,  -157,
    -157,  -157,  -157,  -157,   126,   126,   126,   126,   162,  -157,
    -157,  -157,  -157,   103,   310,   148,   148,  -157,   311,  -157,
    -157,    99,   154,   156,   172,   116,   175,   137,  -157,   125,
    -157,   315,   311,  -157,   202,  -157,   176,  -157,  -157,  -157,
     126,  -157,  -157,  -157,   126,   126,  -157,   126,  -157,  -157,
      39,   177,   180,   182,  -157,  -157,    26,   188,   212,   129,
    -157,   271,   160,    66,   176,   209,   315,    99,   210,   215,
     126,   126,   255,   176,  -157,    71,  -157,   129,  -157,  -157,
     126,   219,   226,  -157,  -157,   142,   230,   144,   208,   231,
    -157,    99,   234,  -157,    84,  -157,   126,  -157,   129,   129,
     260,   126,   255,  -157,  -157,   307,   262,  -157,   126,   266,
    -157,   226,   129,    99,   255,  -157,  -157,   290,   129,  -157
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,  -157,  -157,   289,  -157,  -157,  -157,   211,
     216,   120,  -157,  -156,    16,   -13,  -157,  -157,     1,    -7,
    -157,   293,    -6,    17,   254,   252,  -157,   296,   178,  -150,
    -157,  -133,   123,  -157,   136,  -157,   -46,   243,   244,  -157,
     -93,  -157,  -106,   -47,   235,   -74,   236,  -157,  -157,   -59,
    -157,  -157
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -123
static const yytype_int16 yytable[] =
{
      72,    29,   116,   132,    27,    18,    52,    89,   141,   100,
     104,   144,    26,   171,    36,    18,    22,    20,   191,   188,
      14,    86,    87,   117,   105,     3,    88,   202,    29,    66,
      67,   118,    53,    97,    98,   171,   171,   188,    89,    41,
      83,   171,    20,    68,   176,    23,    89,    29,    82,    33,
     171,    69,    94,   135,   171,    60,    70,   137,   216,   217,
      99,   184,   178,    46,   179,    20,   101,   102,   116,    96,
      85,    30,   226,    35,    93,   171,   171,    35,   229,     5,
     190,     6,    39,     7,     8,     9,   106,   173,   196,   171,
      10,    11,     5,   103,   117,   171,     7,     8,     9,   106,
     215,   121,   118,    10,   122,    57,   203,    46,   177,   173,
     173,    40,    58,   123,   106,   173,   124,    83,   219,   214,
     185,    35,    79,    47,   173,    82,   106,    62,   173,    66,
      67,   106,    66,    67,   195,   147,   201,   161,   148,   162,
     163,   107,   138,    68,   204,    96,    68,   156,   125,   173,
     173,    69,   106,   126,    69,    29,    70,   106,   -86,    70,
    -120,   164,  -122,   173,   165,   145,   201,   166,   158,   173,
      86,    87,   223,   208,    96,   130,   150,     5,   201,   160,
      67,     7,     8,     9,   161,   153,   162,   163,    10,    11,
     154,    -3,     5,    68,     6,   189,     7,     8,     9,    37,
      38,    69,   155,    10,    11,   157,    70,   180,   164,   -28,
     181,   165,   182,     5,   166,   160,    67,     7,     8,     9,
     161,   186,   162,   163,    10,    11,    86,    87,     5,    68,
       6,   159,     7,     8,     9,    49,    50,    69,   192,    10,
      11,   193,    70,   211,   164,   -27,   194,   165,    37,    51,
     166,     5,   205,     6,   206,     7,     8,     9,   197,    67,
      59,   209,    10,    11,     5,   212,     6,   213,     7,     8,
       9,   222,    68,     5,   218,    10,    11,    25,     8,     9,
      69,    86,    87,    61,    10,    70,  -119,  -119,   127,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,    95,  -119,  -119,    37,
      63,   224,     5,    28,     6,  -119,     7,     8,     9,    37,
      64,     5,    34,    10,    11,     7,     8,     9,    43,    44,
      45,   228,    10,   108,   109,   110,   111,   112,   113,    86,
      87,    86,    87,    37,    65,   149,   221,    90,    91,    86,
      87,   225,   152,   128,   129,    84,   187,   227,   220,   139,
     142,   140,   143
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-157)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      46,    14,    76,    96,    11,     4,     4,    54,   114,    68,
      69,   117,    11,   146,    20,    14,     3,     3,   174,   169,
       4,    24,    25,    28,    70,     0,    29,   183,    41,     3,
       4,    36,    30,     3,     4,   168,   169,   187,    85,    23,
      47,   174,     3,    17,   150,    32,    93,    60,    47,    35,
     183,    25,    58,    99,   187,    39,    30,   103,   208,   209,
      30,    35,   155,    14,   157,     3,     3,     4,   142,    30,
      53,     3,   222,    28,    57,   208,   209,    28,   228,     1,
      14,     3,    32,     5,     6,     7,    15,   146,   181,   222,
      12,    13,     1,    30,    28,   228,     5,     6,     7,    15,
     206,    32,    36,    12,    35,    28,    35,    14,   154,   168,
     169,    33,     3,    31,    15,   174,    34,   124,   211,    35,
     166,    28,    31,    30,   183,   124,    15,     3,   187,     3,
       4,    15,     3,     4,   180,    32,   182,     8,    35,    10,
      11,    16,    31,    17,   190,    30,    17,    31,     3,   208,
     209,    25,    15,     3,    25,   168,    30,    15,    14,    30,
      30,    32,    30,   222,    35,     3,   212,    38,    31,   228,
      24,    25,   218,    31,    30,    29,    28,     1,   224,     3,
       4,     5,     6,     7,     8,    31,    10,    11,    12,    13,
      34,     0,     1,    17,     3,    35,     5,     6,     7,    34,
      35,    25,    30,    12,    13,    30,    30,    30,    32,    33,
      30,    35,    30,     1,    38,     3,     4,     5,     6,     7,
       8,    33,    10,    11,    12,    13,    24,    25,     1,    17,
       3,    29,     5,     6,     7,    34,    35,    25,    29,    12,
      13,    31,    30,    35,    32,    33,    31,    35,    34,    35,
      38,     1,    33,     3,    28,     5,     6,     7,     3,     4,
      33,    31,    12,    13,     1,    34,     3,    33,     5,     6,
       7,     9,    17,     1,    14,    12,    13,     5,     6,     7,
      25,    24,    25,    33,    12,    30,    15,    16,    31,    18,
      19,    20,    21,    22,    23,    24,    33,    26,    27,    34,
      35,    35,     1,    14,     3,    34,     5,     6,     7,    34,
      35,     1,    19,    12,    13,     5,     6,     7,    25,    26,
      27,    31,    12,    18,    19,    20,    21,    22,    23,    24,
      25,    24,    25,    34,    35,   124,    29,    26,    27,    24,
      25,   221,   126,    89,    92,    49,   168,   224,   212,   106,
     115,   107,   116
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    40,    41,     0,    42,     1,     3,     5,     6,     7,
      12,    13,    43,    44,    53,    54,    55,    56,    57,    58,
       3,    60,     3,    32,    59,     5,    57,    58,    44,    54,
       3,    65,    66,    35,    60,    28,    61,    34,    35,    32,
      33,    53,    57,    60,    60,    60,    14,    30,    61,    34,
      35,    35,     4,    30,    62,    63,    64,    28,     3,    33,
      53,    33,     3,    35,    35,    35,     3,     4,    17,    25,
      30,    70,    75,    76,    77,    81,    83,    85,    88,    31,
      47,    48,    57,    58,    66,    62,    24,    25,    29,    82,
      26,    27,    84,    62,    61,    33,    30,     3,     4,    30,
      88,     3,     4,    30,    88,    75,    15,    16,    18,    19,
      20,    21,    22,    23,    78,    82,    84,    28,    36,    89,
      90,    32,    35,    31,    34,     3,     3,    31,    63,    64,
      29,    75,    79,    80,    86,    75,    87,    75,    31,    76,
      77,    81,    83,    85,    81,     3,    46,    32,    35,    48,
      28,    49,    49,    31,    34,    30,    31,    30,    31,    29,
       3,     8,    10,    11,    32,    35,    38,    52,    53,    67,
      68,    70,    79,    88,    45,    51,    81,    75,    79,    79,
      30,    30,    30,    69,    35,    75,    33,    67,    68,    35,
      14,    52,    29,    31,    31,    75,    79,     3,    71,    72,
      73,    75,    52,    35,    75,    33,    28,    50,    31,    31,
      74,    35,    34,    33,    35,    81,    68,    68,    14,    79,
      73,    29,     9,    75,    35,    50,    68,    71,    31,    68
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
#line 74 "parser.y"
    { init_all(); }
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 74 "parser.y"
    { print_vars(); print_types(); print_funcs();}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 85 "parser.y"
    {func_decl((yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].Param_List)); inc_nesting();}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 85 "parser.y"
    {dec_nesting();}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 88 "parser.y"
    {func_decl((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), NULL); inc_nesting();}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 88 "parser.y"
    {dec_nesting();}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 90 "parser.y"
    {func_decl((yyvsp[(1) - (6)].str), (yyvsp[(2) - (6)].str), (yyvsp[(4) - (6)].Param_List));}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 91 "parser.y"
    {func_decl((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), NULL);}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 94 "parser.y"
    { (yyval.Param_List)->next=(yyvsp[(3) - (3)].Param_List); }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 98 "parser.y"
    { (yyval.Param_List)=func_param_decl ( (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str), 0, get_nesting()+1 ); }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 99 "parser.y"
    { (yyval.Param_List)=NULL; }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 100 "parser.y"
    { (yyval.Param_List)=func_param_decl ( (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].ival), get_nesting()+1 ); }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 101 "parser.y"
    { (yyval.Param_List)=NULL; }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 104 "parser.y"
    {(yyval.ival)=(yyvsp[(4) - (4)].ival)+1;}
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 107 "parser.y"
    {(yyval.ival)=(yyvsp[(4) - (4)].ival)+1;}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 108 "parser.y"
    {(yyval.ival)=0;}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 129 "parser.y"
    { type_def((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].ID_List), get_nesting()); }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 130 "parser.y"
    { type_def((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].ID_List), get_nesting()); }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 135 "parser.y"
    { add_var_list((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].ID_List), get_nesting()); }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 141 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 142 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 143 "parser.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 144 "parser.y"
    {(yyval.str)="error";}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 159 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (1)].str), 0); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 160 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(3) - (3)].str), 0); (yyval.ID_List)->next=(yyvsp[(1) - (3)].ID_List); }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 161 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].ival)); (yyval.ID_List)->next=(yyvsp[(1) - (4)].ID_List); }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 162 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].ival)); }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 164 "parser.y"
    {(yyval.ival)=1;}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 165 "parser.y"
    {(yyval.ival)=(yyvsp[(1) - (4)].ival)+1;}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 178 "parser.y"
    {(yyval.ID_List)=(yyvsp[(1) - (1)].ID_List);}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 179 "parser.y"
    { (yyvsp[(3) - (3)].ID_List)->next=(yyvsp[(1) - (3)].ID_List) ; (yyval.ID_List)=(yyvsp[(3) - (3)].ID_List); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 182 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (1)].str), 0); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 183 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].ival)); }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 184 "parser.y"
    { (yyval.ID_List)=var_decl((yyvsp[(1) - (3)].str), 0); }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 191 "parser.y"
    {inc_nesting();}
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 191 "parser.y"
    {dec_nesting();}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 218 "parser.y"
    {process_id((yyvsp[(1) - (1)].str));}
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 279 "parser.y"
    {process_id((yyvsp[(2) - (2)].str));}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 281 "parser.y"
    {process_id((yyvsp[(2) - (2)].str));}
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 289 "parser.y"
    {process_id((yyvsp[(1) - (1)].str));}
    break;


/* Line 1787 of yacc.c  */
#line 1866 "parser.tab.c"
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
#line 300 "parser.y"

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
