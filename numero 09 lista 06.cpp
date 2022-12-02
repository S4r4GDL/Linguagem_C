# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float IMC, Peso, Altura;
	printf("\n\tConsulte seu IMC:\n\nPeso:");
	scanf("%f", &Peso);
	printf("Altura:");
	scanf("%f", &Altura);
	IMC = Peso / pow(Altura, 2);
	
	if (IMC < 17)
	{
		printf(" IMC: %.2f \n Muito abaixo do peso", IMC);
	}
	else if (IMC > 17 && IMC <= 18.49)
	{
		printf(" IMC: %.2f \n Abaixo do peso", IMC);
	}
	else if (IMC > 18.49 && IMC <= 24.99)
	{
		printf(" IMC: %.2f \n Peso normal", IMC);
	}
	else if (IMC > 24.99 && IMC <= 29.99)
	{
		printf(" IMC: %.2f \n Acima do peso", IMC);
	}
	else if (IMC > 29.99 && IMC <= 34.99)
	{
		printf(" IMC: %.2f \n Obesidade I", IMC);
	}
	else if (IMC > 34.99 && IMC <= 39.99)
	{
		printf(" IMC: %.2f \n Obesidade II", IMC);
	}
	else if (IMC > 39.99)
	{
		printf(" IMC: %.2f \n Obesidade III (Mórbida)", IMC);
	}
	return 0;
	}
