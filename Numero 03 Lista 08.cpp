# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Numero, Cont, Soma;
	printf("Digite n�meros inteiros ou 0 para sair:\n");
	scanf("%d", &Numero);
	Soma = Numero;
	while (Numero != 0)
	{
		Cont++;
		scanf("%d", &Numero);
		Soma = Soma + Numero;
		
	}
	system ("cls");
	printf ("Foram digitados %d n�meros\n", Cont);
	printf ("A soma dos n�meros digitados � %d", Soma);
	return 0;
}
