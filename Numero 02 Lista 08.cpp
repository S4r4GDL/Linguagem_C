# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Numero, Cont;
	printf("Digite n�meros inteiros ou 0 para sair:\n");
	scanf("%d", &Numero);
	while (Numero != 0)
	{
		Cont++;
		scanf("%d", &Numero);
	}
	system ("cls");
	printf ("Foram digitados %d n�meros", Cont);
	return 0;
}
