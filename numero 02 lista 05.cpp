#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Salario, NovoSalario;
	printf("Salário Atual:");
	scanf("%f", &Salario);
	NovoSalario = Salario + Salario * 0.1;
	if(Salario <= 1500)
	{
		
		printf("Salário reajustado: %.2f", NovoSalario);
	}
	else
	{
		printf("Não tem direito a aumento.");
	}
	return 0;
}
