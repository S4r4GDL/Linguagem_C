# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Num1, Num2;
	for(Num1=1;Num1<=10; Num1++)
	{
		printf("Tabuada do %d :", Num1);
		for(Num2=1;Num2<=10; Num2++)
		{
			printf(" %d, ", Num1 * Num2);
		}
		printf("\n");
		
	}
	return 0;
}
