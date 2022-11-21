%{
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

%}

%token INT FLOAT CHAR LONG DOUBLE STRING

%token WHILE IF ELSE DO SWITCH CASE BREAK DEFAULT FOR RETURN VOID ENUM STATIC CONST CONTINUE GOTO SIZEOF TYPEDEF UNION VOLATILE SIGNED UNSIGNED EXTERRN REGISTER STRUCT AUTO PRINTF SCANF INCLUDE EXTERN KEYWORD_EXP

%token LLAVEA LLAVEC PARENTA PARENTC CORCHETA CORCHETC PUNTOYCOMA COMA PUNTO DOSPUNTOS INCREMENTO DECREMENTO ASIGNACION IGUAL DIFERENTE MAYOR MENOR MAYORIGUAL MENORIGUAL SUMA RESTA MULTIPLICACION DIVISION MODULO AND OR NOT XOR NEGACION AMPERSAND PIPE SHIFTIZQ SHIFTDER SUMAIGUAL RESTAIGUAL MULTIIGUAL DIVIGUAL MODIGUAL ANDIGUAL ORIGUAL XORIGUAL SHIFTIZQIGUAL SHIFTDERIGUAL CONDICIONAL NEW DELETE

%token ENTERO REAL CADENA CARACTER ID

%token ERROR

%%

program: A
	;

A: /* empty */
	| A statement 
	;

statement: variable_statement 
	| function_statement
	| function_declaration
    | INCLUDE 
	;

variable_statement: returned_value_type state B PUNTOYCOMA
	;

B: /* empty */
	| B COMA state 
	;

state: ID D ;
	
D: /* empty */
	| CORCHETA expression CORCHETC
    | ASIGNACION expression
	;

	
function_statement: ID PARENTA E PARENTC PUNTOYCOMA 
        | clause
		;

Z: /* empty */
    | parameters_list_function
    ;

parameters_list_function: parameter_function Y
	;
Y: /* empty */
    | Y COMA parameter_function
    ;

parameter_function: ID
    | expression
    ;

E: /* empty */
	| parameters_list
	;

returned_value_type: data_type
	| VOID
	;
	
parameters_list: parameter F
	;

F: /* empty */
	| F  COMA parameter
	;
	
parameter: data_type ID	
	;
	
function_declaration: returned_value_type ID PARENTA E PARENTC LLAVEA H I LLAVEC 
	;

H: /* empty */
	| H statement
	;

I: /* empty */
	| I clause
	;

clause: PUNTOYCOMA
	| expression PUNTOYCOMA
	| LLAVEA I LLAVEC
	| IF PARENTA expression PARENTC clause X
	| FOR PARENTA K PUNTOYCOMA K PUNTOYCOMA K PARENTC clause
	| CONTINUE L PUNTOYCOMA
	| BREAK L PUNTOYCOMA
	| RETURN K PUNTOYCOMA
    | SCANF PARENTA Z PARENTC PUNTOYCOMA
    | PRINTF PARENTA Z PARENTC PUNTOYCOMA
    | WHILE PARENTA expression PARENTC clause
    | DO clause WHILE PARENTA expression PARENTC PUNTOYCOMA
    | SWITCH PARENTA expression PARENTC clause
    | CASE expression DOSPUNTOS clause
    | DEFAULT DOSPUNTOS clause
    | variable_statement
    | error 
	;
	
X: /* empty */
	| ELSE clause
	;
	
K: /* empty */
    | data_type ID ASIGNACION expression
	| expression 
    | parameter 
	;
	
L: /* empty */
	| ID	
	;
	
expression_list: expression O
	;

O: /* empty */
	| O COMA expression
	;

expression:	ID
	| KEYWORD_EXP
	| ENTERO 	
	| CHAR
	| DOUBLE
	| STRING
    | CARACTER
    | REAL
    | CADENA
	| ID PARENTA test M PARENTC 			
	| expression CORCHETA expression CORCHETC
	| PARENTA test
    | ASSIGNMENTS
    | OPERATORS
	| expression CONDICIONAL expression DOSPUNTOS expression
	| NEW data_type N
	| DELETE expression
	;

ASSIGNMENTS: expression UNARY_ASSIGNMENT_OPERATOR
	| expression BINARY_ASSIGNMENT_OPERATOR expression 
    | UNARY_ASSIGNMENT_OPERATOR expression
    ;

OPERATORS:  UNARY_OPERATOR expression  
| expression BINARY_OP expression
    ;

UNARY_OPERATOR: AMPERSAND
    | SUMA
    | RESTA
    | NOT
    ;

BINARY_ASSIGNMENT_OPERATOR: ASIGNACION
    | SUMAIGUAL
    | RESTAIGUAL
    | MULTIIGUAL
    | DIVIGUAL
    | MODIGUAL
    | ANDIGUAL
    | ORIGUAL
    | XORIGUAL
    | SHIFTIZQIGUAL
    | SHIFTDERIGUAL
    ;    

UNARY_ASSIGNMENT_OPERATOR: INCREMENTO
    | DECREMENTO
    ;

test: M PARENTC 
	| data_type PARENTC expression
	;

M: /* empty */
	| expression_list
	;
	
BINARY_OP: MULTIPLICACION
	| BINARY_OPERATOR
	;

BINARY_OPERATOR: SUMA
    | RESTA
    | DIVISION
    | MODULO
    | AND
    | OR
    | XOR
    | SHIFTIZQ
    | SHIFTDER
    | IGUAL
    | DIFERENTE
    | MAYOR
    | MENOR
    | MAYORIGUAL
    | MENORIGUAL
    ;
    

N: /* empty */
	| LLAVEA expression LLAVEC
    ;
	
data_type: basic_data_type C
	    ;

basic_data_type: INT 
	| CHAR 			
	| DOUBLE
    | LONG
    | FLOAT
    | STRING
	;
	
C: /* empty */
	| C MULTIPLICACION
	;

%%

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