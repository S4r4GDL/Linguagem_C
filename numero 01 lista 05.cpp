#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Senha;
	printf("Insira sua senha:");
	scanf("%d", &Senha);
	if(Senha == 4531)
	{
		printf("Acesso Permitido!");
	}
	else
	{
		printf("Acesso Negado!");
	}
	return 0;
}
