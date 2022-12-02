# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int i, cont, t;
	double n;
	cont = 0;
	t = 0;
	printf("Digite um numero positivo e inteiro ou 0 para sair\n");
	scanf("%lf", &n);
	do
	{
		if(n > 0)
		{
			for(i=1; t < n; i+=2)
			{
				t = i+t;
				cont++;
			} 
			if(sqrt(n) == cont)
			{
				printf("O número é um quadrado perfeito\n");
				
			}
			else
			{
				printf("O número não é um quadrado perfeito\n");	
			}
		}
		else if(n < 0)
		{
			printf("Número inválido!\n");
		}
			system("pause");
			system("cls");
			printf("Digite um numero positivo e inteiro ou 0 para sair\n");
			scanf("%lf", &n);
	} while(n!=0);
	return 0;
}
	

