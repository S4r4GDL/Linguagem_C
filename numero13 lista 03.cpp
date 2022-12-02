#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
int main (){
	setlocale (LC_ALL, "Portuguese");
	int A, B, C, X1, X2;
	printf("Cálculo: Equação do segundo grau (Ax² + Bx + C = 0)");
	printf("\nInsira o valor de A:");
	scanf("%d", &A);
	printf("\nInsira o valor de B:");
	scanf("%d", &B);
	printf("\nInsira o valor de C:");
	scanf("%d", &C);
	X1 = (-B)+sqrt(pow(B, 2) - 4 * A * C)%2 * A;
	X2 = (-B)-sqrt(pow(B, 2) - 4 * A * C)%2 * A;
	printf("X':%d", X1);
	printf("X'':%d", X2);
	return 0;
}
