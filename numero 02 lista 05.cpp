#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Salario, NovoSalario;
	printf("Sal�rio Atual:");
	scanf("%f", &Salario);
	NovoSalario = Salario + Salario * 0.1;
	if(Salario <= 1500)
	{
		
		printf("Sal�rio reajustado: %.2f", NovoSalario);
	}
	else
	{
		printf("N�o tem direito a aumento.");
	}
	return 0;
}
