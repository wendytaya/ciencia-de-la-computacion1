#include <stdio.h>
void reverse(char * str);
int len(char[]);
int main() {
	char arreglo[]="Hola";
	
	reverse(arreglo);
	/*printf("%c\n",invertir(arreglo,4));*/
	printf(arreglo);
	return 0;
}

int len(char s[]){
	int i; 
	for (i=0;s[i]!='\0';i++);
	return i;
}
			
void reverse(char * s) {
	char *last = s + len(s) -1;
	char *first=s,c;
	
	for(;first <= last;first++,last--){
		c = *first;
		*first = *last;
		*last=c;
	}
}
