# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Num, Cont, Total, Neg;
	printf("Digite seis n�meros:\n");
	scanf("%d", Num);
	Cont = 0;
	Neg = 0;
	while (Cont <= 6)
	{
		if(Num >= 0)
		{
			Total = Total + Num;
		}
		else
		{
			Neg++;
		}
		scanf("%d", Num);
		Cont++;
	}
	system ("cls");
	printf ("Soma dos positivos: %d", Total);
	printf ("Quantidade de n�meros negativos:%d", Neg);
	return 0;
}
