/* A Bison parser, made by GNU Bison 3.7.5.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    FIN_LINEA = 258,               /* FIN_LINEA  */
    DOS_PUNTOS = 259,              /* DOS_PUNTOS  */
    MAS = 260,                     /* MAS  */
    MENOS = 261,                   /* MENOS  */
    POR = 262,                     /* POR  */
    DIVIDIDO = 263,                /* DIVIDIDO  */
    MOD = 264,                     /* MOD  */
    VERDADERO = 265,               /* VERDADERO  */
    FALSO = 266,                   /* FALSO  */
    MENOR = 267,                   /* MENOR  */
    MAYOR = 268,                   /* MAYOR  */
    MENOR_IGUAL = 269,             /* MENOR_IGUAL  */
    MAYOR_IGUAL = 270,             /* MAYOR_IGUAL  */
    IGUAL = 271,                   /* IGUAL  */
    PARENTESIS_ABRE = 272,         /* PARENTESIS_ABRE  */
    PARENTESIS_CIERRA = 273,       /* PARENTESIS_CIERRA  */
    MIENTRAS = 274,                /* MIENTRAS  */
    HAZ = 275,                     /* HAZ  */
    SI = 276,                      /* SI  */
    COMILLA = 277,                 /* COMILLA  */
    Y = 278,                       /* Y  */
    O = 279,                       /* O  */
    NO = 280,                      /* NO  */
    IMPRIMIR = 281,                /* IMPRIMIR  */
    SINO = 282,                    /* SINO  */
    NUMERO = 283,                  /* NUMERO  */
    TEXTO = 284,                   /* TEXTO  */
    VAR_NUMERO = 285,              /* VAR_NUMERO  */
    VAR_TEXTO = 286,               /* VAR_TEXTO  */
    NOMBRE = 287,                  /* NOMBRE  */
    FIN = 288                      /* FIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define FIN_LINEA 258
#define DOS_PUNTOS 259
#define MAS 260
#define MENOS 261
#define POR 262
#define DIVIDIDO 263
#define MOD 264
#define VERDADERO 265
#define FALSO 266
#define MENOR 267
#define MAYOR 268
#define MENOR_IGUAL 269
#define MAYOR_IGUAL 270
#define IGUAL 271
#define PARENTESIS_ABRE 272
#define PARENTESIS_CIERRA 273
#define MIENTRAS 274
#define HAZ 275
#define SI 276
#define COMILLA 277
#define Y 278
#define O 279
#define NO 280
#define IMPRIMIR 281
#define SINO 282
#define NUMERO 283
#define TEXTO 284
#define VAR_NUMERO 285
#define VAR_TEXTO 286
#define NOMBRE 287
#define FIN 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "chipa.y"

    char* texto;
    int numero;

#line 138 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
