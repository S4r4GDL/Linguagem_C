# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <conio.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	char Ler;
	printf("Você gosta de ler[S/N]:\n");
	scanf("%c", &Ler);
	while(Ler != 'S' && Ler != 'N')
	{
		printf("Resposta inválida, digite S ou N.");
		system ("cls");
		printf("Você gosta de ler[S/N]:\n");
		scanf("%c", &Ler);
	}
	return 0;
}
