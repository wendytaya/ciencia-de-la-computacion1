/*ejercicio 5.3 */
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


/*#include <stdio.h>
void strad(char k[], char l[]);
int main() {
char s[20]="123";
char t[5]="4567";
strad(s,t);
printf ("%s\n",s);
}

void strad(char k[], char l[]){
int i,j;
i=j=0;
while(k[i] !='\0')
i++;
while((k[i++] =l[j++]) != '\0');
}
*/
