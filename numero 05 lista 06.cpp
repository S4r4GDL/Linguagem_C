# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Opcao;
	float Diferenca, Digito1, Digito2, Cubo;
	Saida :
	printf("Menu de op��es:\n 1. Somar dois n�meros\n 2. Raiz quadrada de um n�mero\n 3. O cubo de um n�mero\n 4. Diferen�a do maior pelo menor\n Digite a op��o desejada:");
	scanf("%d", &Opcao);
	if (Opcao < 1 || Opcao > 4)
	{
		printf("Erro! Op��o inv�lida");
		Sleep (35);
		system("cls"); 
		goto Saida;
	}
	else if (Opcao == 1)
	{
		printf("Digite dois n�meros:\n");
		scanf("%f", &Digito1);
		scanf("%f", &Digito2);
		printf("Soma dos n�meros:%.2f", Digito1 + Digito2);
	}
	else if (Opcao == 2)
	{
		printf("Digite um n�mero:\n");
		scanf("%f", &Digito1);
		printf("Raiz quadrada: %.2f", sqrt(Digito1));
	}
	else if (Opcao == 3)
	{
		printf("Digite um n�mero:\n");
		scanf("%f", &Digito1);
		printf("Cubo:%.2f", pow(Digito1, 3));
	}
	else if (Opcao == 4)
	{
		printf("Digite dois n�meros:\n");
		scanf("%f", &Digito1);
		scanf("%f", &Digito2);
		
		if (Digito1 == Digito2)
		{
			printf("N�meros iguais!");
		}
		else if(Digito1 > Digito2)
		{
			printf("%.2f - %.2f = %.2f", Digito1, Digito2, Digito1 - Digito2);
		}
		else if (Digito1 < Digito2)
		{
			printf("%.2f - %.2f = %.2f", Digito2, Digito1, Digito2 - Digito1);
		}
}
	return 0;
	}
