# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Idade;
	printf("Digite sua idade:\n");
	scanf("%d", &Idade);
	while (Idade < 0 || Idade > 150)
	{
		if (Idade < 0)
		{
			printf("Erro: idade menor que zero.");
		}
		else
		{
			printf("Erro: idade maior que 150");
		}
		Sleep (200);
		system ("cls");
		printf("Digite sua idade:\n");
		scanf("%d", &Idade);
	}
	system ("cls");
	return 0;
}
