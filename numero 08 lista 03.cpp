#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float PrecoUn, PercentComicao, TotalComicao;
	int Quantidade;
	printf("Comi��o de Vendedor");
	printf("\nPre�o unit�rio do produto:");
	scanf("%f", &PrecoUn);
	printf("Quantidade:");
	scanf("%d", &Quantidade);
	printf("Percentual de comi��o:");
	scanf("%f", &PercentComicao);
	TotalComicao = PrecoUn* Quantidade * (PercentComicao/100);
	printf("Valor da comi��o a ser pago:%.2f R$", TotalComicao);
	return 0;
}
