/*Ejercicio 5_5 STRNCAT*/
/*Añade una copia de la cadena apuntada por s2 (incluyendo el carácter nulo) 
al final de la cadena apuntada por s1. */
#include <stdio.h>
void strcat(char *k, char *l, int n){
	while(*k !='\0')
		  k++;
	k--;
	while (--n>=0){
		*k++ =*l++;
		
	*k='\0';
	}
}
int main(int argc, char *argv[]) {
	char s[20]="123";
	char t[5]="4567";
	strcat(s,t,3);
	printf("%s\n",s);
	return 0;
}
/*
#include <stdio.h>
void strad (char *s, char *t);
int main() {
	char s[20]="123";
	char t[5]="4567";
	strad(s,t);
	printf ("%s\n",s);
	
}
void strad (char *k, char *l){
	
	while(*k !='\0')
		  k++;
	while ((*k =*l) != '\0'){
		k++;
		l++;
	}
	
}
*/
