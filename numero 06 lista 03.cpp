#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
//Sara Gon�alves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, num3, num4, Total;
	int Cont;
	printf("Opera��es com 4 numeros");
	printf ("\nN�mero 1:");
    scanf("%f", &num1);
    printf ("N�mero 2:");
    scanf("%f", &num2);
    printf ("N�mero 3:");
    scanf("%f", &num3);
    printf ("N�mero 4:");
    scanf("%f", &num4);
    Total = pow(num1, 2) + pow(num2, 2) + pow(num3, 2) + pow(num4, 2);
    printf("O resultado �: %.0f", Total);
    
    
    
	return 0;
}	
