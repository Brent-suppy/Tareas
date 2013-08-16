#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R 6 //r es una macro que en el precompilado lo remplaza donde encuentra R por 6
#define C 6

void rellenar (int [][C]); //como es un prototipo no se lo pone nombre al arreglo, tampoco importa el tamaño
void imprimir (int [][C]); //si se le indica las dimensiones y no se puede omitir el numero de columnas
void dupmat (int n1,int n2,int n3,int n4,int [][C], int [][C]);

void main()
{
	int a[R][C] = {0}, b[R][C]={0};
	rellenar(a);
	puts("Matriz A:");
	imprimir(a); //solo se indica el nombre del arreglo
	system("pause"); //pausa el programa hasta que se le de enter
	rellenar(b);
	puts("\nMatriz B:");
	imprimir(b);
	dupmat(1,4,1,3,a,b);
	puts("\nMatriz nueva:");
	imprimir(a);
	
}

void rellenar (int a[R][C])
{
	int i, j;
	
	srand(time(NULL)); //toma la hora del sistema actual pasandole time(NULL) y con esa creo los numero aleatorios
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			a[i][j]=rand() % 10; //ran genera numeros aleatorios, %10 genera nums aleatorios entre el 0-9
		}
	}
}

void imprimir (int a[R][C])
{
	int i, j;
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d\t",a[i][j]);
		}
	puts("");
	}
}

void dupmat(int n1,int n2,int n3,int n4,int A[R][C],int B[R][C])
{
	int i, j;
	for(i=n1;i<n2;i++)
	{
		for(j=n3;j<n4;j++)
		{
			A[i][j]=B[i][j];
		}
	}
}