# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Soma, i;
	for (i=3; i<=10; i++)
	{
		Soma = i + Soma;
	}
	printf ("Soma dos números entre 3 e 10: %d", Soma);
	return 0;
}
