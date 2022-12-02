//SARA GONÇALVES DE LIMA 01/11/2022
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define TAM 10
#define TAMVET 10
typedef char String[TAMVET];
int main(){
	setlocale(LC_ALL,"Portuguese");
	String Janela[TAM], Corredor[TAM];
	int i, flag=0, Opcao, IndicePol, j; 
	char  Local;
	for(i=0;i<TAM;i++){
		  strcpy(Janela[i],"Livre");
		  strcpy(Corredor[i],"Livre");
	}
	do{
		printf("\tViagem Bem\n\tVenda on-line\n1. Vender Passagem.\n2. Mapa de ocupações do ônibus.\n3. Encerrar.\nDigite a opção desejada:");
		scanf("%d", &Opcao);
		switch(Opcao)
		{
			case 1:{
				printf("Número da Poltrona: ");
				scanf("%d",&IndicePol);
				IndicePol = IndicePol-1;
				fflush(stdin);
				printf("Janela[J] ou Corredor[C]: ");
				scanf("%c", &Local);
				if(Local=='J'||Local=='j')
				{
					if(strcmp(Janela[IndicePol], "Ocupado")==0)
					{
						printf("Poltrona Ocupada.");	
					}
					else
					{
						strcpy(Janela[IndicePol],"Ocupado");
						printf("Venda registrada!");
					}
				}
				else if(Local=='C'||Local=='c')
				{
					if(strcmp(Corredor[IndicePol], "Ocupado")==0)
					{
						printf("Poltrona Ocupada.");	
					}
					else
					{
						strcpy(Corredor[IndicePol],"Ocupado");
						printf("Venda registrada!");
					}
				}
				else{
					printf("Opção inválida!");
				}
				system("pause");
				system("cls");
				break;
			}
			case 2:{
				printf("\n\tMAPA DE OCUPAÇÃO DO ÔNIBUS\n   Janela         Corredor\n");
				for(j=0; j<TAM;j++)
				{
					printf("%2d   %s         %s\n", j+1, Janela[j], Corredor[j]);
					
				}
				system("pause");
				system("cls");
				break;
			}
			case 3:{
				flag=1;
				
				break;
			}
			default:{
				printf("Opção inválida!");
				system("pause");
				system("cls");
			}
		}
	}while(flag==0);
	system("pause");
	return 0;
}
