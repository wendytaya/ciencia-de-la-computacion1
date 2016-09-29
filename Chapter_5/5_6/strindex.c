/* 5.6*/
/* */
#include<stdio.h>
int strindex(char * s, char *t) {
	char *a=s;
	char *b,*c;
	for (;*s != '\0';s++){
		for (b=s,c=t; *c!='\0' && *b==*c;b++,c++) ;
		if (c>t && *c=='\0')
			return s-a;
		
	}

	return -1;
}
int main()
{
	char s[] = "abcdedfabcdecasa";
	char t[] = "perro";
	printf(" %d\n", strindex(s,t));
}
