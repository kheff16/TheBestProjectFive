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
#line 1 "parser.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <iostream>

    #include "ast.hpp"
    #define YYINITDEPTH 10000
    #define YYDEBUG 1
    int yylex(void);
    void yyerror(const char *);
    
    extern ASTNode* astRoot;

#line 80 "parser.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    END = 0,
    U_MINUS = 258,
    T_NUM = 259,
    T_NEW = 260,
    T_IF = 261,
    T_ELSE = 262,
    T_WHILE = 263,
    T_EQUAL = 264,
    T_AND = 265,
    T_OR = 266,
    T_NOT = 267,
    T_EXTENDS = 268,
    T_DO = 269,
    T_INTEGER = 270,
    T_BOOLEAN = 271,
    T_EQUALS = 272,
    T_TRUE = 273,
    T_FALSE = 274,
    T_NONE = 275,
    T_PRINT = 276,
    T_RETURN = 277,
    T_ID = 278,
    T_PLUS = 279,
    T_ARROW = 280,
    T_MINUS = 281,
    T_MULTIPLY = 282,
    T_DIVIDE = 283,
    T_GT = 284,
    T_GTE = 285
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 158 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    35,     2,     2,    36,     2,    38,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    93,    94,    97,    98,   101,   102,   105,
     108,   111,   114,   115,   118,   122,   123,   126,   127,   130,
     133,   134,   137,   140,   141,   144,   145,   148,   149,   152,
     153,   154,   155,   156,   157,   160,   161,   164,   165,   168,
     171,   174,   177,   178,   181,   182,   183,   186,   187,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   212,
     213,   216,   217,   220,   221
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "U_MINUS", "T_NUM", "T_NEW",
  "T_IF", "T_ELSE", "T_WHILE", "T_EQUAL", "T_AND", "T_OR", "T_NOT",
  "T_EXTENDS", "T_DO", "T_INTEGER", "T_BOOLEAN", "T_EQUALS", "T_TRUE",
  "T_FALSE", "T_NONE", "T_PRINT", "T_RETURN", "T_ID", "T_PLUS", "T_ARROW",
  "T_MINUS", "T_MULTIPLY", "T_DIVIDE", "T_GT", "T_GTE", "'{'", "'}'",
  "';'", "'('", "')'", "','", "\";\"", "'.'", "$accept", "Start",
  "Classes", "Class", "members", "member", "mem", "method", "methods",
  "body", "parameters", "parameter", "parm", "declarations", "declaration",
  "realDec", "statements", "block", "statement", "assign", "iff", "whil",
  "doo", "prin", "returnType", "type", "returnT", "expr", "MethodCall",
  "Arguments", "Argument", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   123,   125,    59,    40,    41,    44,   286,    46
};
# endif

