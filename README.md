# SyntaxAnalyzer

Pasos para la compilación del programa:

yacc -d LAB02_Caicedo_Julio_Sinning.y
lex -o LAB02_Caicedo_Julio_Sinning.c LAB02_Caicedo_Julio_Sinning.lex
gcc -o LAB02_Caicedo_Julio_Sinning.out LAB02_Caicedo_Julio_Sinning.c y.tab.c

Para ejecutar el programa:

./LAB02_Caicedo_Julio_Sinning.out [Archivo de entrada]

El resultado de la ejecución del programa se encuentra en el archivo de salida "saliday.txt"
