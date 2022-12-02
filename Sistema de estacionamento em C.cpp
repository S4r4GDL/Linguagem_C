#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int NumCarros, NumMotos, NumCaminhonetes, TotalGuardados, TotalEntrada, Op, TipoVeic;
	char Cliente[10], Placa[7], Local[5][5];
	Menu:
	printf("\t\t\t____________-Sistema de controle do estacionamento-____________\n\n\n\n");
		printf("\tMenu:\n1 - Registrar Veículo\n2 - Retirar Veículo\n3 - Balanço\n4 - Sair");
		scanf("%d", &Op);
		system("pause");
		system("cls");
		switch (Op)
		{
			case 1:
			{
				Op1:
				printf("\t\t\t____________-Sistema de controle do estacionamento-____________\n");
				printf("\t\t\t_____________-1 - Registrar Veículo-____________\n\n");
				printf("Insira o nome do cliente:\n");
				scanf(" %s", &Cliente);
				printf("Insira a placa do veículo:\n");
				scanf(" %s", &Placa);
				printf("Selecione o Tipo do veículo:\n");
				scanf(" %d", &TipoVeic);
				switch(TipoVeic)
				{
					case 1:{
						NumCarros +=1;
						
						break;
					}
					case 2:{
						NumMotos+=1;
						break;
					}
					case 3:{
						NumCaminhonetes +=1;
						break;
					}
					default:{
						printf("Opção inválida!\n");
						system("pause");
						goto Op1;
						break;		
					}
				 } 
				
				break;
			}
			case 2:
			{
				printf("\t\t\t____________-Sistema de controle do estacionamento-____________\n");
				break;
			}
			case 3:
			{
				printf("\t\t\t____________-Sistema de controle do estacionamento-____________\n");
				break;
			}
			case 4:
			{
				
				break;
			}
			default:
			{
				printf("Opção inválida!\n");
				system("pause");
				goto Menu;
				break;
			}
		}
	
	

	return 0;
}
