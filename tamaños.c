#include <stdio.h>

int main()
{
	int a=5;
	float b=9.5;
	char c='p';
	short d=90;
	long e=98523;
	
	printf("El valor del entero es: %d, y el tamaño en bytes es: %d \n\n",a,sizeof(a));
	printf("El valor del flotante es: %.2f, y el tamaño en bytes es: %d \n\n",b,sizeof(b));
	printf("El valor del caracter es: %c, y el tamaño en bytes es: %d \n\n",c,sizeof(c));
	printf("El valor del short es: %d, y el tamaño en bytes es: %d \n\n",d,sizeof(d));
	printf("El valor del long es: %d, y el tamaño en bytes es: %d",e,sizeof(e));
	
	getchar();
}