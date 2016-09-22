/* Escriba una función recursiva que reciba un string y devuelva el string
invertido (sin utilizar la libreria string.h).*/
#include <stdio.h>
void invertir (char[], int n);

int main() {
	char arreglo[]="Hola";
	
	invertir(arreglo,4);
	/*printf("%c\n",invertir(arreglo,4));*/
	printf(arreglo);
}

void invertir (char a[],int n){
	int i=0;
	for(;i<n/2;i++){
		char chance=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=chance;
		
	}
}


