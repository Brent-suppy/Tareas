#include <stdio.h>
#include <ctype.h>

int main()
{
	char letramin, nvo;
	char letramay='A';
	int num=8;
	
	printf("La letra en inicial es: %c",letramay);
	letramin=tolower(letramay); //convierte una letra mayuscula a minuscula
	printf("\nLa letra convertida es: %c",letramin);
	
	nvo=toupper(letramin);
	printf("\nLa letra convertida es: %c",nvo);
	
		if(isdigit(num)==0)
		{
			printf("\n%d si es un numero",num);
		}
		else
			printf("\n%d no es un numero",num);
			
		if(isalnum(num)==0)
		{
			printf("\n%d es un digito o una letra",num);
		}
		else
			printf("\n%d no es ni digito ni letra",num);
	
		if(isalpha(letramay)!=0)
		{
			printf("\n%c si es una letra",letramay);
		}
		else
			printf("\n%c no es una letra",letramay);
			
		if(isgraph(letramay)!=0)
		{
			printf("\n%c tiene representacion grafica",letramay);
		}
		else
			printf("\n%c no tiene representacion grafica",letramay);
			
		if(islower(letramay)!=0)
		{
			printf("\n%c es minuscula",letramay);
		}
		else
			printf("\n%c no es minuscula",letramay);
			
		if(isprint(num)==1)
		{
			printf("\n%d se puede imprimir",num);
		}
		else
			printf("\n%d no se puede imprimir",num);
			
		if(ispunct(letramay)==1)
		{
			printf("\n%c es un caracter de puntuacion",letramay);
		}
		else
			printf("\n%c no es un caracter de puntuacion",letramay);
			
		if(isspace(letramay)==1)
		{
			printf("\n%c es un espacio en blanco",letramay);
		}
		else
			printf("\n%c no es un espacio en blanco",letramay);
			
		if(isalpha(letramin)==1)
		{
			printf("\n%c es una letra mayuscula",letramin);
		}
		else
			printf("\n%c no es una letra mayuscula",letramin);
			
	getchar();
}