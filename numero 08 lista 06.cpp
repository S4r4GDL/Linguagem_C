# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int M1, M2, M3, M4, M5, M6;
	float PercentualFaltas;
	printf("Digites suas faltas:\n 1° Mês:\n ");
	scanf("%d", &M1);
	printf(" 2° Mês:\n");
	scanf("%d", &M2);
	printf(" 3° Mês:\n");
	scanf("%d", &M3);
	printf(" 4° Mês:\n");
	scanf("%d", &M4);
	printf(" 5° Mês:\n");
	scanf("%d", &M5);
	printf(" 6° Mês:\n");
	scanf("%d", &M6);
	Sleep (20);
	system("cls"); 
	PercentualFaltas = 100 * (M1 + M2 + M3 + M4 + M5) / 72;
	if (PercentualFaltas > 25)
	{
		printf("VOCÊ ESTÁ REPROVADO POR FALTAS.");
	}
	else if (PercentualFaltas == 25)
	{
		printf("VOCÊ ESTÁ NO LIMITE DE FALTA.");
	}
	else if (PercentualFaltas == 0)
	{
		printf("VOCÊ NÃO TEM FALTA.");
	}
	else if (PercentualFaltas < 25 && PercentualFaltas > 0)
	{
		printf("VOCÊ TEM FALTAS MAS NÃO ESTÁ NO LIMITE.");
	}
	return 0;
	}
