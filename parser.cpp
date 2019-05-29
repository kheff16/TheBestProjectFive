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

#line 81 "parser.cpp" /* yacc.c:339  */

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
    T_unary = 258,
    T_equals = 259,
    T_geq = 260,
    T_arrow = 261,
    T_and = 262,
    T_or = 263,
    T_not = 264,
    T_true = 265,
    T_false = 266,
    T_new = 267,
    T_if = 268,
    T_else = 269,
    T_while = 270,
    T_do = 271,
    T_print = 272,
    T_extends = 273,
    T_return = 274,
    T_none = 275,
    T_bool = 276,
    T_integer = 277,
    T_id = 278,
    T_number = 279
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 152 "parser.cpp" /* yacc.c:358  */

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
#define YYLAST   267

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

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
      33,    34,    28,    26,    35,    27,    37,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    32,
       2,    36,    25,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    85,    86,    88,    89,    91,    92,    94,
      96,    97,    99,   101,   103,   104,   106,   107,   109,   111,
     112,   113,   114,   116,   117,   119,   121,   122,   124,   125,
     127,   128,   129,   130,   131,   132,   134,   135,   137,   138,
     140,   142,   144,   146,   147,   149,   150,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   173,   174,   176,
     177,   178,   180,   181,   183,   184
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_unary", "T_equals", "T_geq",
  "T_arrow", "T_and", "T_or", "T_not", "T_true", "T_false", "T_new",
  "T_if", "T_else", "T_while", "T_do", "T_print", "T_extends", "T_return",
  "T_none", "T_bool", "T_integer", "T_id", "T_number", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'{'", "'}'", "';'", "'('", "')'", "','", "'='", "'.'",
  "$accept", "Start", "Classes", "Class", "Members", "Member", "Methods",
  "Method", "Body", "Parameters", "ParamList", "Param", "ReturnType",
  "Declarations", "Declaration", "DL", "Statements", "Statement",
  "Assignment", "IfElse", "While", "DoWhile", "Print", "BlockState",
  "ReturnState", "Expression", "MethodCall", "Type", "Arguments",
  "ArgumentsC", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    62,    43,    45,    42,    47,
     123,   125,    59,    40,    41,    44,    61,    46
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,   -10,    12,   -16,  -108,     0,  -108,  -108,  -108,    11,
      55,  -108,  -108,  -108,    20,  -108,    25,    35,    47,    55,
      62,  -108,    20,  -108,    41,    57,  -108,    65,    56,  -108,
      89,  -108,  -108,    99,    62,  -108,   219,  -108,  -108,  -108,
    -108,  -108,    83,  -108,    87,   237,  -108,   194,   194,    91,
     194,    -6,  -108,   103,   196,  -108,  -108,  -108,  -108,  -108,
      94,   100,   194,  -108,  -108,   106,   -27,  -108,   194,   194,
     154,  -108,   160,   196,    82,   194,   194,   107,   194,  -108,
      -6,  -108,  -108,    -3,  -108,  -108,    98,   111,  -108,     9,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   196,
     196,  -108,    29,  -108,   166,   108,   115,   112,   -11,   120,
    -108,   100,   194,   110,  -108,   238,   238,   197,   171,   238,
      69,    69,  -108,  -108,   215,   220,   136,  -108,  -108,   194,
    -108,   194,   194,  -108,  -108,   129,   152,  -108,   139,   166,
     135,   128,  -108,   147,   194,  -108,  -108,   196,    67,   232,
     175,  -108,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     4,     0,     8,     1,     3,     0,
      11,     8,    70,    69,    71,     7,     0,    11,     0,    11,
      15,     5,     0,    10,     0,     0,    71,     0,    14,    17,
       0,     9,     6,     0,     0,    18,     0,    16,    22,    20,
      19,    21,     0,    24,     0,    29,    12,     0,     0,     0,
       0,    71,    23,    46,    29,    30,    32,    33,    34,    35,
       0,     0,     0,    63,    64,     0,    58,    62,     0,     0,
       0,    60,     0,     0,     0,    73,     0,     0,     0,    13,
       0,    28,    31,     0,    25,    56,    65,     0,    57,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,    42,    75,     0,    72,     0,     0,     0,
      27,     0,    73,    59,    61,    53,    52,    54,    55,    51,
      47,    48,    49,    50,     0,     0,     0,    43,    67,     0,
      36,    73,     0,    45,    26,     0,    38,    40,     0,    74,
       0,     0,    66,     0,     0,    68,    37,     0,     0,     0,
       0,    39,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,   205,   199,  -108,    31,  -108,  -108,  -108,
    -108,   180,  -108,  -108,  -108,   104,   162,   -43,  -108,  -108,
    -108,  -108,  -108,   -96,  -108,   -29,   -45,   -19,  -107,  -108
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    15,    16,    17,    44,    27,
      28,    29,    42,    45,    52,    84,    53,   101,    55,    56,
      57,    58,    59,   102,    79,   104,    71,    18,   105,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      60,    30,    54,   124,   125,   135,    75,     1,     5,    60,
      87,    54,     7,    90,    91,    30,    92,    93,    70,    72,
       6,    74,   131,     9,   140,   132,    61,    75,    60,   110,
      76,    77,   111,    85,    94,    95,    96,    97,    98,    88,
      89,    11,    47,   114,    48,    49,    50,   107,    23,   109,
      25,   149,    80,    20,    60,    60,    21,    60,    22,   127,
     126,   115,   116,   117,   118,   119,   120,   121,   122,   123,
      24,    90,    91,    31,    92,    93,    12,    13,    14,    60,
      60,   127,   127,    12,    13,    26,    90,    91,    32,    92,
      93,    34,    94,    95,    96,    97,    98,    97,    98,    33,
     139,   150,    60,   141,    60,    36,   127,    94,    95,    96,
      97,    98,    35,    43,   103,   148,    90,    91,    46,    92,
      93,    73,    78,    83,    90,    91,    82,    92,    93,    86,
     108,   112,    90,    91,   113,    92,    93,    94,    95,    96,
      97,    98,   128,   131,   130,    94,    95,    96,    97,    98,
     129,   138,   133,    94,    95,    96,    97,    98,    90,    91,
     146,    92,    93,   142,    90,    91,   143,    92,    93,   145,
      90,    91,   144,    92,    93,    90,    91,   147,    92,    94,
      95,    96,    97,    98,    99,    94,    95,    96,    97,    98,
     100,    94,    95,    96,    97,    98,    94,    95,    96,    97,
      98,    90,    91,    62,    63,    64,    65,   152,     8,    47,
      19,    48,    49,    50,    37,   134,    81,    66,    67,    80,
       0,    68,    94,    95,    96,    97,    98,    69,    47,     0,
      48,    49,    50,    47,     0,    48,    49,    50,    80,    38,
      39,    40,    41,    80,     0,    47,   136,    48,    49,    50,
      47,   137,    48,    49,    50,    80,     0,     0,    12,    13,
      51,     0,     0,   151,    95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
      45,    20,    45,    99,   100,   112,    33,    23,    18,    54,
      37,    54,     0,     4,     5,    34,     7,     8,    47,    48,
      30,    50,    33,    23,   131,    36,    45,    33,    73,    32,
      36,    37,    35,    62,    25,    26,    27,    28,    29,    68,
      69,    30,    13,    34,    15,    16,    17,    76,    17,    78,
      19,   147,    23,    33,    99,   100,    31,   102,    23,   102,
      31,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      23,     4,     5,    32,     7,     8,    21,    22,    23,   124,
     125,   124,   125,    21,    22,    23,     4,     5,    31,     7,
       8,    35,    25,    26,    27,    28,    29,    28,    29,    34,
     129,    34,   147,   132,   149,     6,   149,    25,    26,    27,
      28,    29,    23,    30,    32,   144,     4,     5,    31,     7,
       8,    30,    19,    23,     4,     5,    32,     7,     8,    23,
      23,    33,     4,     5,    23,     7,     8,    25,    26,    27,
      28,    29,    34,    33,    32,    25,    26,    27,    28,    29,
      35,    15,    32,    25,    26,    27,    28,    29,     4,     5,
      32,     7,     8,    34,     4,     5,    14,     7,     8,    34,
       4,     5,    33,     7,     8,     4,     5,    30,     7,    25,
      26,    27,    28,    29,    30,    25,    26,    27,    28,    29,
      30,    25,    26,    27,    28,    29,    25,    26,    27,    28,
      29,     4,     5,     9,    10,    11,    12,    32,     3,    13,
      11,    15,    16,    17,    34,   111,    54,    23,    24,    23,
      -1,    27,    25,    26,    27,    28,    29,    33,    13,    -1,
      15,    16,    17,    13,    -1,    15,    16,    17,    23,    20,
      21,    22,    23,    23,    -1,    13,    31,    15,    16,    17,
      13,    31,    15,    16,    17,    23,    -1,    -1,    21,    22,
      23,    -1,    -1,    31,    26,    27,    28,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    39,    40,    41,    18,    30,     0,    41,    23,
      42,    30,    21,    22,    23,    43,    44,    45,    65,    42,
      33,    31,    23,    44,    23,    44,    23,    47,    48,    49,
      65,    32,    31,    34,    35,    23,     6,    49,    20,    21,
      22,    23,    50,    30,    46,    51,    31,    13,    15,    16,
      17,    23,    52,    54,    55,    56,    57,    58,    59,    60,
      64,    65,     9,    10,    11,    12,    23,    24,    27,    33,
      63,    64,    63,    30,    63,    33,    36,    37,    19,    62,
      23,    54,    32,    23,    53,    63,    23,    37,    63,    63,
       4,     5,     7,     8,    25,    26,    27,    28,    29,    30,
      30,    55,    61,    32,    63,    66,    67,    63,    23,    63,
      32,    35,    33,    23,    34,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    61,    61,    31,    55,    34,    35,
      32,    33,    36,    32,    53,    66,    31,    31,    15,    63,
      66,    63,    34,    14,    33,    34,    32,    30,    63,    61,
      34,    31,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    42,    43,
      44,    44,    45,    46,    47,    47,    48,    48,    49,    50,
      50,    50,    50,    51,    51,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    57,
      58,    59,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    64,    65,
      65,    65,    66,    66,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     5,     7,     2,     0,     3,
       2,     0,     9,     3,     1,     0,     3,     1,     2,     1,
       1,     1,     1,     2,     0,     2,     3,     2,     2,     0,
       1,     2,     1,     1,     1,     1,     4,     6,     5,     9,
       5,     9,     3,     2,     1,     3,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     3,
       1,     3,     1,     1,     1,     2,     5,     4,     6,     1,
       1,     1,     1,     0,     3,     1
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
#line 81 "parser.y" /* yacc.c:1646  */
    {astRoot = new ProgramNode((yyvsp[0].class_list_ptr));}
