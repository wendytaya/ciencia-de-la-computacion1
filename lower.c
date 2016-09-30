/* Escriba una función lower, la cual convierte letras mayusculas a minusculas
 usando una condicional. No usar if-else.*/
#include <stdio.h>
#define funcion (c>='A' && c<='Z'? c+ 'a'-'A':c) 
int main() {
	int  c={'B'};
	printf("%c",lower(c));
}

int lower(int c){
	return funcion;
}
