# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Classe, Ordem, Locomocao;
	printf("� mam�fero(1-Sim 0-N�o)?");
	scanf("%d", &Classe);
	
	if(Classe != 1 && Classe != 0)
	{
		printf("Resposta inv�lida");
	}
	else if(Classe == 1)
	{
		printf("� quadr�pede(1-Sim 0-N�o)?");
		scanf("%d", &Locomocao);
		if(Locomocao != 1 && Locomocao != 0)
		{
			printf("Resposta inv�lida");
		}
		else if (Locomocao == 1)
		{
			printf("� carn�voro(1-Sim 0-N�o)?");
			scanf("%d", &Ordem);
			if(Ordem != 1 && Ordem != 0)
			{
				printf("Resposta inv�lida");
			} 
			else if (Ordem == 1)
			{
				printf("RESPOSTA : Le�o");
			}
			else
				printf("� herb�voro(1-Sim 0-N�o)?");
				scanf("%d", &Ordem);
				if(Ordem != 1 && Ordem != 0)
				{
				printf("Resposta inv�lida");
				} 
				else if (Ordem == 1)
				{
					printf("RESPOSTA : Cavalo");
				}
				else
				{
					printf("Animal deconhecido");
				}
		}

		else
		{
			printf("� b�pede(1-Sim 0-N�o)?");
			scanf("%d", &Locomocao);
			if(Locomocao != 1 && Locomocao != 0)
			{
				printf("Resposta inv�lida");
			}
			else if(Locomocao == 1)
			{
				printf("� on�voro(1-Sim 0-N�o)?");
				scanf("%d", &Ordem);
				
				if(Ordem != 1 && Ordem != 0)
				{
					printf("Resposta inv�lida");
				}
				else if (Ordem == 1)
				{
					printf("RESPOSTA : Homem");
				}
				else
				{
					printf("� frut�fero(1-Sim 0-N�o)?");
					scanf("%d", &Ordem);
					if(Ordem != 1 && Ordem != 0)
					{
						printf("Resposta inv�lida");
					}
					else if (Ordem == 1)
					{
						printf("RESPOSTA : Macaco");
					}
					else
					{
					printf("Animal deconhecido");
					}
				}
			}
			else
			{
				printf("� Voador(1-Sim 0-N�o)?");
				scanf("%d", &Locomocao);
				if(Locomocao != 1 && Locomocao != 0)
				{
					printf("Resposta inv�lida");
				}
				else if(Locomocao == 1)
				{
					printf("RESPOSTA : Morcego");	
				}
				else
				{
					printf("� Aqu�tico(1-Sim 0-N�o)?");
						scanf("%d", &Locomocao);
					if(Locomocao != 1 && Locomocao != 0)
					{
						printf("Resposta inv�lida");
					}
					else if(Locomocao == 1)
					{
						printf("RESPOSTA : Baleia");	
					}
					else
					{
						printf("Animal deconhecido");
					}
					
				}
		}	}
	}
	else
	{
		printf("� Ave(1-Sim 0-N�o)?");
		scanf("%d", &Classe);
		if(Classe != 1 && Classe != 0)
		{
			printf("Resposta inv�lida");
		}
		else if (Classe == 1)
		{
			printf("� N�o-Voador(1-Sim 0-N�o)?");
			scanf("%d", &Locomocao);
			if(Locomocao != 1 && Locomocao != 0)
			{
				printf("Resposta inv�lida");
			}
			else if(Locomocao == 1)	
			{
				printf("� Tropical(1-Sim 0-N�o)?");
				scanf("%d", &Ordem);
				if(Ordem != 1 && Ordem != 0)
				{
					printf("Resposta inv�lida");
				}
				else if (Ordem == 1)
				{
					printf("RESPOSTA : Avestruz");
				}
				else
				{
					printf("� Polar(1-Sim 0-N�o)?");
					scanf("%d", &Ordem);
					if(Ordem != 1 && Ordem != 0)
					{
						printf("Resposta inv�lida");
					}
					else if (Ordem == 1)
					{
						printf("RESPOSTA : Pinguim");
					}
					else
					{
						printf("Animal deconhecido");
					}	
				}
			}
		}
		else
		{
			printf("� R�ptil(1-Sim 0-N�o)?");
			scanf("%d", &Classe);
			if(Classe != 1 && Classe != 0)
			{
				printf("Resposta inv�lida");
			}
			else if (Classe == 1)
			{
				printf("Com casco(1-Sim 0-N�o)?");
				scanf("%d", &Locomocao);
				if(Locomocao != 1 && Locomocao != 0)
				{
					printf("Resposta inv�lida");
				}
				else if(Locomocao == 1)
				{
					printf("RESPOSTA : Tartaruga");
				}
				else
				{
					printf("� carn�voro(1-Sim 0-N�o)?");
					scanf("%d", &Ordem);
					if(Ordem != 1 && Ordem != 0)
					{
						printf("Resposta inv�lida");
					}
					else if(Ordem == 1)
					{
						printf("RESPOSTA : Crocodilo");
					}	
					else
					{
						printf("Sem Patas(1-Sim 0-N�o)?");
						scanf("%d", &Locomocao);
						if(Locomocao != 1 && Locomocao != 0)
						{
							printf("Resposta inv�lida");
						}
						else if(Locomocao == 1)
						{
							printf("RESPOSTA : Crocodilo");
						}	
						else
						{
							printf("Animal deconhecido");
						}
					}
				}
			}
		}			
	}
	
		
	return 0;
	}
