#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Num, i, Total;
	for(i=1; i<=10; i++)
	{
		Total = 9 * i;
		printf(" %d * 9 = %d\n", i, Total);
	}
	return 0;
	
}
