#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int AnoAtual, AnoNascimento;
	printf("Ano atual:");
	scanf("%d", &AnoAtual);
	printf("Ano de nascimento:");
	scanf("%d", &AnoNascimento);
	if(AnoAtual-AnoNascimento>=16)
	{
		printf("Poder� Votar em %d", AnoAtual);
	}
	else
	{
		printf("N�o poder� votar em %d", AnoAtual);
	}
	return 0;
}
