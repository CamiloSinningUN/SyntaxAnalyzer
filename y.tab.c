/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "LAB02_Caicedo_Julio_Sinning.y"

    void yyerror(char *s);
    int yylex(void);
    // int yywrap();
    extern int yylineno;
    #include <stdio.h>

    typedef struct node
    {
        int line;
        struct node *next;
    }  node;

    node *errorlist = NULL;


#line 88 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_LONG = 6,                       /* LONG  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_STRING = 8,                     /* STRING  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_DO = 12,                        /* DO  */
  YYSYMBOL_SWITCH = 13,                    /* SWITCH  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_VOID = 19,                      /* VOID  */
  YYSYMBOL_ENUM = 20,                      /* ENUM  */
  YYSYMBOL_STATIC = 21,                    /* STATIC  */
  YYSYMBOL_CONST = 22,                     /* CONST  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 24,                      /* GOTO  */
  YYSYMBOL_SIZEOF = 25,                    /* SIZEOF  */
  YYSYMBOL_TYPEDEF = 26,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 27,                     /* UNION  */
  YYSYMBOL_VOLATILE = 28,                  /* VOLATILE  */
  YYSYMBOL_SIGNED = 29,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 30,                  /* UNSIGNED  */
  YYSYMBOL_EXTERRN = 31,                   /* EXTERRN  */
  YYSYMBOL_REGISTER = 32,                  /* REGISTER  */
  YYSYMBOL_STRUCT = 33,                    /* STRUCT  */
  YYSYMBOL_AUTO = 34,                      /* AUTO  */
  YYSYMBOL_PRINTF = 35,                    /* PRINTF  */
  YYSYMBOL_SCANF = 36,                     /* SCANF  */
  YYSYMBOL_INCLUDE = 37,                   /* INCLUDE  */
  YYSYMBOL_EXTERN = 38,                    /* EXTERN  */
  YYSYMBOL_KEYWORD_EXP = 39,               /* KEYWORD_EXP  */
  YYSYMBOL_LLAVEA = 40,                    /* LLAVEA  */
  YYSYMBOL_LLAVEC = 41,                    /* LLAVEC  */
  YYSYMBOL_PARENTA = 42,                   /* PARENTA  */
  YYSYMBOL_PARENTC = 43,                   /* PARENTC  */
  YYSYMBOL_CORCHETA = 44,                  /* CORCHETA  */
  YYSYMBOL_CORCHETC = 45,                  /* CORCHETC  */
  YYSYMBOL_PUNTOYCOMA = 46,                /* PUNTOYCOMA  */
  YYSYMBOL_COMA = 47,                      /* COMA  */
  YYSYMBOL_PUNTO = 48,                     /* PUNTO  */
  YYSYMBOL_DOSPUNTOS = 49,                 /* DOSPUNTOS  */
  YYSYMBOL_INCREMENTO = 50,                /* INCREMENTO  */
  YYSYMBOL_DECREMENTO = 51,                /* DECREMENTO  */
  YYSYMBOL_ASIGNACION = 52,                /* ASIGNACION  */
  YYSYMBOL_IGUAL = 53,                     /* IGUAL  */
  YYSYMBOL_DIFERENTE = 54,                 /* DIFERENTE  */
  YYSYMBOL_MAYOR = 55,                     /* MAYOR  */
  YYSYMBOL_MENOR = 56,                     /* MENOR  */
  YYSYMBOL_MAYORIGUAL = 57,                /* MAYORIGUAL  */
  YYSYMBOL_MENORIGUAL = 58,                /* MENORIGUAL  */
  YYSYMBOL_SUMA = 59,                      /* SUMA  */
  YYSYMBOL_RESTA = 60,                     /* RESTA  */
  YYSYMBOL_MULTIPLICACION = 61,            /* MULTIPLICACION  */
  YYSYMBOL_DIVISION = 62,                  /* DIVISION  */
  YYSYMBOL_MODULO = 63,                    /* MODULO  */
  YYSYMBOL_AND = 64,                       /* AND  */
  YYSYMBOL_OR = 65,                        /* OR  */
  YYSYMBOL_NOT = 66,                       /* NOT  */
  YYSYMBOL_XOR = 67,                       /* XOR  */
  YYSYMBOL_NEGACION = 68,                  /* NEGACION  */
  YYSYMBOL_AMPERSAND = 69,                 /* AMPERSAND  */
  YYSYMBOL_PIPE = 70,                      /* PIPE  */
  YYSYMBOL_SHIFTIZQ = 71,                  /* SHIFTIZQ  */
  YYSYMBOL_SHIFTDER = 72,                  /* SHIFTDER  */
  YYSYMBOL_SUMAIGUAL = 73,                 /* SUMAIGUAL  */
  YYSYMBOL_RESTAIGUAL = 74,                /* RESTAIGUAL  */
  YYSYMBOL_MULTIIGUAL = 75,                /* MULTIIGUAL  */
  YYSYMBOL_DIVIGUAL = 76,                  /* DIVIGUAL  */
  YYSYMBOL_MODIGUAL = 77,                  /* MODIGUAL  */
  YYSYMBOL_ANDIGUAL = 78,                  /* ANDIGUAL  */
  YYSYMBOL_ORIGUAL = 79,                   /* ORIGUAL  */
  YYSYMBOL_XORIGUAL = 80,                  /* XORIGUAL  */
  YYSYMBOL_SHIFTIZQIGUAL = 81,             /* SHIFTIZQIGUAL  */
  YYSYMBOL_SHIFTDERIGUAL = 82,             /* SHIFTDERIGUAL  */
  YYSYMBOL_CONDICIONAL = 83,               /* CONDICIONAL  */
  YYSYMBOL_NEW = 84,                       /* NEW  */
  YYSYMBOL_DELETE = 85,                    /* DELETE  */
  YYSYMBOL_ENTERO = 86,                    /* ENTERO  */
  YYSYMBOL_REAL = 87,                      /* REAL  */
  YYSYMBOL_CADENA = 88,                    /* CADENA  */
  YYSYMBOL_CARACTER = 89,                  /* CARACTER  */
  YYSYMBOL_ID = 90,                        /* ID  */
  YYSYMBOL_ERROR = 91,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_program = 93,                   /* program  */
  YYSYMBOL_A = 94,                         /* A  */
  YYSYMBOL_statement = 95,                 /* statement  */
  YYSYMBOL_variable_statement = 96,        /* variable_statement  */
  YYSYMBOL_B = 97,                         /* B  */
  YYSYMBOL_state = 98,                     /* state  */
  YYSYMBOL_D = 99,                         /* D  */
  YYSYMBOL_function_statement = 100,       /* function_statement  */
  YYSYMBOL_Z = 101,                        /* Z  */
  YYSYMBOL_parameters_list_function = 102, /* parameters_list_function  */
  YYSYMBOL_Y = 103,                        /* Y  */
  YYSYMBOL_parameter_function = 104,       /* parameter_function  */
  YYSYMBOL_E = 105,                        /* E  */
  YYSYMBOL_returned_value_type = 106,      /* returned_value_type  */
  YYSYMBOL_parameters_list = 107,          /* parameters_list  */
  YYSYMBOL_F = 108,                        /* F  */
  YYSYMBOL_parameter = 109,                /* parameter  */
  YYSYMBOL_function_declaration = 110,     /* function_declaration  */
  YYSYMBOL_H = 111,                        /* H  */
  YYSYMBOL_I = 112,                        /* I  */
  YYSYMBOL_clause = 113,                   /* clause  */
  YYSYMBOL_X = 114,                        /* X  */
  YYSYMBOL_K = 115,                        /* K  */
  YYSYMBOL_L = 116,                        /* L  */
  YYSYMBOL_expression_list = 117,          /* expression_list  */
  YYSYMBOL_O = 118,                        /* O  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_ASSIGNMENTS = 120,              /* ASSIGNMENTS  */
  YYSYMBOL_OPERATORS = 121,                /* OPERATORS  */
  YYSYMBOL_UNARY_OPERATOR = 122,           /* UNARY_OPERATOR  */
  YYSYMBOL_BINARY_ASSIGNMENT_OPERATOR = 123, /* BINARY_ASSIGNMENT_OPERATOR  */
  YYSYMBOL_UNARY_ASSIGNMENT_OPERATOR = 124, /* UNARY_ASSIGNMENT_OPERATOR  */
  YYSYMBOL_test = 125,                     /* test  */
  YYSYMBOL_M = 126,                        /* M  */
  YYSYMBOL_BINARY_OP = 127,                /* BINARY_OP  */
  YYSYMBOL_BINARY_OPERATOR = 128,          /* BINARY_OPERATOR  */
  YYSYMBOL_N = 129,                        /* N  */
  YYSYMBOL_data_type = 130,                /* data_type  */
  YYSYMBOL_basic_data_type = 131,          /* basic_data_type  */
  YYSYMBOL_C = 132                         /* C  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1360

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    33,    34,    37,    38,    39,    40,    43,
      46,    47,    50,    52,    53,    54,    58,    59,    62,    63,
      66,    68,    69,    72,    73,    76,    77,    80,    81,    84,
      87,    88,    91,    94,    97,    98,   101,   102,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   124,   125,   128,   129,   130,
     131,   134,   135,   138,   141,   142,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   164,   165,   166,   169,   170,   173,   174,
     175,   176,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   192,   193,   196,   197,   200,   201,   204,
     205,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   226,   227,   230,   233,
     234,   235,   236,   237,   238,   241,   242
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "CHAR",
  "LONG", "DOUBLE", "STRING", "WHILE", "IF", "ELSE", "DO", "SWITCH",
  "CASE", "BREAK", "DEFAULT", "FOR", "RETURN", "VOID", "ENUM", "STATIC",
  "CONST", "CONTINUE", "GOTO", "SIZEOF", "TYPEDEF", "UNION", "VOLATILE",
  "SIGNED", "UNSIGNED", "EXTERRN", "REGISTER", "STRUCT", "AUTO", "PRINTF",
  "SCANF", "INCLUDE", "EXTERN", "KEYWORD_EXP", "LLAVEA", "LLAVEC",
  "PARENTA", "PARENTC", "CORCHETA", "CORCHETC", "PUNTOYCOMA", "COMA",
  "PUNTO", "DOSPUNTOS", "INCREMENTO", "DECREMENTO", "ASIGNACION", "IGUAL",
  "DIFERENTE", "MAYOR", "MENOR", "MAYORIGUAL", "MENORIGUAL", "SUMA",
  "RESTA", "MULTIPLICACION", "DIVISION", "MODULO", "AND", "OR", "NOT",
  "XOR", "NEGACION", "AMPERSAND", "PIPE", "SHIFTIZQ", "SHIFTDER",
  "SUMAIGUAL", "RESTAIGUAL", "MULTIIGUAL", "DIVIGUAL", "MODIGUAL",
  "ANDIGUAL", "ORIGUAL", "XORIGUAL", "SHIFTIZQIGUAL", "SHIFTDERIGUAL",
  "CONDICIONAL", "NEW", "DELETE", "ENTERO", "REAL", "CADENA", "CARACTER",
  "ID", "ERROR", "$accept", "program", "A", "statement",
  "variable_statement", "B", "state", "D", "function_statement", "Z",
  "parameters_list_function", "Y", "parameter_function", "E",
  "returned_value_type", "parameters_list", "F", "parameter",
  "function_declaration", "H", "I", "clause", "X", "K", "L",
  "expression_list", "O", "expression", "ASSIGNMENTS", "OPERATORS",
  "UNARY_OPERATOR", "BINARY_ASSIGNMENT_OPERATOR",
  "UNARY_ASSIGNMENT_OPERATOR", "test", "M", "BINARY_OP", "BINARY_OPERATOR",
  "N", "data_type", "basic_data_type", "C", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-133)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-135)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -133,     4,   299,  -133,  -133,  -133,  -133,   -81,  -133,   -77,
     -75,   -25,   -15,   659,    -7,   767,   -54,   -12,    -4,   726,
    -133,   -54,    -3,     0,  -133,  -133,  -133,   726,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,    26,   767,  -133,  -133,  -133,
    -133,     3,  -133,  -133,  -133,   -50,  -133,  -133,  1077,  -133,
    -133,   767,   767,  -133,  -133,   767,   767,     7,  -133,   -49,
      37,   767,  -133,  -133,  -133,  1117,  -133,     5,   659,   726,
    -133,     6,  1277,   -35,     8,   823,   823,   479,  -133,  1277,
    -133,    13,    15,  -133,  -133,  -133,    19,  1277,   726,   -30,
    -133,   767,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
     767,   767,  -133,   767,  -133,  1277,  1277,     1,   914,   955,
     726,   -36,    21,   996,   659,  -133,  -133,    18,  -133,    17,
    -133,   -22,    22,  -133,  -133,  1277,    27,  -133,  -133,    24,
    -133,   767,   767,  -133,    29,  -133,  -133,   767,   -40,    26,
     767,   767,  -133,   -23,  1157,  1197,  1277,  1277,  -133,   659,
     659,   767,   659,  -133,   726,   767,    28,    31,    30,   767,
    1277,   873,    35,    38,    32,  -133,    39,   -17,  1237,  1277,
    -133,   -49,  -133,   767,  -133,    73,  1037,  -133,    40,  1277,
    -133,   823,  -133,  1277,  -133,  -133,    26,  -133,    47,  -133,
    -133,  1277,   659,  -133,    42,   726,  -133,  -133,  -133,  -133,
    -133,    46,   389,   659,  -133,   569,  -133,  -133
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,    54,   129,   133,    69,   132,    70,
      71,     0,     0,     0,     0,     0,    61,     0,     0,    57,
      28,    61,     0,     0,     8,    67,    36,   107,    38,   103,
     104,    89,    90,    91,    88,     0,     0,    68,    73,    74,
      72,    66,     4,     5,     6,     0,     7,    17,     0,    78,
      79,     0,     0,    27,   135,     0,     0,    66,    53,     0,
       0,     0,    69,    70,    71,     0,    62,     0,     0,    57,
      60,     0,    59,     0,     0,    18,    18,     0,   108,    64,
      77,     0,     0,   130,   131,   134,   126,    82,    25,    13,
      10,     0,    39,    92,   120,   121,   122,   123,   124,   125,
     111,   112,   109,   113,   114,   115,   116,   117,   118,   119,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       0,     0,    83,     0,   110,    86,    85,   128,     0,     0,
     107,    13,     0,     0,     0,    44,    52,     0,    45,    32,
      43,    66,     0,    19,    21,    24,     0,    40,    37,    63,
     105,     0,     0,    81,     0,    26,    30,   107,     0,    25,
       0,     0,    12,     0,     0,     0,    84,    87,   136,     0,
       0,     0,     0,    51,    57,     0,     0,    20,     0,     0,
     106,     0,     0,    29,     0,    32,     0,     0,     0,    15,
       9,     0,    76,     0,    48,    55,     0,    50,     0,    58,
      47,     0,    46,    65,   127,    16,     0,    75,     0,    14,
      11,    80,     0,    41,     0,    57,    22,    31,    34,    56,
      49,     0,     0,     0,    35,     0,    42,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -132,    -2,  -133,  -100,  -133,  -133,    16,
    -133,  -133,  -108,   -65,    -1,  -133,  -133,   -82,  -133,  -133,
    -127,   -11,  -133,   -64,    75,  -133,  -133,    -8,  -133,  -133,
    -133,  -133,    90,    70,   -59,  -133,  -133,  -133,    -9,  -133,
    -133
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,    42,    58,   163,    90,   162,    44,   142,
     143,   177,   144,   154,    59,   155,   183,    70,    46,   222,
      77,    47,   213,    71,    67,    78,   149,    48,    49,    50,
      51,   121,    52,   157,    81,   123,   124,   153,    53,    54,
     127
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    45,    60,   151,     3,   137,   156,    65,   160,  -130,
      73,    72,   159,  -131,   160,  -134,   161,    55,    82,    79,
     130,   -23,   161,   190,   191,   -23,    86,    56,    87,     5,
       6,    83,     8,    84,    85,    61,    66,    68,    69,    75,
      89,   131,    76,   125,   126,    88,   132,   128,   129,   130,
     185,   135,   138,   133,   140,   139,   150,   136,   151,   152,
      73,    72,   168,   171,   174,   176,   148,   145,   145,   175,
     178,   179,   182,   185,   200,   207,   202,   156,   201,   158,
      79,   205,   208,   164,   212,   206,   215,   218,   220,   223,
     224,   210,   146,   216,   186,   225,    74,    80,   184,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     198,     0,   165,   166,     0,   167,     0,     0,     0,     0,
       0,    82,    79,   173,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,   180,   181,     0,     0,     0,     0,    79,
     187,   221,   188,   189,     0,   122,     0,     0,   194,   195,
       0,   197,   122,   196,     0,    73,    72,   199,     0,   122,
       0,   203,     0,     0,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,     0,   211,     0,     0,     0,     0,
       0,     0,     0,   145,     0,     0,     0,   187,     0,     0,
       0,   219,     0,     0,     0,     0,    73,    72,     0,     0,
       0,     0,   226,     0,   148,   122,   122,     0,   122,   122,
      43,    45,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   122,   122,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   122,     0,     0,     0,     0,     0,     0,   122,   122,
       0,     0,     0,     0,     0,     0,   122,     0,     0,   122,
       0,     0,     0,   122,     0,     0,     0,     0,     0,    -2,
       4,   122,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,    25,    26,
       0,    27,     0,     0,     0,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,    24,     0,    25,    26,
     -36,    27,     0,     0,     0,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,     0,     0,    25,    26,
     147,    27,     0,     0,     0,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    57,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,     0,     0,    25,    26,
     227,    27,     0,     0,     0,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    57,
       4,     0,     5,     6,     7,     8,     9,    10,    11,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    22,    23,     0,     0,    25,    26,
       0,    27,     0,     0,     0,    28,     0,     0,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,    33,     0,     0,    34,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,    38,    39,    40,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,    27,     0,
       0,     0,    62,     0,    63,    64,    29,    30,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,    27,
      35,    36,    37,    38,    39,    40,    57,    29,    30,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    62,     0,
      63,    64,     0,    33,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,    38,    39,    40,    57,     0,     0,
       0,     0,    25,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
      38,    39,    40,   141,   204,     0,     0,    91,     0,     0,
       0,     0,     0,    29,    30,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
     107,     0,     0,     0,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   169,    91,     0,
       0,     0,     0,     0,    29,    30,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
       0,   107,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   170,    91,
       0,     0,     0,     0,     0,    29,    30,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     0,   107,     0,     0,     0,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   172,
      91,     0,     0,     0,     0,     0,    29,    30,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     0,   107,     0,     0,     0,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     214,    91,     0,     0,     0,     0,     0,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    91,     0,    92,     0,     0,     0,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    91,     0,     0,     0,     0,   134,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    91,   192,     0,     0,     0,     0,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    91,     0,     0,     0,     0,   193,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    91,   209,     0,     0,     0,     0,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,    91,     0,     0,     0,     0,     0,    29,    30,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     0,   107,     0,     0,     0,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120
};

static const yytype_int16 yycheck[] =
{
       2,     2,    13,    43,     0,    69,    88,    15,    44,    90,
      19,    19,    42,    90,    44,    90,    52,    42,    27,    27,
      42,    43,    52,    46,    47,    47,    35,    42,    36,     3,
       4,     5,     6,     7,     8,    42,    90,    49,    42,    42,
      90,    90,    42,    51,    52,    42,     9,    55,    56,    42,
      90,    46,    46,    61,    46,    90,    43,    68,    43,    40,
      69,    69,    61,    42,    46,    43,    77,    75,    76,    52,
      43,    47,    43,    90,    46,    43,    46,   159,    47,    88,
      88,    46,    43,    91,    11,    47,    46,    40,    46,    43,
     222,   191,    76,   201,   159,   222,    21,    27,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     174,    -1,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,   130,   130,   134,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,   157,
     159,   215,   160,   161,    -1,    65,    -1,    -1,   169,   170,
      -1,   172,    72,   171,    -1,   174,   174,   175,    -1,    79,
      -1,   179,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,   206,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,   215,   215,    -1,    -1,
      -1,    -1,   223,    -1,   225,   125,   126,    -1,   128,   129,
     222,   222,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,   165,   166,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,   181,    -1,    -1,    -1,    -1,    -1,    -1,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,   199,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,     0,
       1,   211,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    39,    40,
      41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    39,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,     5,    -1,     7,     8,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      84,    85,    86,    87,    88,    89,    90,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,     5,    -1,
       7,     8,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    41,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    43,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    43,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    43,
      44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      43,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    -1,    46,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    45,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    44,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,    94,     0,     1,     3,     4,     5,     6,     7,
       8,     9,    10,    12,    13,    14,    15,    16,    17,    18,
      19,    23,    35,    36,    37,    39,    40,    42,    46,    50,
      51,    59,    60,    66,    69,    84,    85,    86,    87,    88,
      89,    90,    95,    96,   100,   106,   110,   113,   119,   120,
     121,   122,   124,   130,   131,    42,    42,    90,    96,   106,
     113,    42,     5,     7,     8,   119,    90,   116,    49,    42,
     109,   115,   119,   130,   116,    42,    42,   112,   117,   119,
     125,   126,   130,     5,     7,     8,   130,   119,    42,    90,
      98,    44,    46,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   123,   124,   127,   128,   119,   119,   132,   119,   119,
      42,    90,     9,   119,    49,    46,   113,   115,    46,    90,
      46,    90,   101,   102,   104,   119,   101,    41,   113,   118,
      43,    43,    40,   129,   105,   107,   109,   125,   130,    42,
      44,    52,    99,    97,   119,   119,   119,   119,    61,    43,
      43,    42,    43,   113,    46,    52,    43,   103,    43,    47,
     119,   119,    43,   108,   126,    90,   105,   130,   119,   119,
      46,    47,    45,    49,   113,   113,   119,   113,   115,   119,
      46,    47,    46,   119,    41,    46,    47,    43,    43,    45,
      98,   119,    11,   114,    43,    46,   104,   109,    40,   113,
      46,   115,   111,    43,    95,   112,   113,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    95,    95,    95,    95,    96,
      97,    97,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     108,   108,   109,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   116,   116,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   131,
     131,   131,   131,   131,   131,   132,   132
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     4,
       0,     3,     2,     0,     3,     2,     5,     1,     0,     1,
       2,     0,     3,     1,     1,     0,     1,     1,     1,     2,
       0,     3,     2,     9,     0,     2,     0,     2,     1,     2,
       3,     6,     9,     3,     3,     3,     5,     5,     5,     7,
       5,     4,     3,     1,     1,     0,     2,     0,     4,     1,
       1,     0,     1,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       5,     3,     2,     2,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     2,     1,
       1,     1,     1,     1,     1,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1828 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 245 "LAB02_Caicedo_Julio_Sinning.y"


int main(int argc, char *argv[])
{
    if (argc != 2){
        printf("Error en los argumentos\n");
    }else{
        extern FILE *yyin, *yyout;
        yyin = fopen(argv[1], "r");



        yyout = fopen("saliday.txt", "w");
        fprintf(yyout, "Prueba con el archivo de entrada %s: \n", argv[1]);
        yyparse();

        if (errorlist == NULL){
            fprintf(yyout, "\nBien.\n");
        }else{
            //print errorlist
            
            node *temp = errorlist;
            while(temp != NULL){
                fprintf(yyout,"Error en la linea %d \n", temp->line);
                temp = temp->next;
            }
            
            fprintf(yyout,"\nLinea erronea.\n");
        }

        fclose(yyin);
        fclose(yyout);
    }  
}

void yyerror(char *s)
{
    //insert error to end of list
    node *temp = (node *)malloc(sizeof(node));
    temp->line = yylineno;
    temp->next = NULL;
    if (errorlist == NULL){
        errorlist = temp;
    }else{
        node *temp2 = errorlist;
        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp;
    }
}
