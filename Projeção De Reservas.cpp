# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <conio.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int i;
	float Salario, ReservaMes, ProjecaoMes, PeriodoMes;
	printf("\n\tProje��o da reserva de emerg�ncia\n\n Sal�rio(a m�s):\n");
	scanf("%f", &Salario);
	printf("\nPercentual a reservar:\n");
	scanf("%f", &ReservaMes);
	printf("\nPeriodo da reserva(meses):\n");
	scanf("%f", &PeriodoMes);
	ProjecaoMes = (Salario - Salario * (ReservaMes/100));
	for (i = 1; i == PeriodoMes; i++)  
	{
		ProjecaoMes = (Salario - Salario * (ReservaMes/100)) * i;
		printf("Total Da reserva no %d � m�s:\n %.2f", i, ProjecaoMes);
	}
	
	return 0;
	}
