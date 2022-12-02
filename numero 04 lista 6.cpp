# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Combustivel, Desconto;
	float Litros, Total;
	Saida:
	printf("Digite a quantidade de litros abastecidos:");
	scanf("%f", &Litros);
	printf("Escolha o tipo de combustível (1 - Etanol / 2 - Gasolina):");
	scanf("%d", &Combustivel);
	
	if(Combustivel != 1 &&  Combustivel != 2)
	{
		printf("Combustível Inválido!\n");
		Sleep (40);
		system("cls"); 
		goto Saida;
	}
	else
	{
	  if (Combustivel == 1 && Litros <= 20)
	{
		Total = Litros * 4.69 - Litros * 4.69 * 0.03;
		Desconto = 3;
	}
	else if (Combustivel == 1 && Litros > 20)
	{
		Total = Litros * 4.69 - Litros * 4.69 * 0.050;
		Desconto = 5;
	}
	else if (Combustivel == 2 && Litros <= 20)
	{
		Total = Litros * 7.21 - Litros * 7.21 * 0.04;
		Desconto = 4;
	}
	else if (Combustivel == 2 && Litros > 20)
	{
		Total = Litros * 7.21 - Litros * 7.21 * 0.06;
		Desconto = 6;
	}

	printf("Total a pagar com %d %% de desconto: %.2f ", Desconto, Total);
	}
	return 0;
}
