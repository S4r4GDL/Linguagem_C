#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gon�alves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int NumInteiro, Unidade, Dezena, Centena, Resto;
	printf("Informe um numero inteiro de 3 d�gitos:");
	scanf("%d", &NumInteiro);
	Centena = NumInteiro/100;
	Resto = NumInteiro%100;
	Dezena = Resto/10;
	Unidade = Resto%10;
	printf("N�mero invertido: %d%d%d", Unidade, Dezena, Centena);
	return 0;
}
