#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Saque, Nota100, Nota50, Nota20, Nota10, Nota5, Nota2, Nota1, Resto1, Resto2;
	printf("Informe o valor do saque:");
	scanf("%d", &Saque);
	
	Nota100 = Saque/100;
	Resto1 = Saque%100;
	Nota50 = Resto1/50;
	Resto2 = Resto1%50;
	Nota20 = Resto2/20;
	Resto1 = Resto2%20;
	Nota10 = Resto1/10;
	Resto2 = Resto1%10;
	Nota5 = Resto2/5;
	Resto1 = Resto2%5;
	Nota2 = Resto1/2;
	Nota1 = Resto1%2;
	
	printf("\nSerão Entregues as Seguintes nostas:");
	printf("\n%d de 100", Nota100);
	printf("\n%d de 50", Nota50);
	printf("\n%d de 20", Nota20);
	printf("\n%d de 10", Nota10);
	printf("\n%d de 5", Nota5);
	printf("\n%d de 2", Nota2);
	printf("\n%d de 1", Nota1);
	return 0;
}	