#define YYPACT_NINF -105

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-105)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,   -10,    42,  -105,    17,    20,  -105,  -105,  -105,    29,
      95,  -105,  -105,  -105,    30,  -105,    40,    35,    45,    95,
     125,    30,  -105,  -105,  -105,    37,    47,  -105,    51,    54,
    -105,    58,  -105,  -105,    71,   125,  -105,    46,  -105,  -105,
      66,  -105,  -105,    67,   211,  -105,     7,     7,    69,     7,
       1,  -105,    91,   222,  -105,  -105,  -105,  -105,  -105,    96,
      83,  -105,   119,     7,  -105,  -105,   -18,     7,     7,   156,
    -105,   164,   222,    98,     7,     7,   120,     7,  -105,     1,
    -105,   -19,  -105,  -105,    80,  -105,   124,  -105,    48,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   222,   222,
      89,   222,  -105,   106,   186,    94,   113,     4,   127,  -105,
      96,     7,   116,  -105,   220,   194,   214,     9,     9,  -105,
    -105,    65,   181,   126,   137,   162,  -105,  -105,  -105,     7,
       7,     7,  -105,  -105,   136,   165,  -105,   142,   186,   135,
     143,  -105,   146,     7,  -105,  -105,   222,    77,   147,   166,
    -105,  -105
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     8,     1,     3,     0,
      13,     8,    44,    45,    46,     7,    13,     0,     0,    13,
      16,     0,    12,     5,    10,     0,     0,    46,     0,    15,
      18,     0,     9,     6,     0,     0,    19,     0,    17,    43,
       0,    42,    21,     0,    26,    11,     0,     0,     0,     0,
      46,    20,    48,    26,    29,    31,    32,    33,    34,     0,
       0,    64,     0,     0,    65,    66,    60,     0,     0,     0,
      62,     0,     0,     0,     0,    72,     0,     0,    14,     0,
      25,     0,    22,    30,    67,    58,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    41,     0,    74,     0,    71,     0,     0,    24,
       0,    72,    61,    63,    56,    57,    55,    49,    50,    51,
      52,    53,    54,     0,     0,     0,    27,    35,    69,     0,
       0,    72,    47,    23,     0,    38,    39,     0,    73,     0,
       0,    68,     0,     0,    36,    70,     0,     0,     0,     0,
      37,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   185,  -105,   189,  -105,  -105,  -105,    15,  -105,
    -105,  -105,   167,  -105,  -105,   121,   148,   -93,   -29,  -105,
    -105,  -105,  -105,  -105,  -105,    36,  -105,   -45,   -44,  -104,
    -105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    15,    25,    16,    17,    43,
      28,    29,    30,    44,    51,    82,    52,   100,   101,    54,
      55,    56,    57,    58,    40,    18,    78,   104,    70,   105,
     106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      60,    69,    71,     5,    73,   123,   124,   134,   126,    60,
      74,    61,    62,   130,   109,    53,    75,   110,    85,    63,
      86,     6,    87,    88,    53,    64,    65,   140,    60,   103,
      66,    22,   108,    67,    26,    75,    94,    95,   131,    76,
       1,    68,     7,     9,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   148,    60,    60,    31,    60,    89,    90,
      11,    12,    13,    21,    20,    91,    39,    23,    24,    27,
      32,    31,    92,    41,    93,    94,    95,    96,    97,    33,
      59,    36,    91,   113,   138,   139,    34,    89,    90,    92,
      35,    93,    94,    95,    91,    97,    37,    42,   147,    45,
      72,    92,    60,    93,    94,    95,    96,    97,    89,    90,
      12,    13,   149,    77,   111,    91,    89,    90,    14,    81,
      83,   125,    92,    91,    93,    94,    95,    96,    97,   128,
      92,   102,    93,    94,    95,    96,    97,    89,    90,   127,
      12,    13,    84,   107,    91,    89,    90,   112,    27,   129,
     131,    92,    91,    93,    94,    95,    96,    97,   135,    92,
     132,    93,    94,    95,    96,    97,    89,    90,   144,   136,
     137,   141,   142,    91,    89,    90,   143,   146,   145,   150,
      92,    91,    93,    94,    95,    96,    97,    98,    92,     8,
      93,    94,    95,    96,    97,    99,    89,    90,    91,   151,
      19,    80,    38,    91,    89,    92,     0,    93,    94,    95,
      92,    91,    93,    94,    95,    96,    97,    46,    92,    47,
      93,    94,    95,    96,    97,    48,    12,    13,    46,     0,
      47,   133,    49,     0,    50,     0,    48,    91,    92,     0,
      93,    94,    95,    49,    92,    79,    93,    94,    95,    96,
      97
};

