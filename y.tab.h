/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     L_STRING = 259,
     OP_GT = 260,
     OP_LT = 261,
     PIPE = 262,
     COLON = 263,
     SEMICOLON = 264,
     INCLUD_OPEN = 265,
     INCLUD_CLOSE = 266,
     L_TOKEN = 267,
     L_UNION = 268,
     C_BRACKET_LEFT = 269,
     C_BRACKET_RIGHT = 270,
     SEPARATOR = 271,
     L_TYPE = 272
   };
#endif
/* Tokens.  */
#define ID 258
#define L_STRING 259
#define OP_GT 260
#define OP_LT 261
#define PIPE 262
#define COLON 263
#define SEMICOLON 264
#define INCLUD_OPEN 265
#define INCLUD_CLOSE 266
#define L_TOKEN 267
#define L_UNION 268
#define C_BRACKET_LEFT 269
#define C_BRACKET_RIGHT 270
#define SEPARATOR 271
#define L_TYPE 272




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 55 "sintatico.y"
{
  int64_t integer;
  std: string  strg;
}
/* Line 1529 of yacc.c.  */
#line 88 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