#line 1353 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 85 "parser.y" /* yacc.c:1646  */
    {(yyval.class_list_ptr) = (yyvsp[-1].class_list_ptr); (yyval.class_list_ptr)->push_back((yyvsp[0].class_ptr));}
#line 1359 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 86 "parser.y" /* yacc.c:1646  */
    {(yyval.class_list_ptr) = new std::list<ClassNode*>(); (yyval.class_list_ptr)->push_back((yyvsp[0].class_ptr));}
#line 1365 "parser.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "parser.y" /* yacc.c:1646  */
    {(yyval.class_ptr) = new ClassNode((yyvsp[-4].identifier_ptr), NULL, (yyvsp[-2].declaration_list_ptr), (yyvsp[-1].method_list_ptr));}
#line 1371 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.class_ptr) = new ClassNode((yyvsp[-6].identifier_ptr), (yyvsp[-4].identifier_ptr), (yyvsp[-2].declaration_list_ptr), (yyvsp[-1].method_list_ptr));}
#line 1377 "parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = (yyvsp[-1].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[0].declaration_ptr));}
#line 1383 "parser.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 92 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = new std::list<DeclarationNode*>();}
#line 1389 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "parser.y" /* yacc.c:1646  */
    {std::list<IdentifierNode*>* list = new std::list<IdentifierNode*>(); list->push_back((yyvsp[-1].identifier_ptr)); (yyval.declaration_ptr) = new DeclarationNode((yyvsp[-2].type_ptr), list);}