static const yytype_int16 yycheck[] =
{
      44,    46,    47,    13,    49,    98,    99,   111,   101,    53,
       9,     4,     5,     9,    33,    44,    34,    36,    63,    12,
      38,    31,    67,    68,    53,    18,    19,   131,    72,    74,
      23,    16,    77,    26,    19,    34,    27,    28,    34,    38,
      23,    34,     0,    23,    89,    90,    91,    92,    93,    94,
      95,    96,    97,   146,    98,    99,    20,   101,    10,    11,
      31,    15,    16,    23,    34,    17,    20,    32,    23,    23,
      33,    35,    24,    37,    26,    27,    28,    29,    30,    32,
      44,    23,    17,    35,   129,   130,    35,    10,    11,    24,
      36,    26,    27,    28,    17,    30,    25,    31,   143,    32,
      31,    24,   146,    26,    27,    28,    29,    30,    10,    11,
      15,    16,    35,    22,    34,    17,    10,    11,    23,    23,
      37,    32,    24,    17,    26,    27,    28,    29,    30,    35,
      24,    33,    26,    27,    28,    29,    30,    10,    11,    33,
      15,    16,    23,    23,    17,    10,    11,    23,    23,    36,
      34,    24,    17,    26,    27,    28,    29,    30,    32,    24,
      33,    26,    27,    28,    29,    30,    10,    11,    33,    32,
       8,    35,     7,    17,    10,    11,    34,    31,    35,    32,
      24,    17,    26,    27,    28,    29,    30,    31,    24,     4,
      26,    27,    28,    29,    30,    31,    10,    11,    17,    33,
      11,    53,    35,    17,    10,    24,    -1,    26,    27,    28,
      24,    17,    26,    27,    28,    29,    30,     6,    24,     8,
      26,    27,    28,    29,    30,    14,    15,    16,     6,    -1,
       8,   110,    21,    -1,    23,    -1,    14,    17,    24,    -1,
      26,    27,    28,    21,    24,    23,    26,    27,    28,    29,
      30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    40,    41,    42,    13,    31,     0,    41,    23,
      43,    31,    15,    16,    23,    44,    46,    47,    64,    43,
      34,    23,    47,    32,    23,    45,    47,    23,    49,    50,
      51,    64,    33,    32,    35,    36,    23,    25,    51,    20,
      63,    64,    31,    48,    52,    32,     6,     8,    14,    21,
      23,    53,    55,    57,    58,    59,    60,    61,    62,    64,
      67,     4,     5,    12,    18,    19,    23,    26,    34,    66,
      67,    66,    31,    66,     9,    34,    38,    22,    65,    23,
      55,    23,    54,    37,    23,    66,    38,    66,    66,    10,
      11,    17,    24,    26,    27,    28,    29,    30,    31,    31,
      56,    57,    33,    66,    66,    68,    69,    23,    66,    33,
      36,    34,    23,    35,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    56,    56,    32,    56,    33,    35,    36,
       9,    34,    33,    54,    68,    32,    32,     8,    66,    66,
      68,    35,     7,    34,    33,    35,    31,    66,    56,    35,
      32,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    43,    44,
      45,    46,    47,    47,    48,    49,    49,    50,    50,    51,
      52,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      61,    62,    63,    63,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     7,     2,     0,     3,
       1,     9,     2,     0,     3,     1,     0,     3,     1,     2,
       2,     0,     2,     3,     2,     2,     0,     2,     1,     1,
       2,     1,     1,     1,     1,     4,     6,     9,     5,     5,
       9,     3,     1,     1,     1,     1,     1,     3,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     3,     1,     3,     1,     1,     1,     2,     5,     4,
       6,     1,     0,     3,     1
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
        case 2:
#line 90 "parser.y" /* yacc.c:1646  */
    {astRoot = new ProgramNode((yyvsp[0].class_list_ptr));}
#line 1360 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 93 "parser.y" /* yacc.c:1646  */
    {(yyval.class_list_ptr) = (yyvsp[0].class_list_ptr); (yyval.class_list_ptr)->push_front((yyvsp[-1].class_ptr));}
#line 1366 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 94 "parser.y" /* yacc.c:1646  */
    {(yyval.class_list_ptr) = new std::list<ClassNode*>(); (yyval.class_list_ptr)->push_front((yyvsp[0].class_ptr));}
#line 1372 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 97 "parser.y" /* yacc.c:1646  */
    {(yyval.class_ptr) = new ClassNode((yyvsp[-4].identifier_ptr),NULL,(yyvsp[-2].declaration_list_ptr),(yyvsp[-1].method_list_ptr));}
#line 1378 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.class_ptr) = new ClassNode((yyvsp[-6].identifier_ptr),(yyvsp[-4].identifier_ptr),(yyvsp[-2].declaration_list_ptr),(yyvsp[-1].method_list_ptr));}
#line 1384 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = (yyvsp[-1].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[0].declaration_ptr));}
#line 1390 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 102 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = new std::list<DeclarationNode*>();}
#line 1396 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 105 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_ptr) = new DeclarationNode((yyvsp[-2].type_ptr),(yyvsp[-1].identifier_list_ptr));}
#line 1402 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.identifier_list_ptr) = new std::list<IdentifierNode*>();(yyval.identifier_list_ptr)->push_front((yyvsp[0].identifier_ptr));}
#line 1408 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.method_ptr) = new MethodNode((yyvsp[-8].identifier_ptr), (yyvsp[-6].parameter_list_ptr), (yyvsp[-3].type_ptr), (yyvsp[-1].methodbody_ptr));}
#line 1414 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.method_list_ptr) = (yyvsp[0].method_list_ptr); (yyval.method_list_ptr)->push_front((yyvsp[-1].method_ptr));}
#line 1420 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.method_list_ptr) = new std::list<MethodNode*>();}
#line 1426 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.methodbody_ptr) = new MethodBodyNode((yyvsp[-2].declaration_list_ptr), (yyvsp[-1].statement_list_ptr), (yyvsp[0].returnstatement_ptr));}
#line 1432 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = (yyvsp[0].parameter_list_ptr);}
#line 1438 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 123 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = NULL;}
#line 1444 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 126 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = (yyvsp[-2].parameter_list_ptr); (yyval.parameter_list_ptr)->push_back((yyvsp[0].parameter_ptr));}
#line 1450 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = new std::list<ParameterNode*>(); (yyval.parameter_list_ptr)->push_back((yyvsp[0].parameter_ptr));}
#line 1456 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_ptr) = new ParameterNode((yyvsp[-1].type_ptr),(yyvsp[0].identifier_ptr));}
#line 1462 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = (yyvsp[-1].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[0].declaration_ptr));}
#line 1468 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = new std::list<DeclarationNode*>();}
#line 1474 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_ptr) = new DeclarationNode((yyvsp[-1].type_ptr),(yyvsp[0].identifier_list_ptr));}
#line 1480 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.identifier_list_ptr) = (yyvsp[0].identifier_list_ptr); (yyval.identifier_list_ptr)->push_front((yyvsp[-2].identifier_ptr));}
#line 1486 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.identifier_list_ptr) = new std::list<IdentifierNode*>();(yyval.identifier_list_ptr)->push_front((yyvsp[-1].identifier_ptr));}
#line 1492 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = (yyvsp[0].statement_list_ptr); (yyval.statement_list_ptr)->push_front((yyvsp[-1].statement_ptr));}
#line 1498 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 145 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = new std::list<StatementNode*>(); /* Could run into errors here and in block*/ }
#line 1504 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = (yyvsp[0].statement_list_ptr); (yyval.statement_list_ptr)->push_front((yyvsp[-1].statement_ptr));}
#line 1510 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = new std::list<StatementNode*>(); (yyval.statement_list_ptr)->push_front((yyvsp[0].statement_ptr));}
#line 1516 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].assignment_ptr);}
#line 1522 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = new CallNode((yyvsp[-1].methodcall_ptr));}
#line 1528 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].ifelse_ptr);}
#line 1534 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].while_ptr);}
#line 1540 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].dowhile_ptr);}
#line 1546 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].print_ptr);}
#line 1552 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "parser.y" /* yacc.c:1646  */
    {(yyval.assignment_ptr) = new AssignmentNode((yyvsp[-3].identifier_ptr), NULL, (yyvsp[-1].expression_ptr));}
#line 1558 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "parser.y" /* yacc.c:1646  */
    {(yyval.assignment_ptr) = new AssignmentNode((yyvsp[-5].identifier_ptr), (yyvsp[-3].identifier_ptr), (yyvsp[-1].expression_ptr));}
#line 1564 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.ifelse_ptr) = new IfElseNode((yyvsp[-7].expression_ptr),(yyvsp[-5].statement_list_ptr),(yyvsp[-1].statement_list_ptr));}
#line 1570 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.ifelse_ptr) = new IfElseNode((yyvsp[-3].expression_ptr),(yyvsp[-1].statement_list_ptr), NULL);}
#line 1576 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.while_ptr) = new WhileNode((yyvsp[-3].expression_ptr), (yyvsp[-1].statement_list_ptr));}
#line 1582 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.dowhile_ptr) = new DoWhileNode((yyvsp[-6].statement_list_ptr), (yyvsp[-2].expression_ptr));}
#line 1588 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.print_ptr) = new PrintNode((yyvsp[-1].expression_ptr));}
#line 1594 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = (yyvsp[0].type_ptr);}
#line 1600 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new NoneNode();}
#line 1606 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new IntegerTypeNode();}
#line 1612 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 182 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new BooleanTypeNode();}
#line 1618 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new ObjectTypeNode((yyvsp[0].identifier_ptr));}
#line 1624 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 186 "parser.y" /* yacc.c:1646  */
    {(yyval.returnstatement_ptr) = new ReturnStatementNode((yyvsp[-1].expression_ptr));}
#line 1630 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.returnstatement_ptr) = NULL; /* May be different*/}
#line 1636 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 190 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new PlusNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1642 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 191 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new MinusNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1648 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new TimesNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1654 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new DivideNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1660 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new GreaterNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1666 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new GreaterEqualNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1672 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new EqualNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1678 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new AndNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1684 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new OrNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1690 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NotNode((yyvsp[0].expression_ptr));}
#line 1696 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NegationNode((yyvsp[0].expression_ptr));}
#line 1702 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new VariableNode((yyvsp[0].identifier_ptr));}
#line 1708 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new MemberAccessNode((yyvsp[-2].identifier_ptr),(yyvsp[0].identifier_ptr));}
#line 1714 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = (yyvsp[0].methodcall_ptr);}
#line 1720 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = (yyvsp[-1].expression_ptr);}
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new IntegerLiteralNode((yyvsp[0].integer_ptr));}
#line 1732 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 206 "parser.y" /* yacc.c:1646  */
    {/*$$ = new BooleanLiteralNode($1);*/}
