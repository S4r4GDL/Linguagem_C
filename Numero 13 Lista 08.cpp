# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Num;
	Num = 5;
	printf("Números múltiplos de 5 entre 0 e 100:");
	while (Num < 101)
	{
		
		printf("%d ", Num);
		Num = Num + 5;
	}
	return 0;
}	
