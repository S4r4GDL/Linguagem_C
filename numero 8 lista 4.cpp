#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include <windows.h>
//Sara Gon�alves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float ValorReais, EUA, Franca, China;
	printf("\n\tPrograma Viagem dos sonhos\n\tConvers�o de Moedas\n\nValor em Reais:");
	scanf("%f", &ValorReais);
	EUA = ValorReais /5.08*0.5;
	Franca = ValorReais /5.36*0.2;
	China = ValorReais /0.76*0.3;
	Sleep (100);
	system("cls"); 
	printf("\n\tPrograma Viagem dos sonhos\n\tConvers�o de Moedas");
	printf("\nEUA: %.2f D�lares", EUA);
	printf("\nFran�a: %.2f Euros", Franca);
	printf("\nChina: %.2f Yuan", China);
	
	return 0;
}
