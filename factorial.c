//Programa que saque el factorial de un numero
#include<stdio.h>

int num;

int main()
{
	int i, fijo=1;
	printf("Ingresa el numero para determinar su factorial => ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fijo=fijo*i;
	}
	printf("El factorial es: %d",fijo);
	
	getchar();
	return 1;
}