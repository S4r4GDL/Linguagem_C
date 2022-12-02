#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float PrecoUn, PercentComicao, TotalComicao;
	int Quantidade;
	printf("Comição de Vendedor");
	printf("\nPreço unitário do produto:");
	scanf("%f", &PrecoUn);
	printf("Quantidade:");
	scanf("%d", &Quantidade);
	printf("Percentual de comição:");
	scanf("%f", &PercentComicao);
	TotalComicao = PrecoUn* Quantidade * (PercentComicao/100);
	printf("Valor da comição a ser pago:%.2f R$", TotalComicao);
	return 0;
}
