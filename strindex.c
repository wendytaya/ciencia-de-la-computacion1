/*Escriba una función strindex(s, t), la cual retorne la posición de la 
ocurrencia mas a la derecha de t en s. Retorne -1 si no la encuentra. */ 
#include<stdio.h>
int strindex(char s[],char t[]);
int main()
{
	char s[] = "abcdedfabcde";
	char t[] = "c";
	printf(" %d\n", strindex(s,t));
}

int strindex(char s[],char t[]){
	int i,j,k, posicion;
	posicion = -1;
	
	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++);
		if(k>0 && t[k] == '\0')
		   posicion = i;
	}
	return posicion;
}

