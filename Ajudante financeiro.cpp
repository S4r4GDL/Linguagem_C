#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	double Salario, SalarioI, Pagar, Economia, Total = 0, Total2 = 0, Soma = 0;
	int Op2, Op, Tempo, i, cont = 1;
	Op:
		system("cls");
		printf("-----------MENU-----------\n\n 1 - Contas a pagar\n 2 - Economias\n 3 - Relatório\n 4 - Sair\n");
		scanf("%d",&Op);
		system("cls");
		switch(Op)
		{
			case 1:{
				Caso1:
				system("cls");
				printf("-----------1 - Contas a pagar-----------\n Insira seu salário do mês ou 0 para voltar ao menu inicial:\n");
				scanf("%lf", &Salario);
				if(Salario > 0 )
				{
					SalarioI = Salario;
					printf("Insira os valores das suas contas a pagar ou 0 pra continuar:\n");
					do{
						printf("\nConta %d:\n", cont);
						scanf("%lf", &Pagar);
						Soma += Pagar; 
						cont++;
					}while(Pagar != 0);
					printf("Total a ser pago: R$ %2.lf\n", Soma);
					Total = Salario - Soma;
					if( Salario >= Soma )
					{
						printf("Restará: R$ %2.lf do seu salário se pagar todas as contas.\n", Total);
						system("pause");	
					}
					else
					{
						printf("Faltará: R$ %2.lf do seu salário se pagar todas as contas.\n", Total);
						system("pause");
					}
				goto Caso1;
				}
				system("pause");
				goto Op;
				
				break;
			}
			case 2:{
				Caso2:
					system("cls");
					printf("-----------2 - Economias-----------\nInsira quanto pretente economizar ou 0 para voltar ao menu inicial:\n");
					scanf("%lf", &Economia);
					if(Economia > 0)
					{
						printf("Durante quantos meses deseja reservar a quantia:\n");
						scanf("%d", &Tempo);
						for (i = 1; Tempo >= i; i++)
						{
							Total2 += Economia;
							printf("Total das economias no %d º mês: R$ %2.lf\n", i, Total2); 
						}
						
					}
					else{
						goto Op;
					}
					system("pause");
					goto Caso2;
					break;
			}
			case 3:{
				
				printf("-----------3 - Relatório-----------\n 1 - Seu salário é de: R$ %2.lf\n"
				" 2 - O total de suas contas a pagar este mês é de : R$ %2.lf\n"
				"3 - Relativo do salário é de: R$ %2.lf\n"
				"4 - Total final de reserva em %d meses: R$ %2.lf\n Digite 0 para voltar ao menu inicial ou qualquer tecla para sair\n", SalarioI, Soma, Total, i,  Total2);
				scanf("%d", &Op2);
				if( Op2 == 0 )
				{
					goto Op;
				}
				
				break;
			}
			case 4:{
				break;
			}
			default:
			{
				printf("Opção inválida! Volte ao menu inicial.");
				system("pause");
				system("cls");
				goto Op;
				break;
			}
		}
		system("pause");
		system("cls");
		
	
	return 0;
}
