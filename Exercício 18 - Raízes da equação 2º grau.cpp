#include <stdio.h>
#include <math.h>
int main()
{
    float A, B, C, X1, X2, Delta;
	printf("Digite o valor do termo a: ");
	scanf("%f", &A);
	printf("\nDigite o valor do termo b: ");
	scanf("%f", &B);
	printf("\nDigite o valor do termo c: ");
	scanf("%f", &C);
	Delta = pow(B, 2) - (4 * A * C);
	printf("O valor de delta � %.2f\n", Delta);
	X1 = (-B)+sqrt(pow(B, 2) - 4 * A * C)/2 * A;
	X2 = (-B)-sqrt(pow(B, 2) - 4 * A * C)/2 * A;
	if(Delta>0)
	{
	    printf("A equa��o possui 2 ra�zes reais:\n");	
	    printf("X1 = %.2f\n", X1);
	    printf("X2 = %.2f", X2);
	}
	else if(Delta==0)
	{
	    printf("A equa��o possui 1 ra�z real:\n");	
	    printf("X1=");
	    printf("X2 = %.2f", X2);
	}
	else
	{
	    printf("A equa��o n�o possui ra�zes reais.");	
	}
	    
	

return 0;
}
