/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "query.yacc" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "query_types.h"

value *create_value(char *name, int type, char is_case_insensitive, value_array *args) {
  value *v = malloc(sizeof(value));
  v->name = name;
  v->value_type = type;
  v->is_case_insensitive = is_case_insensitive;
  v->args = args;
  v->alias = NULL;
  return v;
}

value *create_expression_value(char *operator, size_t size, ...) {
  value *v = malloc(sizeof(value));
  v->name = operator;
  v->alias = NULL;
  v->value_type = VALUE_EXPRESSION;
  v->is_case_insensitive = FALSE;
  v->args = malloc(sizeof(value_array));
  v->args->size = size;
  v->args->elems = malloc(sizeof(value*) * size);
  va_list ap;
  va_start(ap, size);

  int i;
  for (i = 0; i < size; i++) {
    value *x = va_arg(ap, value*);
    v->args->elems[i] = x;
  }
  va_end(ap);
  return v;
}


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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SELECT = 258,
    DELETE = 259,
    FROM = 260,
    WHERE = 261,
    EQUAL = 262,
    GROUP = 263,
    BY = 264,
    LIMIT = 265,
    ORDER = 266,
    ASC = 267,
    DESC = 268,
    MERGE = 269,
    INNER = 270,
    JOIN = 271,
    AS = 272,
    LIST = 273,
    SERIES = 274,
    INTO = 275,
    CONTINUOUS_QUERIES = 276,
    CONTINUOUS_QUERY = 277,
    DROP = 278,
    DROP_SERIES = 279,
    EXPLAIN = 280,
    UNKNOWN = 281,
    INCLUDE = 282,
    SPACES = 283,
    STRING_VALUE = 284,
    INT_VALUE = 285,
    FLOAT_VALUE = 286,
    BOOLEAN_VALUE = 287,
    TABLE_NAME = 288,
    SIMPLE_NAME = 289,
    INTO_NAME = 290,
    REGEX_OP = 291,
    NEGATION_REGEX_OP = 292,
    REGEX_STRING = 293,
    INSENSITIVE_REGEX_STRING = 294,
    DURATION = 295,
    OR = 296,
    AND = 297,
    OPERATION_EQUAL = 298,
    OPERATION_NE = 299,
    OPERATION_GT = 300,
    OPERATION_LT = 301,
    OPERATION_LE = 302,
    OPERATION_GE = 303,
    OPERATION_IN = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 43 "query.yacc" /* yacc.c:355  */

  char                  character;
  char*                 string;
  int                   integer;
  condition*            condition;
  value_array*          value_array;
  value*                v;
  from_clause*          from_clause;
  into_clause*          into_clause;
  query*                query;
  select_query*         select_query;
  delete_query*         delete_query;
  drop_series_query*    drop_series_query;
  drop_query*           drop_query;
  groupby_clause*       groupby_clause;
  table_name_array*     table_name_array;
  struct {
    int limit;
    char ascending;
  } limit_and_order;

#line 220 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (queries *q, void *scanner);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 248 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

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
      56,    57,    52,    50,    55,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   134,   140,   147,   153,   159,   165,   172,
     181,   187,   195,   201,   207,   214,   222,   230,   237,   244,
     257,   271,   277,   284,   289,   294,   299,   305,   310,   318,
     328,   335,   342,   347,   354,   361,   366,   369,   375,   380,
     392,   399,   411,   426,   433,   440,   456,   463,   471,   476,
     481,   486,   492,   497,   502,   512,   517,   527,   532,   538,
     549,   555,   561,   567,   573,   578,   584,   590,   592,   594,
     596,   599,   599,   599,   602,   602,   605,   615,   627,   627,
     627,   630,   636,   642,   649,   655,   661,   666,   672,   674,
     679,   689,   694,   700,   709,   714,   723,   733,   735,   737,
     739,   741,   743
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SELECT", "DELETE", "FROM", "WHERE",
  "EQUAL", "GROUP", "BY", "LIMIT", "ORDER", "ASC", "DESC", "MERGE",
  "INNER", "JOIN", "AS", "LIST", "SERIES", "INTO", "CONTINUOUS_QUERIES",
  "CONTINUOUS_QUERY", "DROP", "DROP_SERIES", "EXPLAIN", "UNKNOWN",
  "INCLUDE", "SPACES", "STRING_VALUE", "INT_VALUE", "FLOAT_VALUE",
  "BOOLEAN_VALUE", "TABLE_NAME", "SIMPLE_NAME", "INTO_NAME", "REGEX_OP",
  "NEGATION_REGEX_OP", "REGEX_STRING", "INSENSITIVE_REGEX_STRING",
  "DURATION", "OR", "AND", "OPERATION_EQUAL", "OPERATION_NE",
  "OPERATION_GT", "OPERATION_LT", "OPERATION_LE", "OPERATION_GE",
  "OPERATION_IN", "'+'", "'-'", "'*'", "'/'", "';'", "','", "'('", "')'",
  "$accept", "ALL_QUERIES", "QUERY", "DROP_QUERY", "DELETE_QUERY",
  "DROP_SERIES_QUERY", "EXPLAIN_QUERY", "SELECT_QUERY",
  "LIMIT_AND_ORDER_CLAUSES", "ORDER_CLAUSE", "LIMIT_CLAUSE", "VALUES",
  "GROUP_BY_CLAUSE", "INTO_CLAUSE", "COLUMN_NAMES", "ALIAS_CLAUSE",
  "FROM_CLAUSE", "WHERE_CLAUSE", "FUNCTION_CALL", "VALUE", "TABLE_VALUE",
  "SIMPLE_TABLE_VALUE", "SIMPLE_TABLE_VALUES", "INTO_VALUE",
  "DURATION_VALUE", "SIMPLE_NAME_VALUE", "WILDCARD", "INTO_NAME_VALUE",
  "TABLE_NAME_VALUE", "REGEX_VALUE", "BOOL_EXPRESSION", "CONDITION",
  "BOOL_OPERATION", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      43,    45,    42,    47,    59,    44,    40,    41
};
# endif

