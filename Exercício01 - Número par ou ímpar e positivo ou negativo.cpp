#include <stdio.h>
#include <math.h>
int main(){
	int Num;
	printf("Digite um n�mero inteiro:");
	scanf("%d", &Num);
	if(Num%2 == 0)
	{
		printf("N�mero %d � par", Num);
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
		printf("N�mero %d � �mpar", Num);
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
