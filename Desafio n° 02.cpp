# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Andar1, Andar2, Andar3, Total;
	printf("Andar 1:");
	scanf("%d", &Andar1);
	printf("Andar 2:");
	scanf("%d", &Andar2);
	printf("Andar 3:");
	scanf("%d", &Andar3);
	
	if(Andar1 > Andar2 && Andar1 > Andar3)
	{
		Total = (Andar2 + (Andar3 * 2)) * 2;
	}
	else if(Andar2 > Andar1 && Andar2 > Andar3)
	{
		Total = (Andar1 + Andar3) * 2;
	}
	else 
	{
		Total = (Andar2 + (Andar1 * 2)) * 2;
	}
	printf("Total de minutos:%d", Total);
	return 0;
	}
