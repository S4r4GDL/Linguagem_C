#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	float ValorProduto, ValorDesconto;
	printf("Desconto do produto");
	printf("\nValor do produto:");
	scanf("%f", &ValorProduto);
	ValorDesconto = ValorProduto - ValorProduto * 0.09;
	printf("Valor do produto com desconto:%.2f R$", ValorDesconto);
	return 0;
}
