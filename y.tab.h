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
    INT = 258,                     /* INT  */
    FLOAT = 259,                   /* FLOAT  */
    CHAR = 260,                    /* CHAR  */
    LONG = 261,                    /* LONG  */
    DOUBLE = 262,                  /* DOUBLE  */
    STRING = 263,                  /* STRING  */
    WHILE = 264,                   /* WHILE  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    DO = 267,                      /* DO  */
    SWITCH = 268,                  /* SWITCH  */
    CASE = 269,                    /* CASE  */
    BREAK = 270,                   /* BREAK  */
    DEFAULT = 271,                 /* DEFAULT  */
    FOR = 272,                     /* FOR  */
    RETURN = 273,                  /* RETURN  */
    VOID = 274,                    /* VOID  */
    ENUM = 275,                    /* ENUM  */
    STATIC = 276,                  /* STATIC  */
    CONST = 277,                   /* CONST  */
    CONTINUE = 278,                /* CONTINUE  */
    GOTO = 279,                    /* GOTO  */
    SIZEOF = 280,                  /* SIZEOF  */
    TYPEDEF = 281,                 /* TYPEDEF  */
    UNION = 282,                   /* UNION  */
    VOLATILE = 283,                /* VOLATILE  */
    SIGNED = 284,                  /* SIGNED  */
    UNSIGNED = 285,                /* UNSIGNED  */
    EXTERRN = 286,                 /* EXTERRN  */
    REGISTER = 287,                /* REGISTER  */
    STRUCT = 288,                  /* STRUCT  */
    AUTO = 289,                    /* AUTO  */
    PRINTF = 290,                  /* PRINTF  */
    SCANF = 291,                   /* SCANF  */
    INCLUDE = 292,                 /* INCLUDE  */
    EXTERN = 293,                  /* EXTERN  */
    KEYWORD_EXP = 294,             /* KEYWORD_EXP  */
    LLAVEA = 295,                  /* LLAVEA  */
    LLAVEC = 296,                  /* LLAVEC  */
    PARENTA = 297,                 /* PARENTA  */
    PARENTC = 298,                 /* PARENTC  */
    CORCHETA = 299,                /* CORCHETA  */
    CORCHETC = 300,                /* CORCHETC  */
    PUNTOYCOMA = 301,              /* PUNTOYCOMA  */
    COMA = 302,                    /* COMA  */
    PUNTO = 303,                   /* PUNTO  */
    DOSPUNTOS = 304,               /* DOSPUNTOS  */
    INCREMENTO = 305,              /* INCREMENTO  */
    DECREMENTO = 306,              /* DECREMENTO  */
    ASIGNACION = 307,              /* ASIGNACION  */
    IGUAL = 308,                   /* IGUAL  */
    DIFERENTE = 309,               /* DIFERENTE  */
    MAYOR = 310,                   /* MAYOR  */
    MENOR = 311,                   /* MENOR  */
    MAYORIGUAL = 312,              /* MAYORIGUAL  */
    MENORIGUAL = 313,              /* MENORIGUAL  */
    SUMA = 314,                    /* SUMA  */
    RESTA = 315,                   /* RESTA  */
    MULTIPLICACION = 316,          /* MULTIPLICACION  */
    DIVISION = 317,                /* DIVISION  */
    MODULO = 318,                  /* MODULO  */
    AND = 319,                     /* AND  */
    OR = 320,                      /* OR  */
    NOT = 321,                     /* NOT  */
    XOR = 322,                     /* XOR  */
    NEGACION = 323,                /* NEGACION  */
    AMPERSAND = 324,               /* AMPERSAND  */
    PIPE = 325,                    /* PIPE  */
    SHIFTIZQ = 326,                /* SHIFTIZQ  */
    SHIFTDER = 327,                /* SHIFTDER  */
    SUMAIGUAL = 328,               /* SUMAIGUAL  */
    RESTAIGUAL = 329,              /* RESTAIGUAL  */
    MULTIIGUAL = 330,              /* MULTIIGUAL  */
    DIVIGUAL = 331,                /* DIVIGUAL  */
    MODIGUAL = 332,                /* MODIGUAL  */
    ANDIGUAL = 333,                /* ANDIGUAL  */
    ORIGUAL = 334,                 /* ORIGUAL  */
    XORIGUAL = 335,                /* XORIGUAL  */
    SHIFTIZQIGUAL = 336,           /* SHIFTIZQIGUAL  */
    SHIFTDERIGUAL = 337,           /* SHIFTDERIGUAL  */
    CONDICIONAL = 338,             /* CONDICIONAL  */
    NEW = 339,                     /* NEW  */
    DELETE = 340,                  /* DELETE  */
    ENTERO = 341,                  /* ENTERO  */
    REAL = 342,                    /* REAL  */
    CADENA = 343,                  /* CADENA  */
    CARACTER = 344,                /* CARACTER  */
    ID = 345,                      /* ID  */
    ERROR = 346                    /* ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define INT 258
#define FLOAT 259
#define CHAR 260
#define LONG 261
#define DOUBLE 262
#define STRING 263
#define WHILE 264
#define IF 265
#define ELSE 266
#define DO 267
#define SWITCH 268
#define CASE 269
#define BREAK 270
#define DEFAULT 271
#define FOR 272
#define RETURN 273
#define VOID 274
#define ENUM 275
#define STATIC 276
#define CONST 277
#define CONTINUE 278
#define GOTO 279
#define SIZEOF 280
#define TYPEDEF 281
#define UNION 282
#define VOLATILE 283
#define SIGNED 284
#define UNSIGNED 285
#define EXTERRN 286
#define REGISTER 287
#define STRUCT 288
#define AUTO 289
#define PRINTF 290
#define SCANF 291
#define INCLUDE 292
#define EXTERN 293
#define KEYWORD_EXP 294
#define LLAVEA 295
#define LLAVEC 296
#define PARENTA 297
#define PARENTC 298
#define CORCHETA 299
#define CORCHETC 300
#define PUNTOYCOMA 301
#define COMA 302
#define PUNTO 303
#define DOSPUNTOS 304
#define INCREMENTO 305
#define DECREMENTO 306
#define ASIGNACION 307
#define IGUAL 308
#define DIFERENTE 309
#define MAYOR 310
#define MENOR 311
#define MAYORIGUAL 312
#define MENORIGUAL 313
#define SUMA 314
#define RESTA 315
#define MULTIPLICACION 316
#define DIVISION 317
#define MODULO 318
#define AND 319
#define OR 320
#define NOT 321
#define XOR 322
#define NEGACION 323
#define AMPERSAND 324
#define PIPE 325
#define SHIFTIZQ 326
#define SHIFTDER 327
#define SUMAIGUAL 328
#define RESTAIGUAL 329
#define MULTIIGUAL 330
#define DIVIGUAL 331
#define MODIGUAL 332
#define ANDIGUAL 333
#define ORIGUAL 334
#define XORIGUAL 335
#define SHIFTIZQIGUAL 336
#define SHIFTDERIGUAL 337
#define CONDICIONAL 338
#define NEW 339
#define DELETE 340
#define ENTERO 341
#define REAL 342
#define CADENA 343
#define CARACTER 344
#define ID 345
#define ERROR 346

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
