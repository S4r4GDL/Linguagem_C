#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int NumInteiro, Unidade, Dezena, Centena, Resto;
	printf("Informe um numero inteiro de 3 dígitos:");
	scanf("%d", &NumInteiro);
	Centena = NumInteiro/100;
	Resto = NumInteiro%100;
	Dezena = Resto/10;
	Unidade = Resto%10;
	printf("Número invertido: %d%d%d", Unidade, Dezena, Centena);
	return 0;
}
