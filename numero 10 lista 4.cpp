#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int NumInteiro, Unidade, Dezena, Centena, Resto, Soma, Digito, InvSoma, InvCentena, InvDezena, InvUnidade, InvResto;
	printf("Número da conta:");
	scanf("%d", &NumInteiro);
	Centena = NumInteiro/100;
	Resto = NumInteiro%100;
	Dezena = Resto/10;
	Unidade = Resto%10;
	Soma = Unidade + (Dezena*10) + (Centena*100) + (Unidade*100) + (Dezena*10) + Centena;
	InvCentena = Soma /100;
	InvResto = Soma %100;
	InvDezena =InvResto/10;
	InvUnidade = InvResto%10;
	Digito = InvCentena +  InvDezena * 2 + InvUnidade * 3;
	Digito = Digito%10;
	printf("Dígito verificador: %d", Digito);
	return 0;
}
