#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	float A, B, C, Delta, X1, X2;
	printf("Digite Tr�s n�meros inteiros:\n\nA:");
	scanf("%f", &A);
	printf("B:");
	scanf("%f", &B);
	printf("C:");
	scanf("%f", &C);
	Delta = (pow(B, 2) - (4 * A * C));
	
	if(A != 0 && Delta > 0)
	{
		X1 = (- B + sqrt(Delta))/ (2 * A);
		X2 = (- B - sqrt(Delta))/ (2 * A);
		printf ("\nDuas Ra�zes s�o X1: %.2f e X2: %.2f%", X1, X2);
		
	}
	else if (A == 0)
	{
		printf("N�o � equa��o do segundo grau!");
	}
	else if(Delta < 0)
	{
		printf("N�o h� ra�zes reais!");
	}
	return 0;
}
