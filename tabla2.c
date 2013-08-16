#include <stdio.h>

int main()
{
	int num, i, mult;
	printf("Dame el numero del que deseas ver la tabla: ");
	scanf("%d",&num);
	printf("\n\tLa tabla del %d es : \n\n",num);
	for(i=1;i<=10;i++)
	{
		mult=num*i;
		printf("\t\t%d x %d = %d\n",num,i,mult);
	}
	getchar();
}