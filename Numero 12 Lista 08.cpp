# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Num;
	Num = 100;
	printf("Números pares de 100 a 140\n");
	while (Num < 141)
	{
		
		printf("%d ", Num);
		Num = Num + 2;
	}
	return 0;
}	
