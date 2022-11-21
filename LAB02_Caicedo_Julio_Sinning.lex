%{
#include "y.tab.h"
void yyerror(char *s);
int yylex(void);
%}

%option yylineno

digit [0-9]
letter [a-zA-Z]
space " "
entero {digit}+
p_decimal \.{digit}+
p_exp [Ee]{entero}
real {entero}(({p_decimal}?{p_exp})|({p_decimal}{p_exp}?))
/* numeros sin signo*/

cadena ["]([^"\\\n]|\\.|\\\n)*["]
include_cadena [<]([^>\\\n]|\\.|\\\n)*[>]
caracter [']([^'\\\n]|\\.|\\\n)*[']
id ({letter}|_)(({letter}|{digit}|-|_)*({letter}|{digit}|_))?
comentario "//".*" "*
multicomentario "/*"([^*]|(\*+[^*/]))*\*+\/

KEYWORD_EXP true|false|NULL
INCLUDE (#include[" "]({cadena}|{include_cadena}))

%%

{comentario} {;}
{multicomentario} {;}

"int" {return (INT);}
"float" {return (FLOAT);}
"char" {return (CHAR);}
"long" {return (LONG);}
"double" {return (DOUBLE);}
"string" {return (STRING);}

"while" {return (WHILE);}
"if" {return (IF);}
"else" {return (ELSE);}
"do" {return (DO);}
"switch" {return (SWITCH);}
"case" {return (CASE);}
"break" {return (BREAK);}
"default" {return (DEFAULT);}
"for" {return (FOR);}
"return" {return (RETURN);}
"void" {return (VOID);}
"enum" {return (ENUM);}
"static" {return (STATIC);}
"const" {return (CONST);}
"continue" {return (CONTINUE);}
"goto" {return (GOTO);}
"sizeof" {return (SIZEOF);}
"typedef" {return (TYPEDEF);}
"union" {return (UNION);}
"volatile" {return (VOLATILE);}
"signed" {return (SIGNED);}
"unsigned" {return (UNSIGNED);}
"extern" {return (EXTERN);}
"register" {return (REGISTER);}
"struct" {return (STRUCT);}
"auto" {return (AUTO);}
"printf" {return (PRINTF);}
"scanf" {return (SCANF);}
{INCLUDE} {return (INCLUDE);}
{KEYWORD_EXP} {return (KEYWORD_EXP);}
"new" {return (NEW);}
"delete" {return (DELETE);}

"{" {return (LLAVEA);}
"}" {return (LLAVEC);}
"(" {return (PARENTA);}
")" {return (PARENTC);}
"[" {return (CORCHETA);}
"]" {return (CORCHETC);}
";" {return (PUNTOYCOMA);}
":" {return (DOSPUNTOS);}
"," {return (COMA);}
"." {return (PUNTO);}
"++" {return (INCREMENTO);}
"--" {return (DECREMENTO);}
"=" {return (ASIGNACION);}
"==" {return (IGUAL);}
"!=" {return (DIFERENTE);}
">" {return (MAYOR);}
"<" {return (MENOR);}
">=" {return (MAYORIGUAL);}
"<=" {return (MENORIGUAL);}
"+" {return (SUMA);}
"-" {return (RESTA);}
"*" {return (MULTIPLICACION);}
"/" {return (DIVISION);}
"%" {return (MODULO);}
"&&" {return (AND);}
"||" {return (OR);}
"!" {return (NOT);}
"^" {return (XOR);}
"~" {return (NEGACION);}
"&" {return (AMPERSAND);}
"|" {return (PIPE);}
"<<" {return (SHIFTIZQ);}
">>" {return (SHIFTDER);}
"+=" {return (SUMAIGUAL);}
"-=" {return (RESTAIGUAL);}
"*=" {return (MULTIIGUAL);}
"/=" {return (DIVIGUAL);}
"%=" {return (MODIGUAL);}
"&=" {return (ANDIGUAL);}
"|=" {return (ORIGUAL);}
"^=" {return (XORIGUAL);}
"<<=" {return (SHIFTIZQIGUAL);}
">>=" {return (SHIFTDERIGUAL);}
"?" {return (CONDICIONAL);}

{entero} {return ENTERO;}
{real} {return REAL;}
{cadena} {return CADENA;}
{caracter} {return CARACTER;}
{id} {printf("id: %s, %d\n",yytext,yylineno);return ID;}

[ \t\n] {;}

. {return (ERROR);}

%%

int yywrap(){
return 1;
}




