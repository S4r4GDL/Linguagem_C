#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Sara Gon�alves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Cotacao, ValorUS, Convercao;
	printf("Conversor de dolar para real");
	printf("\nCota��o:");
	scanf("%f", &Cotacao);
	printf("Valor em US$:");
	scanf("%f", &ValorUS);
	Convercao = ValorUS / Cotacao;
	printf("Valor em R$:%.2f", Convercao);
	return 0;
}	
