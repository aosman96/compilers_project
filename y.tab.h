/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
     TYPE_INT = 258,
     TYPE_BOOL = 259,
     TYPE_CHAR = 260,
     TYPE_FLOAT = 261,
     TYPE_CONSTANT = 262,
     TYPE_STRING = 263,
     KEYWORD_IF = 264,
     KEYWORD_ELSE = 265,
     KEYWORD_WHILE = 266,
     KEYWORD_DO = 267,
     KEYWORD_SWITCH = 268,
     KEYWORD_CASE = 269,
     KEYWORD_BREAK = 270,
     KEYWORD_CONTINUE = 271,
     KEYWORD_FOR = 272,
     IDENTIFIER = 273,
     OPERATOR_PLUS = 274,
     OPERATOR_MINUS = 275,
     OPERATOR_MULTIPLY = 276,
     OPERATOR_DIVIDE = 277,
     OPERATOR_ASSIGNMENT = 278,
     LOGIC_AND = 279,
     LOGIC_OR = 280,
     LOGIC_NOT = 281,
     RELATION_EQUALS = 282,
     RELATION_NOTEQUAL = 283,
     RELATION_LESSER = 284,
     RELATION_GREATER = 285,
     RELATION_LESSEREQUAL = 286,
     RELATION_GREATEREQUAL = 287,
     SCOPE_BRACEOPEN = 288,
     SCOPE_BRACECLOSE = 289,
     ARGUMENT_OPENBRACKET = 290,
     ARGUMENT_CLOSEBRACKET = 291,
     SEMICOLON = 292,
     VALUE_INT = 293,
     VALUE_FLOAT = 294,
     VALUE_BOOL = 295,
     VALUE_CHAR = 296,
     COLON = 297,
     KEYWORD_DEFAULT = 298
   };
#endif
/* Tokens.  */
#define TYPE_INT 258
#define TYPE_BOOL 259
#define TYPE_CHAR 260
#define TYPE_FLOAT 261
#define TYPE_CONSTANT 262
#define TYPE_STRING 263
#define KEYWORD_IF 264
#define KEYWORD_ELSE 265
#define KEYWORD_WHILE 266
#define KEYWORD_DO 267
#define KEYWORD_SWITCH 268
#define KEYWORD_CASE 269
#define KEYWORD_BREAK 270
#define KEYWORD_CONTINUE 271
#define KEYWORD_FOR 272
#define IDENTIFIER 273
#define OPERATOR_PLUS 274
#define OPERATOR_MINUS 275
#define OPERATOR_MULTIPLY 276
#define OPERATOR_DIVIDE 277
#define OPERATOR_ASSIGNMENT 278
#define LOGIC_AND 279
#define LOGIC_OR 280
#define LOGIC_NOT 281
#define RELATION_EQUALS 282
#define RELATION_NOTEQUAL 283
#define RELATION_LESSER 284
#define RELATION_GREATER 285
#define RELATION_LESSEREQUAL 286
#define RELATION_GREATEREQUAL 287
#define SCOPE_BRACEOPEN 288
#define SCOPE_BRACECLOSE 289
#define ARGUMENT_OPENBRACKET 290
#define ARGUMENT_CLOSEBRACKET 291
#define SEMICOLON 292
#define VALUE_INT 293
#define VALUE_FLOAT 294
#define VALUE_BOOL 295
#define VALUE_CHAR 296
#define COLON 297
#define KEYWORD_DEFAULT 298



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 13 "yacc.y"
 char* string; char character; int integer_number ; float float_number; bool boolean;

/* Line 2058 of yacc.c  */
#line 146 "y.tab.h"
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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