#line 1738 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 207 "parser.y" /* yacc.c:1646  */
    {/*$$ = new BooleanLiteralNode($1);*/}
#line 1744 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NewNode((yyvsp[0].identifier_ptr), NULL);}
#line 1750 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NewNode((yyvsp[-3].identifier_ptr), (yyvsp[-1].expression_list_ptr));}
#line 1756 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcall_ptr) = new MethodCallNode((yyvsp[-3].identifier_ptr), NULL, (yyvsp[-1].expression_list_ptr));}
#line 1762 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcall_ptr) = new MethodCallNode((yyvsp[-5].identifier_ptr), (yyvsp[-3].identifier_ptr), (yyvsp[-1].expression_list_ptr));}
#line 1768 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_list_ptr) = (yyvsp[0].expression_list_ptr);}
#line 1774 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_list_ptr) = new std::list<ExpressionNode*>();}
#line 1780 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval.expression_list_ptr) = (yyvsp[-2].expression_list_ptr); (yyval.expression_list_ptr)->push_back((yyvsp[0].expression_ptr)); }
#line 1786 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.expression_list_ptr) = new std::list<ExpressionNode*>(); (yyval.expression_list_ptr)->push_back((yyvsp[0].expression_ptr));}
#line 1792 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1796 "parser.cpp" /* yacc.c:1646  */
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
#line 223 "parser.y" /* yacc.c:1906  */


extern int yylineno;

void yyerror(const char *s) {
  fprintf(stderr, "%s at line %d\n", s, yylineno);
  exit(0);
}