#line 1395 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "parser.y" /* yacc.c:1646  */
    {(yyval.method_list_ptr) = (yyvsp[0].method_list_ptr); (yyval.method_list_ptr)->push_front((yyvsp[-1].method_ptr));}
#line 1401 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "parser.y" /* yacc.c:1646  */
    {(yyval.method_list_ptr) = new std::list<MethodNode*>();}
#line 1407 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyval.method_ptr) = new MethodNode((yyvsp[-8].identifier_ptr), (yyvsp[-6].parameter_list_ptr), (yyvsp[-3].type_ptr), (yyvsp[-1].methodbody_ptr));}
#line 1413 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 101 "parser.y" /* yacc.c:1646  */
    {(yyval.methodbody_ptr) = new MethodBodyNode((yyvsp[-2].declaration_list_ptr), (yyvsp[-1].statement_list_ptr), (yyvsp[0].returnstatement_ptr));}
#line 1419 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 103 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = (yyvsp[0].parameter_list_ptr);}
#line 1425 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 104 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = new std::list<ParameterNode*>();}
#line 1431 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = (yyvsp[-2].parameter_list_ptr); (yyval.parameter_list_ptr)->push_back((yyvsp[0].parameter_ptr));}
#line 1437 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_list_ptr) = new std::list<ParameterNode*>(); (yyval.parameter_list_ptr)->push_back((yyvsp[0].parameter_ptr));}
#line 1443 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.parameter_ptr) = new ParameterNode((yyvsp[-1].type_ptr), (yyvsp[0].identifier_ptr));}
#line 1449 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new IntegerTypeNode();}
#line 1455 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 112 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new BooleanTypeNode();}
#line 1461 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new ObjectTypeNode((yyvsp[0].identifier_ptr));}
#line 1467 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new NoneNode();}
#line 1473 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = (yyvsp[-1].declaration_list_ptr); (yyval.declaration_list_ptr)->push_back((yyvsp[0].declaration_ptr));}
#line 1479 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_list_ptr) = new std::list<DeclarationNode*>();}
#line 1485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.declaration_ptr) = new DeclarationNode((yyvsp[-1].type_ptr), (yyvsp[0].identifier_list_ptr));}
#line 1491 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyval.identifier_list_ptr) = (yyvsp[0].identifier_list_ptr); (yyval.identifier_list_ptr)->push_front((yyvsp[-2].identifier_ptr));}
#line 1497 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "parser.y" /* yacc.c:1646  */
    {(yyval.identifier_list_ptr) = new std::list<IdentifierNode*>(); (yyval.identifier_list_ptr)->push_front((yyvsp[-1].identifier_ptr));}
