#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gon�alves de Lima
int main (){
	setlocale (LC_ALL, "Portuguese");
	int Quantidade, PesoMedio;
	float PrecoArroba, Total; 
	printf("\n\t  Fazenda Vista Bonita\n\tControle de Vendas de Boi");
	printf("\n\nQuantidade de bois vendidos:");
	scanf("%d", &Quantidade);
	printf("Pre�o da arroba:");
	scanf("%f", &PrecoArroba);
	printf("Peso m�dio dos bois em arroba:");
	scanf("%d", &PesoMedio);
	Total = Quantidade * PesoMedio * PrecoArroba;
	printf("%.2f R$", Total);
	return 0;
}
