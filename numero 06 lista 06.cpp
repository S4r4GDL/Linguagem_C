# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float M3, Total;
	printf("Digite o consumo de água da residência:");
	scanf("%f", &M3);
	
	if (M3 > 100)
	{
		Total = 20 + 140 + ((M3 - 100)*5) + 7;
	}
	else if (M3 < 101 && M3 > 30)
	{
		Total = (M3 - 20)*2 + 7;
	}
	else if(M3 < 31 && M3 > 10)
	{
		Total = (20 - M3 *1) + 7;
	}
	else 
	{
		Total = 7;
	}
	
	printf("%.2f", Total);
	return 0;
	}