#line 1503 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 124 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = (yyvsp[0].statement_list_ptr); (yyval.statement_list_ptr)->push_front((yyvsp[-1].statement_ptr));}
#line 1509 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = new std::list<StatementNode*>();}
#line 1515 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].assignment_ptr);}
#line 1521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = new CallNode((yyvsp[-1].methodcall_ptr));}
#line 1527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].ifelse_ptr);}
#line 1533 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].while_ptr);}
#line 1539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].dowhile_ptr);}
#line 1545 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_ptr) = (yyvsp[0].print_ptr);}
#line 1551 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.assignment_ptr) = new AssignmentNode((yyvsp[-3].identifier_ptr), NULL, (yyvsp[-1].expression_ptr));}
#line 1557 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.assignment_ptr) = new AssignmentNode((yyvsp[-5].identifier_ptr), (yyvsp[-3].identifier_ptr), (yyvsp[-1].expression_ptr));}
#line 1563 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval.ifelse_ptr) = new IfElseNode((yyvsp[-3].expression_ptr), (yyvsp[-1].statement_list_ptr), NULL);}
#line 1569 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.ifelse_ptr) = new IfElseNode((yyvsp[-7].expression_ptr), (yyvsp[-5].statement_list_ptr), (yyvsp[-1].statement_list_ptr));}
#line 1575 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.while_ptr) = new WhileNode((yyvsp[-3].expression_ptr), (yyvsp[-1].statement_list_ptr));}
#line 1581 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.dowhile_ptr) = new DoWhileNode((yyvsp[-6].statement_list_ptr), (yyvsp[-2].expression_ptr));}
#line 1587 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.print_ptr) = new PrintNode((yyvsp[-1].expression_ptr));}
#line 1593 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = (yyvsp[-1].statement_list_ptr); (yyval.statement_list_ptr)->push_back((yyvsp[0].statement_ptr));}
#line 1599 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 147 "parser.y" /* yacc.c:1646  */
    {(yyval.statement_list_ptr) = new std::list<StatementNode*>(); (yyval.statement_list_ptr)->push_back((yyvsp[0].statement_ptr));}
