#include <stdio.h>

char lower(char *c){
		
	if (*c>='A' && *c<='Z')
		return *c+ 'a'-'A';
	else
		return *c;
	
	
}
int main() {
	char c= {'B'};
	printf("%c",lower(&c));
	
	return 0;
}


/*#include <stdio.h>
#define funcion (c>='A' && c<='Z'? c+ 'a'-'A':c) 
int main() {
	int  c={'B'};
	printf("%c",lower(c));
}

int lower(int c){
	return funcion;
}
*/
