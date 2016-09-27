/* Ejercicio 5-5 STRNCPY*/ 
#include <stdio.h>
void strncpy(char *s, char *t, int n);
void strcat(char *k, char *l, int n);

int main(){
	char s[]="asdg";
	char t[100];
	strncpy(s, t, 2);
	printf(t);
}
void strncpy(char *s, char *t, int n){
	while(n--)
		  *t++= *s++;
	
	*t = '\0';
}

