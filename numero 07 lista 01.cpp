#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Sara Gon�alves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int  Idade, Ano;
	printf("Digite sua idade:");
	scanf("%d", &Idade);
	printf("Digite o ano atual:");
	scanf("%d", &Ano);
	printf("Voc� nasceu no ano de : %d", Ano-Idade);
	return 0;
}
