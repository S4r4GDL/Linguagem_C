# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Num, Cont, Fatorial;
	Cont = 1;
	printf("Digite o número para cálcular o fatorial:");
	scanf("%d", &Num);
	Fatorial = Num;
	while (Cont < Fatorial)
	{
		Num = Num * Cont ;
		Cont++;
	}
	printf("%d ", Num);
	return 0;
}	