#define YYPACT_NINF -123

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-123)))

#define YYTABLE_NINF -77

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      47,    83,     6,    45,    20,    -4,    13,     8,   -31,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -30,
    -123,    -6,  -123,    83,    -1,     6,    31,    78,  -123,  -123,
    -123,  -123,   127,    52,    -7,  -123,    33,  -123,  -123,  -123,
    -123,  -123,  -123,    47,    70,  -123,  -123,  -123,   162,    83,
     112,    35,    83,    83,    83,    83,    27,    37,  -123,  -123,
    -123,   -12,    34,    -2,     4,  -123,   123,  -123,    69,   106,
    -123,  -123,  -123,    89,    94,    78,   110,    52,   132,  -123,
      25,    25,  -123,  -123,    23,    23,    -4,    -4,   152,    -4,
     123,   158,  -123,    64,  -123,   142,  -123,   137,    83,   114,
     114,  -123,    92,   115,    93,   116,  -123,  -123,   164,  -123,
     140,     3,    98,    98,  -123,  -123,  -123,  -123,  -123,  -123,
     122,    83,   123,   123,  -123,  -123,   -27,   151,   146,   176,
     172,   187,   176,  -123,  -123,  -123,  -123,    -4,  -123,  -123,
    -123,    83,    78,   157,  -123,   -30,  -123,  -123,  -123,  -123,
      40,  -123,  -123,  -123,  -123,   183,   107,  -123,   182,  -123,
    -123,  -123,  -123,  -123,  -123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     7,
       6,    12,    14,     5,    52,    53,    55,    57,    85,    82,
      81,     0,    83,     0,    36,     0,    63,    28,    58,    60,
      61,    62,     0,    49,    10,    13,     0,    82,    17,    74,
      75,    18,     1,     3,     0,    54,    56,    59,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      39,    41,    40,    71,    72,    73,     0,    16,     0,    11,
      15,     4,    50,     0,    64,    29,     0,    49,    32,    66,
      69,    70,    67,    68,     0,     0,     0,     0,     0,     0,
       0,    88,    93,    48,     8,     0,    51,     0,     0,    25,
      25,    76,     0,     0,     0,     0,    42,    37,     0,    77,
      88,     0,     0,     0,    97,    98,    99,   100,   102,   101,
       0,     0,     0,     0,     9,    65,    30,     0,     0,    35,
      27,    25,    35,    43,    44,    46,    47,     0,    94,    91,
      92,     0,    89,    96,    95,     0,    31,    26,    23,    24,
       0,    19,    21,    22,    20,    38,     0,    84,    33,    78,
      80,    79,    45,    90,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,   174,  -123,  -123,  -123,  -123,  -123,   212,   120,    90,
      95,   -43,   144,    91,  -123,    71,   199,   -28,  -122,   -14,
    -123,     5,    84,  -123,   206,    -5,  -123,  -123,     1,   -17,
    -123,   -76,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,   129,   130,
     131,    24,    77,   151,    25,    88,    33,    67,    26,    27,
      60,   101,    62,   158,    28,    29,    30,   160,    31,    65,
      92,    93,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    73,    86,   -38,   146,    87,    40,   145,    42,    48,
      38,    32,   -74,   -74,   111,   -74,     1,    69,   -75,   -75,
      68,   -75,    78,    43,    45,    46,    44,    63,    49,    18,
      37,    58,    59,    64,    20,    75,   164,    61,    80,    81,
      82,    83,    36,   -76,   122,   123,   143,   144,    51,    99,
       1,     2,    91,   -74,    49,   126,    18,    37,    66,   -75,
     138,    58,    59,    70,    34,     3,    35,   103,   105,    79,
       4,     5,     6,    18,    37,   157,   110,    54,    55,    39,
      39,    39,    39,    84,    39,    40,    40,    40,    40,    89,
      40,   106,   107,    85,   109,   139,   140,    94,   156,    14,
      15,    16,    17,    18,    19,   122,   123,   142,    91,    91,
      20,    97,    14,    15,    16,    17,    18,    19,    66,    98,
      76,    21,    22,    20,   127,   128,    23,    72,    52,    53,
      54,    55,    39,    95,    21,    22,    58,    59,    40,    23,
      76,    56,   155,    57,    49,   159,    96,    89,    89,   133,
     135,   161,    14,    15,    16,    17,    18,    19,   148,   149,
      18,    37,    49,    20,   163,    58,    59,   108,   102,   104,
     124,   125,   134,   136,    21,    22,   112,   113,   141,    90,
     137,   147,   127,   114,   115,   116,   117,   118,   119,   120,
      52,    53,    54,    55,   112,   113,   150,    74,   128,   123,
      87,   114,   115,   116,   117,   118,   119,   120,    52,    53,
      54,    55,    52,    53,    54,    55,   145,    71,    41,    74,
     132,   153,   100,   154,    50,   152,   162,    47
};

