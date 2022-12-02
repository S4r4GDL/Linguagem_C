# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Classe, Ordem, Locomocao;
	printf("É mamífero(1-Sim 0-Não)?");
	scanf("%d", &Classe);
	
	if(Classe != 1 && Classe != 0)
	{
		printf("Resposta inválida");
	}
	else if(Classe == 1)
	{
		printf("É quadrúpede(1-Sim 0-Não)?");
		scanf("%d", &Locomocao);
		if(Locomocao != 1 && Locomocao != 0)
		{
			printf("Resposta inválida");
		}
		else if (Locomocao == 1)
		{
			printf("É carnívoro(1-Sim 0-Não)?");
			scanf("%d", &Ordem);
			if(Ordem != 1 && Ordem != 0)
			{
				printf("Resposta inválida");
			} 
			else if (Ordem == 1)
			{
				printf("RESPOSTA : Leão");
			}
			else
				printf("É herbívoro(1-Sim 0-Não)?");
				scanf("%d", &Ordem);
				if(Ordem != 1 && Ordem != 0)
				{
				printf("Resposta inválida");
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
			printf("É bípede(1-Sim 0-Não)?");
			scanf("%d", &Locomocao);
			if(Locomocao != 1 && Locomocao != 0)
			{
				printf("Resposta inválida");
			}
			else if(Locomocao == 1)
			{
				printf("É onívoro(1-Sim 0-Não)?");
				scanf("%d", &Ordem);
				
				if(Ordem != 1 && Ordem != 0)
				{
					printf("Resposta inválida");
				}
				else if (Ordem == 1)
				{
					printf("RESPOSTA : Homem");
				}
				else
				{
					printf("É frutífero(1-Sim 0-Não)?");
					scanf("%d", &Ordem);
					if(Ordem != 1 && Ordem != 0)
					{
						printf("Resposta inválida");
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
				printf("É Voador(1-Sim 0-Não)?");
				scanf("%d", &Locomocao);
				if(Locomocao != 1 && Locomocao != 0)
				{
					printf("Resposta inválida");
				}
				else if(Locomocao == 1)
				{
					printf("RESPOSTA : Morcego");	
				}
				else
				{
					printf("É Aquático(1-Sim 0-Não)?");
						scanf("%d", &Locomocao);
					if(Locomocao != 1 && Locomocao != 0)
					{
						printf("Resposta inválida");
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
		printf("É Ave(1-Sim 0-Não)?");
		scanf("%d", &Classe);
		if(Classe != 1 && Classe != 0)
		{
			printf("Resposta inválida");
		}
		else if (Classe == 1)
		{
			printf("É Não-Voador(1-Sim 0-Não)?");
			scanf("%d", &Locomocao);
			if(Locomocao != 1 && Locomocao != 0)
			{
				printf("Resposta inválida");
			}
			else if(Locomocao == 1)	
			{
				printf("É Tropical(1-Sim 0-Não)?");
				scanf("%d", &Ordem);
				if(Ordem != 1 && Ordem != 0)
				{
					printf("Resposta inválida");
				}
				else if (Ordem == 1)
				{
					printf("RESPOSTA : Avestruz");
				}
				else
				{
					printf("É Polar(1-Sim 0-Não)?");
					scanf("%d", &Ordem);
					if(Ordem != 1 && Ordem != 0)
					{
						printf("Resposta inválida");
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
			printf("É Réptil(1-Sim 0-Não)?");
			scanf("%d", &Classe);
			if(Classe != 1 && Classe != 0)
			{
				printf("Resposta inválida");
			}
			else if (Classe == 1)
			{
				printf("Com casco(1-Sim 0-Não)?");
				scanf("%d", &Locomocao);
				if(Locomocao != 1 && Locomocao != 0)
				{
					printf("Resposta inválida");
				}
				else if(Locomocao == 1)
				{
					printf("RESPOSTA : Tartaruga");
				}
				else
				{
					printf("É carnívoro(1-Sim 0-Não)?");
					scanf("%d", &Ordem);
					if(Ordem != 1 && Ordem != 0)
					{
						printf("Resposta inválida");
					}
					else if(Ordem == 1)
					{
						printf("RESPOSTA : Crocodilo");
					}	
					else
					{
						printf("Sem Patas(1-Sim 0-Não)?");
						scanf("%d", &Locomocao);
						if(Locomocao != 1 && Locomocao != 0)
						{
							printf("Resposta inválida");
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
