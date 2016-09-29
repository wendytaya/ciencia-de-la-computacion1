#include <stdio.h>
#include <ctype.h>
int atoiv2(char *s);
int main()
{
	char s[10] = "-1564";
	
	printf( "Convirtiendo la cadena \"%s\" en un numero: %d\n", s, atoiv2(s) );
	
	return 0;
}
int atoiv_2(char *s)
{
	int n,sign;
	
	for(;isspace(*s);s++)   
		;
	sign = ( *s =='-')? -1:1;
	
	if(*s=='+' || *s=='-')
	   s++;
	for(n=0;isdigit(*s);s++)
		n = 10 *n + *s - '0';
	
	return sign * n;
}
