#include <stdio.h>
#include <stdlib.h>

int main()
{
	char car[5]="28";
	int valor;
	
	valor=atoi(car);
	printf("\nEl valor en caracter es: %s\tEl valor en entero es: %d",car,valor);
	
	getchar();
}