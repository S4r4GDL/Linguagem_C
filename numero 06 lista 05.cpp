#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Extra, Total, SalarioHora, SalarioSemExtra;
	int Horas;
	printf("Horas Trabalhadas:");
	scanf("%d", &Horas);
	printf("Sal�rio por Hora:");
	scanf("%f", &SalarioHora);
	if(Horas > 160)
	{
		Extra = Horas - 160;
		SalarioSemExtra = (Horas - Extra) * SalarioHora;
		Total = SalarioSemExtra + Extra * (SalarioHora + SalarioHora * 0.5);
		printf("Sal�rio total a receber: R$ %.2f", Total);
		
	}
	else
	{
		Total = Horas * SalarioHora;
		printf("Sal�rio total a receber: R$ %.2f", Total);
	} 
	return 0;
}
