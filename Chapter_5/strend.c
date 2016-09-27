/*ejericio 5.4/
/*Write the function strend(s,t), which returns 1 if the string t occurs 
at the end of the string s, and zero otherwise.*/

#include<stdio.h>

int strend(char s[],char t[]){
	int i,j,k, posicion;
	posicion = -1;
	
	for(i=0;s[i]!='\0';i++){
		for(j=i,k=0;t[k]!='\0' && s[j]==t[k];j++,k++);
		if(k>0 && t[k] == '\0')
		   posicion = 0;
		
	}
	return -1;
}


int main()
{
	char s[] = "abcdedfabcdecasa";
	char t[] = "perro";
	printf(" %d\n", strend(s,t));
}


