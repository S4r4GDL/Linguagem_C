# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float VA1, VA2;
	printf("Digite sua nota da 1a VA:\n");
	scanf("%f", &VA1);
	while (VA1 < 0 || VA1 > 10)
	{
		printf("Nota inv�lida!");
		Sleep (200);
		system ("cls");
		printf("Digite sua nota da 1a VA:\n");
		scanf("%f", &VA1);
	}
	VA2 = (30-(VA1*2))/3;
	printf("Voc� precisar� tirar %.1f na 2a VA para passar de ano", VA2);
	return 0;
}
