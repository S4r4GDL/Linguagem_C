# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Num, Cont;
	Num = 1;
	printf("Produto dos números entre 1 e 6:");
	while (Cont < 7)
	{
		Num = Num * Cont ;
		Cont++;
	}
	printf("%d ", Num);
	return 0;
}	
