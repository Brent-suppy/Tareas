#include <stdio.h>

void rotar(int []);

int n=5;
int main()
{
	int i, numeros[n];
	/*printf("\nCuantos valores va a ingresar? ");
	scanf("%d",&n);*/
	for(i=0;i<n;i++)
	{
		printf("Prebe dame el valor [%d]: ",i+1);
		scanf("%d",&numeros[i]);
	}
	rotar(numeros[n]);
	
	for(i=0;i<n;i++)
	{
		printf("\n\nEl arreglo rotado es: %d",numeros[i]);
	}
	getchar();
}

void rotar(int numeros[n])
{
	int i, temp, x;
	
	temp=numeros[n-1];
	for(i=0;i<n;i++)
	{
		x=numeros[i];
		numeros[i]=temp;
		temp=x;
	}
	
}
