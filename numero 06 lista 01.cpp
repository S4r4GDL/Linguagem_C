#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Sara Gon�alves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float SalBruto, ImpRenda, SalLiquido;
	ImpRenda = 20;
	printf("C�lculo do Sal�rio L�quido");
	printf("\nSal�rio bruto:");
	scanf ("%f",&SalBruto);
	SalLiquido = SalBruto - SalBruto * (ImpRenda/100);
	printf("O valor do sal�rio l�quido �:\n %.2f R$", SalLiquido );
	return 0;
}
	
