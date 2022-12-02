#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, num4, Media;
	printf(" Média ponderada de 4 números inteiros\n");
	printf ("\n 1° Número:");
    scanf("%d", &num1);
    printf ("\n 2° Número:");
    scanf("%d", &num2);
    printf ("\n 3° Número:");
    scanf("%d", &num3);
    printf ("\n 4° Número:");
    scanf("%d", &num4);
	Media = ( num1 + num2 * 2 + num3 * 3 + num4 * 4)/10;
	printf(" \nMédia:%d", Media);
	return 0;
}	
