/* retorna la longitud */
#include <stdio.h>
#define MAXLINE 100
int getline(char *, int);
char line[MAXLINE] ;
int main() {
	int len=0;
	while((len = getline(line, MAXLINE)) != 0) {
		printf("Line: %s\n, long = %d\n", line,len);
	}
	return 0;
}
int getline(char *arr, int len){
	int l = 0;
	while((*arr = getchar()) != '\n' && *arr != EOF && l < MAXLINE)
		  arr++, l++;
	*arr = '\0';
	return l;
	
}
