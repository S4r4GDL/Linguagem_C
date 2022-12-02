#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define T 3
int main(){
	setlocale(LC_ALL, "Portuguese");
	In:
	long long int i, Num, Total;
	printf("Digite um número:\n");
	scanf("%lld", &Num);
	If:
	if(Num%2==0)
	{
		for(i=Num; i> 1; i--)
		{
			Total = Num/2;
			printf("Par:   %lld / 2 = %lld\n", Num, Total);
			Num = Total;
			
			goto If;
			
		}
	}
	else if (Num<1)
	{
		printf("Número inválido\n");
		system("pause");
		system("cls");
		goto In;
	}
	else{
		
		for(i=Num; i> 1; i--)
		{
			Total = T*Num+1;
			printf("Ímpar:   %lld * %lld + 1 = %lld\n", T, Num, Total);
			Num = Total;
			goto If;
		}
		
	}
	printf("Resultado final:%d\n", Total);
	system("pause");
	return 0;
}
