/* Escriba un programa que reciba un string de la forma "123.45e-6"
 y devuelva su correspondiente número. */
#include <stdio.h>
#include <ctype.h>
/*  ATOF Convierte una cadena a su valor numerico  */
double atof(char []);

int main() {
	char src[] = "123.45E-6";
	printf("string: %s, Valor numerico: %f", src, atof(src));
	return 0;
}

double atof(char s[]){
	double val, power;
	int i, sign, pow_sign, pow_val;
	double pow=1;
	for (i = 0; isspace(s[i]); i++) ; /*isspace comprueba si un caracter es de tipo espaco */
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++) /*isdigit comprueba si un caracter es un digito 0-9*/
		 val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
			 i++;
	for (power = 1.0; isdigit(s[i]); i++) {
			 val = 10.0 * val + (s[i] - '0');
			 power *= 10.0;                     /*decimales*/     
		 }
	if(s[i] == 'E' ||s[i]=='e'){
		i++;
		pow_sign = (s[i] == '-') ? -1 : 1;
		if(s[i] == '-' || s[i] == '+')
		   i++;
		for(pow_val = 0;isdigit(s[i]); i++) 
			pow_val = 10 * pow_val + (s[i]-'0');
			while(pow_val-- > 0) {
				pow *= 10;
			 }
			return pow_sign > 0 ? (sign*val/power)*pow : (sign*val/power)/pow;
	}
	else
	   return sign * val / power;
}
