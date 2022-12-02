#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float ValorAbst, ValorLitro, Total;
	printf("Litros a colocar no Tanque");
	printf("\nValor a abastecer (R$):");
	scanf("%f", &ValorAbst);
	printf("Valor do litro de combustível:");
	scanf("%f", &ValorLitro);
	Total = ValorAbst/ValorLitro;
	printf("Total a ser abastecido:%.2f litros", Total);
	
	return 0;
}
