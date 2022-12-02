#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Quantidade;
	float Total; 
	printf("Quantidade:");
	scanf("%d", &Quantidade);
	if(Quantidade <12)
	{
		Total = Quantidade * 1.3;
		printf("Total da compra: R$ %.2f ", Total);
	}
	else
	{
		Total = Quantidade * 1;
		printf("Total da compra: R$ %.2f ", Total);
	}
	return 0;
}
