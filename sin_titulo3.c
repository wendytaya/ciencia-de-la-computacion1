/* Escriba una función recursiva que reciba un string y devuelva el string
 invertido (sin utilizar la libreria string.h).*/
#include <stdio.h>
int invertir (int[], int n);


int main() {
	int arreglo[]={9,0,5,1};
	
	invertir(arreglo,4);
	printf("%d\n",invertir(arreglo,4));
}

int invertir (int a[],int n){
	int i=0;
	for(i<n/2;i++;){
		int chance=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=chance;
		
		}
	return  a[i];
}



