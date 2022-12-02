#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int  Idade, Ano;
	printf("Digite sua idade:");
	scanf("%d", &Idade);
	printf("Digite o ano atual:");
	scanf("%d", &Ano);
	printf("Você nasceu no ano de : %d", Ano-Idade);
	return 0;
}
