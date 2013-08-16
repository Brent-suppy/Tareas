#include <stdio.h>

int primo(int numero)
{
	int i, res=0,conta;
	for(i=2;i<numero;i++)
	{
		res=numero%i;
		if(res==0)
			conta=conta++;
	}
	return conta;
}

int main()
{
	int num, resu;
	
	printf("Dame un numero: ");
	scanf("%d", &num);
	resu=primo(num);
	
	if(resu==0)
		printf("\nEl numero %d es primo",num);
	else
		printf("\nEl numero %d no es primo",num);
		
	getchar();
}