# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <conio.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	char Ler;
	printf("Voc� gosta de ler[S/N]:\n");
	scanf("%c", &Ler);
	while(Ler != 'S' && Ler != 'N')
	{
		printf("Resposta inv�lida, digite S ou N.");
		system ("cls");
		printf("Voc� gosta de ler[S/N]:\n");
		scanf("%c", &Ler);
	}
	return 0;
}
