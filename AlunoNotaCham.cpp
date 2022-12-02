# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <conio.h>
# include <string.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Cham, Op, Op1, Op2, Senha, SenhaI, i, Cod;
	char Aluno[25], Rep[4];
	float Nota;
	Op2:
	Rep:
	printf("Você é [1 - Aluno/ 2 - Professor]\n");
	scanf("%d", &Op2);
	system("cls");
	if( Op2 == 1)
	{
	Op:	
	printf("Procura pelo: \n[1 - Número da chamada] \n[2 - Nome do aluno]\n");
	scanf("%d", &Op);
	system("cls");
	if( Op == 1)
	{
		Cham:
		printf("Digite o número da chamada:\n");
		scanf("%d", &Cham);
		switch (Cham) 
		{
			case 1:
				{
					fflush (stdin);
					strcpy(Aluno, "Marta");
					Nota = 78.6;
					Senha = 1212;
				}
			break;
			
			case 2:
				{
					fflush (stdin);
					strcpy(Aluno, "Lucia");
					Nota = 98.7;
					Senha = 2323;
				}
			break;
			
			case 3:
				{
					fflush (stdin);
					strcpy(Aluno, "Julio");
					Nota = 52.3;
					Senha = 3434;
				}
			break;
		
			case 4:
				{
					fflush (stdin);
					strcpy(Aluno, "Victor");
					Nota = 96.4;
					Senha = 4545;
				}
			break;
						
			default:
				{
					printf("Número de chamada inválido\n");
					system ("pause");
					system("cls");
					goto Cham;
				}
			break;	
		}
		if(Op2 == 1)
		{
		printf("Digite sua senha:\n");
		scanf("%d", &SenhaI);
		if(Senha != SenhaI)
		{
			for(i=1; SenhaI!=Senha && i <= 5; i++ )
			{
				{
					printf("Senha incorreta!\n");
					system("cls");
					printf("Digite sua senha:\n");
					scanf("%d", &SenhaI);
				}
				if(i>5)
				{
					{
					printf("Senha incorreta!\n");
						system("pause");
						system("cls");
						goto Op2;
					}
				}
			}
		}
		}
	}
	else if( Op == 2)
	{
		Aluno:
		printf("Digite o nome do aluno:\n");
		scanf(" %s", &Aluno);
		if(strcmp(Aluno, "Marta") == 0)
		{
			Cham = 1;
			Nota = 78.6;
			Senha=1212;
		}
		else if(strcmp(Aluno, "Lucia") == 0)
		{
			Cham = 2;
			Nota = 98.7;
			Senha=2323;
		}
		else if(strcmp(Aluno, "Julio") == 0)
		{
			Cham = 3;
			Nota = 52.3;
			Senha=3434;
		}
		else if(strcmp(Aluno, "Vitor") == 0)
		{
			Cham = 4;
			Nota = 96.4;
			Senha=4545;
		}
		else
		{
			printf("Nome inválido\n");	
			system ("pause");
			system("cls");
			goto Aluno;
		}
		if(Op2 == 1)
		{
		printf("Digite sua senha:\n");
		scanf("%d", &SenhaI);
		if(Senha != SenhaI)
		{
			for(i=1; SenhaI!=Senha && i <= 5; i++ )
			{
				{
					printf("Senha incorreta!\n");
					system("cls");
					printf("Digite sua senha:\n");
					scanf("%d", &SenhaI);
				}
				if(i>5)
				{
					{
					printf("Senha incorreta!\n");
						system("pause");
						system("cls");
						goto Op2;
					}
				}
			}
		}
		}
	}
	else
	{
		printf("Opção inválida!\n");
		system ("pause");
		system("cls");
		goto Op;
	}
	system ("pause");
	system("cls");
	printf("Dados do aluno:\nNome:%s\nN° de chamada:%d\nNota Geral:%.1f\n", Aluno, Cham, Nota);	
	system ("pause");
	system("cls");
	printf("Deseja fazer outra consulta?[Sim/Não]\n");
	scanf(" %s", &Rep);
	if( strcmp(Rep, "Sim") == 0)
	{	
		system("cls");
		goto Rep;
	}
	}
	else if(Op2 == 2)
	{
		Cod:
		printf("Digite seu código de docente:\n");
		scanf("%d", &Cod);
		switch (Cod) 
		{
			case 1111:
				{
					Senha = 1212;
				}
			break;
			
			case 2222:
				{
					Senha = 2323;
				}
			break;
			
			case 3333:
				{
					Senha = 3434;
				}
			break;
		
			case 4444:
				{
					Senha = 4545;
				}
			break;
						
			default:
				{
					printf("Código de docente inválido\n");
					system ("pause");
					system("cls");
					goto Cham;
				}
			break;
		}
		printf("Digite sua senha:\n");
		scanf("%d", &SenhaI);
		if(Senha != SenhaI)
		{
			for(i=1; SenhaI!=Senha && i <= 5; i++ )
			{
				{
					printf("Senha incorreta!\n");
					system("cls");
					printf("Digite sua senha:\n");
					scanf("%d", &SenhaI);
				}
				if(i>5)
				{
					{
					printf("Senha incorreta!\n");
						system("pause");
						system("cls");
						goto Op2;
					}
				}
			}
		}
		system("cls");
		printf("Você deseja: [1 - Relatório geral / 2 - Consultar Nota de Um Aluno]\n");
		scanf("%d", &Op1);
		system("cls");
		if(Op1 == 1)
		{
			printf("Relatório Geral:\n\n");
			for(Cham=1; Cham <=4; Cham++)
			{
				switch (Cham) 
			{
				case 1:
					{
						fflush (stdin);
						strcpy(Aluno, "Marta");
						Nota = 78.6;
					}
				break;
				
				case 2:
					{
						fflush (stdin);
						strcpy(Aluno, "Lucia");
						Nota = 98.7;
					}
				break;
			
				case 3:
					{
						fflush (stdin);
						strcpy(Aluno, "Julio");
						Nota = 52.3;
					}
				break;
			
				case 4:
					{
						fflush (stdin);
						strcpy(Aluno, "Victor");
						Nota = 96.4;
					}
				break;
			
			}
			printf("Dados do aluno:\nNome:%s\nN° de chamada:%d\nNota Geral:%.1f\n\n", Aluno, Cham, Nota);	
			}
		}
		else if(Op1 == 2)
		{
			goto Op;
		}
		
	}
	else
	{
		printf("Opção inválida!\n");
		system ("pause");
		system("cls");
		goto Op2;
	}
	system ("pause");
	system("cls");
	printf("Deseja fazer outra consulta?[Sim/Não]\n");
	scanf(" %s", &Rep);
	if( strcmp(Rep, "Sim") == 0)
	{	
		system("cls");
		goto Rep;
	}
	getch();
	return 0;
}
