# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Idade;
	printf("Digite sua idade:");
	scanf("%d", &Idade);
	if (Idade >= 0 && Idade < 15)
	{
		printf("Faixa Et�ria: Crian�a");
	}
	else if(Idade >= 15 && Idade <= 29)
	{
		printf("Faixa Et�ria: Jovem");
	}
	else if (Idade >= 30 && Idade <= 59)
	{
		printf("Faixa Et�ria: Adulto");
	}
	else if (Idade >= 60)
	{
		printf("Faixa Et�ria: Idoso");
	}
	
	return 0;
}
