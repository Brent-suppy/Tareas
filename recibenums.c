#include<stdio.h>

int main()
{
	int num, i, suma=0, numsig;
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&numsig);
		suma=numsig+suma;
	}
	
	printf("\n\t%d",suma);
	
	getchar();
}