#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, num4, Media;
	printf(" M�dia ponderada de 4 n�meros inteiros\n");
	printf ("\n 1� N�mero:");
    scanf("%d", &num1);
    printf ("\n 2� N�mero:");
    scanf("%d", &num2);
    printf ("\n 3� N�mero:");
    scanf("%d", &num3);
    printf ("\n 4� N�mero:");
    scanf("%d", &num4);
	Media = ( num1 + num2 * 2 + num3 * 3 + num4 * 4)/10;
	printf(" \nM�dia:%d", Media);
	return 0;
}	
