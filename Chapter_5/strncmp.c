/*5_5 STRNCMP*/
#include <stdio.h>
int strncmp(char *s, char *t, int n);

int main(int argc, char *argv[]) {
	char s[]="Hola";
	char t[]="Holb";
	printf("%d", strncmp(s,t,4));
	return 0;
}
int strncmp(char *s, char *t, int n){
	for (; *s==*t;s++,t++)
		 if(*s =='\0' || --n<=0)
			return 0;
		 return *s-*t;
}
/*#include <stdio.h>
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
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[11] = "Hola ";
	char s2[6] = "amigos";
	
	printf( "s1=%s\t", s1 );
	printf( "s2=%s\n", s2 );
	strcat( s1, s2 );
	printf( "s1=%s\n", s1 );
	
	return 0;
}*/