static const yytype_uint8 yycheck[] =
{
       5,    44,    14,    15,   126,    17,     5,    34,     0,    23,
       5,     5,    14,    15,    90,    17,     3,    34,    14,    15,
      27,    17,    50,    54,    30,    31,    56,    32,    55,    33,
      34,    38,    39,    32,    40,    49,   158,    32,    52,    53,
      54,    55,    22,    55,    41,    42,   122,   123,    17,    77,
       3,     4,    66,    55,    55,    98,    33,    34,     6,    55,
      57,    38,    39,    30,    19,    18,    21,    84,    85,    34,
      23,    24,    25,    33,    34,    35,    90,    52,    53,    84,
      85,    86,    87,    56,    89,    84,    85,    86,    87,    55,
      89,    86,    87,    56,    89,   112,   113,    28,   141,    29,
      30,    31,    32,    33,    34,    41,    42,   121,   122,   123,
      40,    17,    29,    30,    31,    32,    33,    34,     6,     9,
       8,    51,    52,    40,    10,    11,    56,    57,    50,    51,
      52,    53,   137,    27,    51,    52,    38,    39,   137,    56,
       8,    14,   137,    16,    55,   150,    57,    55,    55,    57,
      57,   150,    29,    30,    31,    32,    33,    34,    12,    13,
      33,    34,    55,    40,    57,    38,    39,    15,    84,    85,
      28,    34,    57,    57,    51,    52,    36,    37,    56,    56,
      16,    30,    10,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    36,    37,    20,    57,    11,    42,
      17,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    50,    51,    52,    53,    34,    43,     6,    57,
     100,   131,    78,   132,    25,   130,   155,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    18,    23,    24,    25,    59,    60,    61,
      62,    63,    64,    65,    29,    30,    31,    32,    33,    34,
      40,    51,    52,    56,    69,    72,    76,    77,    82,    83,
      84,    86,     5,    74,    19,    21,    22,    34,    79,    83,
      86,    65,     0,    54,    56,    30,    31,    82,    77,    55,
      74,    17,    50,    51,    52,    53,    14,    16,    38,    39,
      78,    79,    80,    83,    86,    87,     6,    75,    27,    87,
      30,    59,    57,    69,    57,    77,     8,    70,    75,    34,
      77,    77,    77,    77,    56,    56,    14,    17,    73,    55,
      56,    77,    88,    89,    28,    27,    57,    17,     9,    75,
      70,    79,    80,    87,    80,    87,    79,    79,    15,    79,
      77,    89,    36,    37,    43,    44,    45,    46,    47,    48,
      49,    90,    41,    42,    28,    34,    69,    10,    11,    66,
      67,    68,    66,    57,    57,    57,    57,    16,    57,    87,
      87,    56,    77,    89,    89,    34,    76,    30,    12,    13,
      20,    71,    68,    67,    71,    79,    69,    35,    81,    83,
      85,    86,    73,    57,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    62,    63,    64,    65,
      65,    66,    66,    67,    67,    67,    68,    68,    69,    69,
      70,    70,    70,    71,    71,    71,    72,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    79,    79,    80,    80,    81,    81,
      81,    82,    83,    84,    85,    86,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     1,     1,     1,     4,     5,
       2,     3,     1,     2,     1,     3,     3,     2,     2,     7,
       7,     2,     2,     2,     2,     0,     2,     0,     1,     3,
       3,     4,     0,     2,     3,     0,     1,     2,     0,     2,
       2,     2,     4,     5,     5,     7,     5,     5,     2,     0,
       3,     4,     1,     1,     2,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     3,     5,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     3,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     1,     1
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
      yyerror (&yylloc, q, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, q, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, queries *q, void *scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (q);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, queries *q, void *scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, q, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, queries *q, void *scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , q, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, q, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, queries *q, void *scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (q);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 29: /* STRING_VALUE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1290 "y.tab.c" /* yacc.c:1257  */
        break;

    case 30: /* INT_VALUE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1296 "y.tab.c" /* yacc.c:1257  */
        break;

    case 31: /* FLOAT_VALUE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1302 "y.tab.c" /* yacc.c:1257  */
        break;

    case 32: /* BOOLEAN_VALUE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1308 "y.tab.c" /* yacc.c:1257  */
        break;

    case 33: /* TABLE_NAME  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1314 "y.tab.c" /* yacc.c:1257  */
        break;

    case 34: /* SIMPLE_NAME  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1320 "y.tab.c" /* yacc.c:1257  */
        break;

    case 35: /* INTO_NAME  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1326 "y.tab.c" /* yacc.c:1257  */
        break;

    case 36: /* REGEX_OP  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1332 "y.tab.c" /* yacc.c:1257  */
        break;

    case 37: /* NEGATION_REGEX_OP  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1338 "y.tab.c" /* yacc.c:1257  */
        break;

    case 38: /* REGEX_STRING  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1344 "y.tab.c" /* yacc.c:1257  */
        break;

    case 39: /* INSENSITIVE_REGEX_STRING  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1350 "y.tab.c" /* yacc.c:1257  */
        break;

    case 40: /* DURATION  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1356 "y.tab.c" /* yacc.c:1257  */
        break;

    case 43: /* OPERATION_EQUAL  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1362 "y.tab.c" /* yacc.c:1257  */
        break;

    case 44: /* OPERATION_NE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1368 "y.tab.c" /* yacc.c:1257  */
        break;

    case 45: /* OPERATION_GT  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1374 "y.tab.c" /* yacc.c:1257  */
        break;

    case 46: /* OPERATION_LT  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1380 "y.tab.c" /* yacc.c:1257  */
        break;

    case 47: /* OPERATION_LE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1386 "y.tab.c" /* yacc.c:1257  */
        break;

    case 48: /* OPERATION_GE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1392 "y.tab.c" /* yacc.c:1257  */
        break;

    case 49: /* OPERATION_IN  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1398 "y.tab.c" /* yacc.c:1257  */
        break;

    case 60: /* QUERY  */
#line 123 "query.yacc" /* yacc.c:1257  */
      { close_query(((*yyvaluep).query)); free(((*yyvaluep).query)); }
#line 1404 "y.tab.c" /* yacc.c:1257  */
        break;

    case 69: /* VALUES  */
#line 121 "query.yacc" /* yacc.c:1257  */
      { if (((*yyvaluep).value_array)) free_value_array(((*yyvaluep).value_array)); }
#line 1410 "y.tab.c" /* yacc.c:1257  */
        break;

    case 70: /* GROUP_BY_CLAUSE  */
#line 122 "query.yacc" /* yacc.c:1257  */
      { free_groupby_clause(((*yyvaluep).groupby_clause)); }
#line 1416 "y.tab.c" /* yacc.c:1257  */
        break;

    case 72: /* COLUMN_NAMES  */
#line 121 "query.yacc" /* yacc.c:1257  */
      { if (((*yyvaluep).value_array)) free_value_array(((*yyvaluep).value_array)); }
#line 1422 "y.tab.c" /* yacc.c:1257  */
        break;

    case 73: /* ALIAS_CLAUSE  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1428 "y.tab.c" /* yacc.c:1257  */
        break;

    case 74: /* FROM_CLAUSE  */
#line 117 "query.yacc" /* yacc.c:1257  */
      { free_from_clause(((*yyvaluep).from_clause)); }
#line 1434 "y.tab.c" /* yacc.c:1257  */
        break;

    case 75: /* WHERE_CLAUSE  */
#line 118 "query.yacc" /* yacc.c:1257  */
      { if (((*yyvaluep).condition)) free_condition(((*yyvaluep).condition)); }
#line 1440 "y.tab.c" /* yacc.c:1257  */
        break;

    case 76: /* FUNCTION_CALL  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1446 "y.tab.c" /* yacc.c:1257  */
        break;

    case 77: /* VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1452 "y.tab.c" /* yacc.c:1257  */
        break;

    case 78: /* TABLE_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1458 "y.tab.c" /* yacc.c:1257  */
        break;

    case 79: /* SIMPLE_TABLE_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1464 "y.tab.c" /* yacc.c:1257  */
        break;

    case 81: /* INTO_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1470 "y.tab.c" /* yacc.c:1257  */
        break;

    case 82: /* DURATION_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1476 "y.tab.c" /* yacc.c:1257  */
        break;

    case 83: /* SIMPLE_NAME_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1482 "y.tab.c" /* yacc.c:1257  */
        break;

    case 84: /* WILDCARD  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1488 "y.tab.c" /* yacc.c:1257  */
        break;

    case 85: /* INTO_NAME_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1494 "y.tab.c" /* yacc.c:1257  */
        break;

    case 86: /* TABLE_NAME_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1500 "y.tab.c" /* yacc.c:1257  */
        break;

    case 87: /* REGEX_VALUE  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1506 "y.tab.c" /* yacc.c:1257  */
        break;

    case 88: /* BOOL_EXPRESSION  */
#line 116 "query.yacc" /* yacc.c:1257  */
      { free_value(((*yyvaluep).v)); }
#line 1512 "y.tab.c" /* yacc.c:1257  */
        break;

    case 89: /* CONDITION  */
#line 118 "query.yacc" /* yacc.c:1257  */
      { if (((*yyvaluep).condition)) free_condition(((*yyvaluep).condition)); }
#line 1518 "y.tab.c" /* yacc.c:1257  */
        break;

    case 90: /* BOOL_OPERATION  */
#line 119 "query.yacc" /* yacc.c:1257  */
      { free(((*yyvaluep).string)); }
#line 1524 "y.tab.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (queries *q, void *scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 129 "query.yacc" /* yacc.c:1646  */
    {
          q->qs = realloc(q->qs, (q->size + 1) * sizeof(query));
          q->qs[q->size++] = (yyvsp[0].query);
        }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 135 "query.yacc" /* yacc.c:1646  */
    {
          q->qs = realloc(q->qs, (q->size + 1) * sizeof(query));
          q->qs[q->size++] = (yyvsp[-1].query);
        }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 141 "query.yacc" /* yacc.c:1646  */
    {
          q->qs = realloc(q->qs, (q->size + 1) * sizeof(query));
          q->qs[q->size++] = (yyvsp[-2].query);
        }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 148 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->select_query = (yyvsp[0].select_query);
        }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 154 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->delete_query = (yyvsp[0].delete_query);
        }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 160 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->drop_query = (yyvsp[0].drop_query);
        }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 166 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->list_series_query = calloc(1, sizeof(list_series_query));
          (yyval.query)->list_series_query->include_spaces = TRUE;
        }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 173 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->list_series_query = calloc(1, sizeof(list_series_query));
          (yyval.query)->list_series_query->has_regex = TRUE;
          (yyval.query)->list_series_query->include_spaces = TRUE;
          (yyval.query)->list_series_query->regex = (yyvsp[-2].v);
        }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 182 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->list_series_query = calloc(1, sizeof(list_series_query));
        }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 188 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->list_series_query = calloc(1, sizeof(list_series_query));
          (yyval.query)->list_series_query->has_regex = TRUE;
          (yyval.query)->list_series_query->regex = (yyvsp[0].v);
        }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 196 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->drop_series_query = (yyvsp[0].drop_series_query);
        }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 202 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->list_continuous_queries_query = TRUE;
        }
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 208 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.query) = calloc(1, sizeof(query));
          (yyval.query)->select_query = (yyvsp[0].select_query);
        }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 215 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.drop_query) = calloc(1, sizeof(drop_query));
          (yyval.drop_query)->id = atoi((yyvsp[0].string));
          free((yyvsp[0].string));
        }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 223 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.delete_query) = calloc(1, sizeof(delete_query));
          (yyval.delete_query)->from_clause = (yyvsp[-1].from_clause);
          (yyval.delete_query)->where_condition = (yyvsp[0].condition);
        }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 231 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.drop_series_query) = malloc(sizeof(drop_series_query));
          (yyval.drop_series_query)->name = (yyvsp[0].v);
        }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 238 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.select_query) = (yyvsp[0].select_query);
          (yyval.select_query)->explain = TRUE;
        }
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 245 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.select_query) = calloc(1, sizeof(select_query));
          (yyval.select_query)->c = (yyvsp[-5].value_array);
          (yyval.select_query)->from_clause = (yyvsp[-4].from_clause);
          (yyval.select_query)->group_by = (yyvsp[-3].groupby_clause);
          (yyval.select_query)->where_condition = (yyvsp[-2].condition);
          (yyval.select_query)->limit = (yyvsp[-1].limit_and_order).limit;
          (yyval.select_query)->ascending = (yyvsp[-1].limit_and_order).ascending;
          (yyval.select_query)->into_clause = (yyvsp[0].into_clause);
          (yyval.select_query)->explain = FALSE;
        }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 258 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.select_query) = calloc(1, sizeof(select_query));
          (yyval.select_query)->c = (yyvsp[-5].value_array);
          (yyval.select_query)->from_clause = (yyvsp[-4].from_clause);
          (yyval.select_query)->where_condition = (yyvsp[-3].condition);
          (yyval.select_query)->group_by = (yyvsp[-2].groupby_clause);
          (yyval.select_query)->limit = (yyvsp[-1].limit_and_order).limit;
          (yyval.select_query)->ascending = (yyvsp[-1].limit_and_order).ascending;
          (yyval.select_query)->into_clause = (yyvsp[0].into_clause);
          (yyval.select_query)->explain = FALSE;
        }
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 272 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.limit_and_order).limit = (yyvsp[0].integer);
          (yyval.limit_and_order).ascending = (yyvsp[-1].character);
        }
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 278 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.limit_and_order).limit = (yyvsp[-1].integer);
          (yyval.limit_and_order).ascending = (yyvsp[0].character);
        }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 285 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.character) = TRUE;
        }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 290 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.character) = FALSE;
        }
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 294 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.character) = FALSE;
        }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 300 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.integer) = atoi((yyvsp[0].string));
          free((yyvsp[0].string));
        }
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 305 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.integer) = -1;
        }
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 311 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.value_array) = malloc(sizeof(value_array));
          (yyval.value_array)->size = 1;
          (yyval.value_array)->elems = malloc(sizeof(value*));
          (yyval.value_array)->elems[0] = (yyvsp[0].v);
        }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 319 "query.yacc" /* yacc.c:1646  */
    {
          size_t new_size = (yyvsp[-2].value_array)->size + 1;
          (yyvsp[-2].value_array)->elems = realloc((yyval.value_array)->elems, sizeof(value*) * new_size);
          (yyvsp[-2].value_array)->elems[(yyvsp[-2].value_array)->size] = (yyvsp[0].v);
          (yyvsp[-2].value_array)->size = new_size;
          (yyval.value_array) = (yyvsp[-2].value_array);
        }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 329 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.groupby_clause) = malloc(sizeof(groupby_clause));
          (yyval.groupby_clause)->elems = (yyvsp[0].value_array);
          (yyval.groupby_clause)->fill_function = NULL;
        }
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 336 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.groupby_clause) = malloc(sizeof(groupby_clause));
          (yyval.groupby_clause)->elems = (yyvsp[-1].value_array);
          (yyval.groupby_clause)->fill_function = (yyvsp[0].v);
        }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 342 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.groupby_clause) = NULL;
        }
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 348 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.into_clause) = malloc(sizeof(into_clause));
          (yyval.into_clause)->target = (yyvsp[0].v);
          (yyval.into_clause)->backfill_function = NULL;
        }
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 355 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.into_clause) = malloc(sizeof(into_clause));
          (yyval.into_clause)->target = (yyvsp[-1].v);
          (yyval.into_clause)->backfill_function = (yyvsp[0].v);
        }
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 361 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.into_clause) = NULL;
        }
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 370 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.string) = (yyvsp[0].v)->name;
          free((yyvsp[0].v));
        }
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 375 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.string) = NULL;
        }
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 381 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->names = malloc(sizeof(table_name_array));
          (yyval.from_clause)->names->elems = malloc(sizeof(table_name*));
          (yyval.from_clause)->names->size = 1;
          (yyval.from_clause)->names->elems[0] = malloc(sizeof(table_name));
          (yyval.from_clause)->names->elems[0]->name = (yyvsp[0].v);
          (yyval.from_clause)->names->elems[0]->alias = NULL;
          (yyval.from_clause)->from_clause_type = FROM_ARRAY;
        }
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 393 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->names = (yyvsp[0].table_name_array);
          (yyval.from_clause)->from_clause_type = FROM_ARRAY;
        }
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 400 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->names = malloc(sizeof(table_name_array));
          (yyval.from_clause)->names->elems = malloc(sizeof(table_name*));
          (yyval.from_clause)->names->size = 1;
          (yyval.from_clause)->names->elems[0] = malloc(sizeof(table_name));
          (yyval.from_clause)->names->elems[0]->name = (yyvsp[0].v);
          (yyval.from_clause)->names->elems[0]->alias = NULL;
          (yyval.from_clause)->from_clause_type = FROM_ARRAY;
        }
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 412 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->names = malloc(sizeof(table_name_array));
          (yyval.from_clause)->names->elems = malloc(2 * sizeof(table_name*));
          (yyval.from_clause)->names->size = 2;
          (yyval.from_clause)->names->elems[0] = malloc(sizeof(table_name));
          (yyval.from_clause)->names->elems[0]->name = (yyvsp[-2].v);
          (yyval.from_clause)->names->elems[0]->alias = NULL;
          (yyval.from_clause)->names->elems[1] = malloc(sizeof(table_name));
          (yyval.from_clause)->names->elems[1]->name = (yyvsp[0].v);
          (yyval.from_clause)->names->elems[1]->alias = NULL;
          (yyval.from_clause)->from_clause_type = FROM_MERGE;
        }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 427 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->names = (yyvsp[-1].table_name_array);
          (yyval.from_clause)->from_clause_type = FROM_MERGE;
        }
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 434 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->from_clause_type = FROM_MERGE_REGEX;
          (yyval.from_clause)->regex_value = (yyvsp[-1].v);
        }
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 441 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->regex_value = NULL;
          (yyval.from_clause)->names = malloc(sizeof(table_name_array));
          (yyval.from_clause)->names->elems = malloc(2 * sizeof(value*));
          (yyval.from_clause)->names->size = 2;
          (yyval.from_clause)->names->elems[0] = malloc(sizeof(table_name));
          (yyval.from_clause)->names->elems[0]->name = (yyvsp[-5].v);
          (yyval.from_clause)->names->elems[0]->alias = (yyvsp[-4].string);
          (yyval.from_clause)->names->elems[1] = malloc(sizeof(table_name));
          (yyval.from_clause)->names->elems[1]->name = (yyvsp[-1].v);
          (yyval.from_clause)->names->elems[1]->alias = (yyvsp[0].string);
          (yyval.from_clause)->from_clause_type = FROM_JOIN;
        }
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 457 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->names = (yyvsp[-1].table_name_array);
          (yyval.from_clause)->from_clause_type = FROM_JOIN;
        }
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 464 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.from_clause) = calloc(1, sizeof(from_clause));
          (yyval.from_clause)->from_clause_type = FROM_JOIN_REGEX;
          (yyval.from_clause)->regex_value = (yyvsp[-1].v);
        }
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 472 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.condition) = (yyvsp[0].condition);
        }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 476 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.condition) = NULL;
        }
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 482 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[-2].string), VALUE_FUNCTION_CALL, FALSE, NULL);
        }
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 487 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[-3].string), VALUE_FUNCTION_CALL, FALSE, (yyvsp[-1].value_array));
        }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 493 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_STRING, FALSE, NULL);
        }
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 498 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_INT, FALSE, NULL);
        }
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 503 "query.yacc" /* yacc.c:1646  */
    {
          size_t len = strlen((yyvsp[0].string)) + 2;
          char *new_value = malloc(len);
          new_value[0] = '-';
          strncpy(new_value+1, (yyvsp[0].string), len-1);
          free((yyvsp[0].string));
          (yyval.v) = create_value(new_value, VALUE_INT, FALSE, NULL);
        }
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 513 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_FLOAT, FALSE, NULL);
        }
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 518 "query.yacc" /* yacc.c:1646  */
    {
          size_t len = strlen((yyvsp[0].string)) + 2;
          char *new_value = malloc(len);
          new_value[0] = '-';
          strncpy(new_value+1, (yyvsp[0].string), len-1);
          free((yyvsp[0].string));
          (yyval.v) = create_value(new_value, VALUE_FLOAT, FALSE, NULL);
        }
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 528 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_BOOLEAN, FALSE, NULL);
        }
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 533 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[0].v);
          (yyval.v)->alias = NULL;
        }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 539 "query.yacc" /* yacc.c:1646  */
    {
          char *name = calloc(1, strlen((yyvsp[0].v)->name) + 2);
          strcat(name, "-");
          strcat(name, (yyvsp[0].v)->name);
          free((yyvsp[0].v)->name);
          (yyvsp[0].v)->name = name;
          (yyval.v) = (yyvsp[0].v);
          (yyval.v)->alias = NULL;
        }
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 550 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[0].v);
          (yyval.v)->alias = NULL;
        }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 556 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[0].v);
          (yyval.v)->alias = NULL;
        }
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 562 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[0].v);
          (yyval.v)->alias = NULL;
        }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 568 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[0].v);
          (yyval.v)->alias = NULL;
        }
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 574 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[-1].v);
        }
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 579 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[-3].v);
          (yyval.v)->alias = (yyvsp[0].string);
        }
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 585 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = (yyvsp[-2].v);
          (yyval.v)->alias = (yyvsp[0].string);
        }
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 590 "query.yacc" /* yacc.c:1646  */
    { (yyval.v) = create_expression_value(strdup("*"), 2, (yyvsp[-2].v), (yyvsp[0].v)); }
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 592 "query.yacc" /* yacc.c:1646  */
    { (yyval.v) = create_expression_value(strdup("/"), 2, (yyvsp[-2].v), (yyvsp[0].v)); }
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 594 "query.yacc" /* yacc.c:1646  */
    { (yyval.v) = create_expression_value(strdup("+"), 2, (yyvsp[-2].v), (yyvsp[0].v)); }
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 596 "query.yacc" /* yacc.c:1646  */
    { (yyval.v) = create_expression_value(strdup("-"), 2, (yyvsp[-2].v), (yyvsp[0].v)); }
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 606 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.table_name_array) = malloc(sizeof(table_name_array));
          (yyval.table_name_array)->size = 1;
          (yyval.table_name_array)->elems = malloc(sizeof(table_name*));
          (yyval.table_name_array)->elems[0] = malloc(sizeof(table_name));
          (yyval.table_name_array)->elems[0]->name = (yyvsp[0].v);
          (yyval.table_name_array)->elems[0]->alias = NULL;
        }
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 616 "query.yacc" /* yacc.c:1646  */
    {
          size_t new_size = (yyvsp[-2].table_name_array)->size + 1;
          (yyvsp[-2].table_name_array)->elems = realloc((yyval.table_name_array)->elems, sizeof(table_name*) * new_size);
          (yyvsp[-2].table_name_array)->elems[(yyvsp[-2].table_name_array)->size] = malloc(sizeof(table_name));
          (yyvsp[-2].table_name_array)->elems[(yyvsp[-2].table_name_array)->size]->name = (yyvsp[0].v);
          (yyvsp[-2].table_name_array)->elems[(yyvsp[-2].table_name_array)->size]->alias = NULL;
          (yyvsp[-2].table_name_array)->size = new_size;
          (yyval.table_name_array) = (yyvsp[-2].table_name_array);
        }
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 631 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_DURATION, FALSE, NULL);
        }
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 637 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_SIMPLE_NAME, FALSE, NULL);
        }
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 643 "query.yacc" /* yacc.c:1646  */
    {
          char *name = strdup("*");
          (yyval.v) = create_value(name, VALUE_WILDCARD, FALSE, NULL);
        }
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 650 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_INTO_NAME, FALSE, NULL);
        }
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 656 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_TABLE_NAME, FALSE, NULL);
        }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 662 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_REGEX, FALSE, NULL);
        }
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 667 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_value((yyvsp[0].string), VALUE_REGEX, TRUE, NULL);
        }
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 675 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_expression_value((yyvsp[-1].string), 2, (yyvsp[-2].v), (yyvsp[0].v));
        }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 680 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_expression_value((yyvsp[-3].string), 1, (yyvsp[-4].v));
          (yyval.v)->args->elems = realloc((yyval.v)->args->elems, sizeof(value*) * ((yyvsp[-1].value_array)->size + 1));
          memcpy((yyval.v)->args->elems + 1, (yyvsp[-1].value_array)->elems, (yyvsp[-1].value_array)->size * sizeof(value*));
          (yyval.v)->args->size = (yyvsp[-1].value_array)->size + 1;
          free((yyvsp[-1].value_array)->elems);
          free((yyvsp[-1].value_array));
        }
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 690 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_expression_value((yyvsp[-1].string), 2, (yyvsp[-2].v), (yyvsp[0].v));
        }
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 695 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.v) = create_expression_value((yyvsp[-1].string), 2, (yyvsp[-2].v), (yyvsp[0].v));
        }
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 701 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.condition) = malloc(sizeof(condition));
          (yyval.condition)->is_bool_expression = TRUE;
          (yyval.condition)->left = (yyvsp[0].v);
          (yyval.condition)->op = NULL;
          (yyval.condition)->right = NULL;
        }
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 710 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.condition) = (yyvsp[-1].condition);
        }
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 715 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.condition) = malloc(sizeof(condition));
          (yyval.condition)->is_bool_expression = FALSE;
          (yyval.condition)->left = (yyvsp[-2].condition);
          (yyval.condition)->op = "AND";
          (yyval.condition)->right = (yyvsp[0].condition);
        }
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 724 "query.yacc" /* yacc.c:1646  */
    {
          (yyval.condition) = malloc(sizeof(condition));
          (yyval.condition)->is_bool_expression = FALSE;
          (yyval.condition)->left = (yyvsp[-2].condition);
          (yyval.condition)->op = "OR";
          (yyval.condition)->right = (yyvsp[0].condition);
        }
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2645 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, q, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, q, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, q, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, q, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, q, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, q, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, q, scanner);
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
#line 745 "query.yacc" /* yacc.c:1906  */

void *yy_scan_string(char *, void *);
void yy_delete_buffer(void *, void *);

queries
parse_query(char *const query_s)
{
  queries q = {0, NULL};
  void *scanner;
  yylex_init(&scanner);
#ifdef DEBUG
  yydebug = 1;
  yyset_debug(1, scanner);
#endif
  void *buffer = yy_scan_string(query_s, scanner);
  yyparse (&q, scanner);
  yy_delete_buffer(buffer, scanner);
  yylex_destroy(scanner);
  return q;
}

int yyerror(YYLTYPE *locp, queries *q, void *s, char *err) {
  q->error = malloc(sizeof(error));
  q->error->err = strdup(err);
  q->error->first_line = locp->first_line;
  q->error->first_column = locp->first_column;
  q->error->last_line = locp->last_line;
  q->error->last_column = locp->last_column;
}
