# Syntax analyzer

Syntax analyzer of a subset of C.

## Grammar 🔏

The following are the tokens that are part of the set to take into account:
start({),if-else-fif,for-ffor,mq-fmq,hh-fhh,dd-fdd (depending on),read,write,end
Arithmetic operators: op-mult(*), op-sum(+), op-sust(-), op-div(/), op-mod(%)

Assignment: op-assign(=)

Take into account the syntax of an internal instruction regarding its termination, that is, if
ends with a semicolon, semicolon, or nothing.

The following symbols: parent-a ( ( ), parent-c ( ) ), comma (,), where necessary.

The following tokens: Integer constants, reals, strings (strings are enclosed in quotes
double quotes) and characters (characters are enclosed in single quotes).

The lexical components of the variables: Identifiers.

The lexical components of comparison: Equal (==), Different (!=) Less-equal (<=),
Greater-equal (>=), Greater (>) and Less (<).

Boolean operators: And ( && ), Or ( || ), Not ( ! ).

Comments within each of the programs should be considered.

The following variable declarations are considered: int, float, char. these are words
C programming language keys.

### **You should not consider:**

Handling arrays of any dimension.
string handling
Handling functions or subroutines
Management of predefined functions.

## Use 🚀

### requirements 📋

* Linux

### Run 🔧

Steps for compiling the program:

yacc -d LAB02_Caicedo_Julio_Sinning.y

lex -o LAB02_Caicedo_Julio_Sinning.c LAB02_Caicedo_Julio_Sinning.lex

gcc -o LAB02_Caicedo_Julio_Sinning.out LAB02_Caicedo_Julio_Sinning.c y.tab.c

To run the program:

./LAB02_Caicedo_Julio_Sinning.out [Input file]

The result of the execution of the program is in the output file "saliday.txt"

## Built with 🛠️

* Visual Studio Code - IDE
* Linux
* Lex
* yacc
* C

## Author ✒️

* **Camilo Sinning** - [CamiloSinningUN](https://github.com/CamiloSinningUN)

See the list of all [contributors](https://github.com/CamiloSinningUN/Bienestar_familiar/contributors) who have participated in this project.