#line 1605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.returnstatement_ptr) = new ReturnStatementNode((yyvsp[-1].expression_ptr));}
#line 1611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.returnstatement_ptr) = NULL;}
#line 1617 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new PlusNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1623 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new MinusNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new TimesNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1635 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new DivideNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1641 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new GreaterNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new GreaterEqualNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 158 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new EqualNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1659 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new AndNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new OrNode((yyvsp[-2].expression_ptr), (yyvsp[0].expression_ptr));}
#line 1671 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 161 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NotNode((yyvsp[0].expression_ptr));}
#line 1677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NegationNode((yyvsp[0].expression_ptr));}
#line 1683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new VariableNode((yyvsp[0].identifier_ptr));}
#line 1689 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new MemberAccessNode((yyvsp[-2].identifier_ptr), (yyvsp[0].identifier_ptr));}
#line 1695 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = (yyvsp[0].methodcall_ptr);}
#line 1701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = (yyvsp[-1].expression_ptr);}
#line 1707 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new IntegerLiteralNode((yyvsp[0].integer_ptr));}
#line 1713 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new BooleanLiteralNode(new IntegerNode(1));}
#line 1719 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new BooleanLiteralNode(new IntegerNode(0));}
#line 1725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NewNode((yyvsp[0].identifier_ptr), NULL);}
#line 1731 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_ptr) = new NewNode((yyvsp[-3].identifier_ptr), (yyvsp[-1].expression_list_ptr));}
#line 1737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcall_ptr) = new MethodCallNode((yyvsp[-3].identifier_ptr), NULL, (yyvsp[-1].expression_list_ptr));}
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.methodcall_ptr) = new MethodCallNode((yyvsp[-5].identifier_ptr), (yyvsp[-3].identifier_ptr), (yyvsp[-1].expression_list_ptr));}
#line 1749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 176 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new IntegerTypeNode();}
#line 1755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new BooleanTypeNode();}
#line 1761 "parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.type_ptr) = new ObjectTypeNode((yyvsp[0].identifier_ptr));}
#line 1767 "parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_list_ptr) = (yyvsp[0].expression_list_ptr);}
#line 1773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_list_ptr) = new std::list<ExpressionNode*>();}
#line 1779 "parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_list_ptr) = (yyvsp[-2].expression_list_ptr); (yyval.expression_list_ptr)->push_back((yyvsp[0].expression_ptr));}
#line 1785 "parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.expression_list_ptr) = new std::list<ExpressionNode*>(); (yyval.expression_list_ptr)->push_back((yyvsp[0].expression_ptr));}
#line 1791 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1795 "parser.cpp" /* yacc.c:1646  */
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
#line 186 "parser.y" /* yacc.c:1906  */


extern int yylineno;

void yyerror(const char *s) {
  fprintf(stderr, "%s at line %d\n", s, yylineno);
  exit(0);
}
