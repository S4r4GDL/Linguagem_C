# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Opcao;
	float ValorReal, ValorConvertido;
	Saida:
	printf("Valor em reais:");
	scanf("%f", &ValorReal);
	printf("Moedas:\n\n 1 – Franco suíço\n 2 – Libra Esterlina\n 3 – Dólar\n 4 – Marco Alemão\n\n");
	scanf("%d", &Opcao);
	if(Opcao <1 && Opcao > 4)
	{
		printf("Opção Inválida!");
		Sleep (25);
		system("cls"); 
		goto Saida;
	}
	else if(Opcao == 1)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 4.98;
		printf("1 – Franco suíço\n");
	}
	else if(Opcao == 2)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 6.01;
		printf("2 – Libra Esterlina\n");
	}
	else if(Opcao == 3)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 4.78;
		printf("3 – Dólar\n");
	}
	else if(Opcao == 4)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 2.64;
		printf("4 – Marco Alemão\n");
	}
	printf("Valor Convertido: %.2f", ValorConvertido);
	return 0;
	}
