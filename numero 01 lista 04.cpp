#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gonçalves de Lima
int main (){
	setlocale (LC_ALL, "Portuguese");
	int Quantidade, PesoMedio;
	float PrecoArroba, Total; 
	printf("\n\t  Fazenda Vista Bonita\n\tControle de Vendas de Boi");
	printf("\n\nQuantidade de bois vendidos:");
	scanf("%d", &Quantidade);
	printf("Preço da arroba:");
	scanf("%f", &PrecoArroba);
	printf("Peso médio dos bois em arroba:");
	scanf("%d", &PesoMedio);
	Total = Quantidade * PesoMedio * PrecoArroba;
	printf("%.2f R$", Total);
	return 0;
}
