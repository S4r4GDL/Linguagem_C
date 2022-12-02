#include <stdio.h>
#include <math.h>
int main(){
	int Num;
	printf("Digite um número inteiro:");
	scanf("%d", &Num);
	if(Num%2 == 0)
	{
		printf("Número %d é par", Num);
		if(Num >=0)
		{
			printf(" E positivo.");
		}
		else
		{
			printf(" E negativo.");
		}
	}
	else
	{
		printf("Número %d é ímpar", Num);
		if(Num >=0)
		{
			printf(" E positivo.");
		}
		else
		{
			printf(" E negativo.");
		}
	}
	return 0;
	}
