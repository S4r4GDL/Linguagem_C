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
	printf("Moedas:\n\n 1 � Franco su��o\n 2 � Libra Esterlina\n 3 � D�lar\n 4 � Marco Alem�o\n\n");
	scanf("%d", &Opcao);
	if(Opcao <1 && Opcao > 4)
	{
		printf("Op��o Inv�lida!");
		Sleep (25);
		system("cls"); 
		goto Saida;
	}
	else if(Opcao == 1)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 4.98;
		printf("1 � Franco su��o\n");
	}
	else if(Opcao == 2)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 6.01;
		printf("2 � Libra Esterlina\n");
	}
	else if(Opcao == 3)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 4.78;
		printf("3 � D�lar\n");
	}
	else if(Opcao == 4)
	{
		Sleep (25);
		system("cls");
		ValorConvertido = ValorReal / 2.64;
		printf("4 � Marco Alem�o\n");
	}
	printf("Valor Convertido: %.2f", ValorConvertido);
	return 0;
	}
