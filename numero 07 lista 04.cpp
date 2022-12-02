#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float CustoBez, DesVacina, Alimentacao, TotalDes, ValorBoi, LucroVenda, LucroCustoTotal, LucroMensal;
	printf("\n\tFazenda Vista Bonita\n\tControle de Recria");
	printf("\n\nCusto do Bezerro:");
	scanf("%f", &CustoBez);
	printf("\nDespesa com alimentação:");
	scanf("%f", &Alimentacao);
	printf("\nDespesa com vacina:");
	scanf("%f", &DesVacina);
	printf("\nValor da venda do boi:");
	scanf("%f", &ValorBoi);
	TotalDes = CustoBez + DesVacina + Alimentacao;
	LucroVenda = ValorBoi - TotalDes;
	LucroCustoTotal =  LucroVenda/TotalDes*100;
	LucroMensal = LucroCustoTotal/12;
	printf("\nLucro com a venda: R$ %.2f", LucroVenda);
	printf("\n%% de lucro sobre custo total:%.2f %%", LucroCustoTotal);
	printf("\n%% lucro mensal:%.2f %%", LucroMensal);
	return 0;
}
