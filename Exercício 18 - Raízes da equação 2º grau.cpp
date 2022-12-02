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
	printf("O valor de delta é %.2f\n", Delta);
	X1 = (-B)+sqrt(pow(B, 2) - 4 * A * C)/2 * A;
	X2 = (-B)-sqrt(pow(B, 2) - 4 * A * C)/2 * A;
	if(Delta>0)
	{
	    printf("A equação possui 2 raízes reais:\n");	
	    printf("X1 = %.2f\n", X1);
	    printf("X2 = %.2f", X2);
	}
	else if(Delta==0)
	{
	    printf("A equação possui 1 raíz real:\n");	
	    printf("X1=");
	    printf("X2 = %.2f", X2);
	}
	else
	{
	    printf("A equação não possui raízes reais.");	
	}
	    
	

return 0;
}
