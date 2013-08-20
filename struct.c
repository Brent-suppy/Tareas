#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct prebes
{
	int semestre;
	char nombre[50];
	int edad;
	float promedio;
	char sexo;
};

int main()
{
	struct prebes generacion;
	generacion.semestre=7;
	strcpy(generacion.nombre,"Brenda");
	generacion.edad=20;
	generacion.promedio=8.03;
	generacion.sexo='F';
	
	printf("\nSemestre: %d",generacion.semestre);
	printf("\nNombre: %s",generacion.nombre);
	printf("\nEdad: %i",generacion.edad);
	printf("\nPromedio: %.2f",generacion.promedio);
	printf("\nSexo: %c",generacion.sexo);
	return 0;
}
