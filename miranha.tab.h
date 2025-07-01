/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MIRANHA_TAB_H_INCLUDED
# define YY_YY_MIRANHA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_FLOAT = 259,                 /* T_FLOAT  */
    T_CHAR = 260,                  /* T_CHAR  */
    T_SCAN = 261,                  /* T_SCAN  */
    T_PRINT = 262,                 /* T_PRINT  */
    T_IF = 263,                    /* T_IF  */
    T_ELSE = 264,                  /* T_ELSE  */
    T_ELSEIF = 265,                /* T_ELSEIF  */
    T_SWITCH = 266,                /* T_SWITCH  */
    T_CASE = 267,                  /* T_CASE  */
    T_DEFAULT = 268,               /* T_DEFAULT  */
    T_CONTINUE = 269,              /* T_CONTINUE  */
    T_BREAK = 270,                 /* T_BREAK  */
    T_WHILE = 271,                 /* T_WHILE  */
    T_FOR = 272,                   /* T_FOR  */
    INT_CONST = 273,               /* INT_CONST  */
    FLOAT_CONST = 274,             /* FLOAT_CONST  */
    CHAR_CONST = 275,              /* CHAR_CONST  */
    STRING_CONST = 276,            /* STRING_CONST  */
    PLUS_OP = 277,                 /* PLUS_OP  */
    MINUS_OP = 278,                /* MINUS_OP  */
    MULT_OP = 279,                 /* MULT_OP  */
    DIV_OP = 280,                  /* DIV_OP  */
    MOD_OP = 281,                  /* MOD_OP  */
    EQ_OP = 282,                   /* EQ_OP  */
    NE_OP = 283,                   /* NE_OP  */
    GE_OP = 284,                   /* GE_OP  */
    LE_OP = 285,                   /* LE_OP  */
    GT_OP = 286,                   /* GT_OP  */
    LT_OP = 287,                   /* LT_OP  */
    AND_OP = 288,                  /* AND_OP  */
    OR_OP = 289,                   /* OR_OP  */
    NOT_OP = 290,                  /* NOT_OP  */
    ASSIGN_OP = 291,               /* ASSIGN_OP  */
    SEMICOLON = 292,               /* SEMICOLON  */
    COLON = 293,                   /* COLON  */
    COMMA = 294,                   /* COMMA  */
    LPAREN = 295,                  /* LPAREN  */
    RPAREN = 296,                  /* RPAREN  */
    LBRACE = 297,                  /* LBRACE  */
    RBRACE = 298,                  /* RBRACE  */
    ID = 299                       /* ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "miranha.y"

    int integer;
    float floating;
    char character;
    char text[256];
    char var[64];

#line 116 "miranha.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MIRANHA_TAB_H_INCLUDED  */
