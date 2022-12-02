# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Numero, Cont, Soma;
	printf("Digite números inteiros ou 0 para sair:\n");
	scanf("%d", &Numero);
	Soma = Numero;
	while (Numero != 0)
	{
		Cont++;
		scanf("%d", &Numero);
		Soma = Soma + Numero;
		
	}
	system ("cls");
	printf ("Foram digitados %d números\n", Cont);
	printf ("A soma dos números digitados é %d", Soma);
	return 0;
}
