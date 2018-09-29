/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 43 "query.yacc" /* yacc.c:1909  */

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

#line 126 "y.tab.h" /* yacc.c:1909  */
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
