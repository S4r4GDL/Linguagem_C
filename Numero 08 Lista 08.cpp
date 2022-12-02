# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Idade;
	printf("Digite sua idade:\n");
	scanf("%d", &Idade);
	while(Idade < 0)
	{
		printf("Idade inválida.\n");
		system ("cls");
		printf("Digite sua idade:\n");
		scanf("%d", &Idade);
	}
	return 0;
}
