#include <stdio.h>
#include <string.h>

int main()
{
	char nombre[20];
	char apellido[]="esparza";
	strcpy(nombre, "Brenda");
	printf("%s\n",nombre);
	strcat(nombre,apellido);
	printf("%s\n",nombre);
	printf("%s\n",apellido);
	
	getchar();
}