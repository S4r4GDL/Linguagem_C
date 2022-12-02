#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float SalBruto, ImpRenda, SalLiquido;
	ImpRenda = 20;
	printf("Cálculo do Salário Líquido");
	printf("\nSalário bruto:");
	scanf ("%f",&SalBruto);
	SalLiquido = SalBruto - SalBruto * (ImpRenda/100);
	printf("O valor do salário líquido é:\n %.2f R$", SalLiquido );
	return 0;
}
	
