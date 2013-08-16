//sacar la serie de fibonacci
#include<stdio.h>

int main()
{
	int num, i, a=1, b=0, suma, ant;
	printf("Hasta que numero quieres imprimir de la serie de Fibonacci => ");
	scanf("%d",&num);
	printf("\nLa serie es: \n\n");
	printf("0  1  ");
	for(i=0;i<=num;i++)
	{
		suma=b+a;
		printf("%d  ",suma);
		b=a;
		a=suma;
	}
	
	
	getchar();
	return 1;
}