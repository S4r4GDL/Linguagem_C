# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Cont;
	float Nota, Media, Soma;
	printf("Digite as notas ou 1 para sair:\n");
	scanf("%f", &Nota);
	Soma = 0;
	while (Nota != -1)
	{
		Cont++;
		Soma = Nota + Soma;
		scanf("%f", &Nota);
	}
	Media = Soma/Cont;
	printf ("Média das notas digitadas: %.1f", Media);
	return 0;
}
