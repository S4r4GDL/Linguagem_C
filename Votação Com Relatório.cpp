# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Maria=0, Carla=0, Julia=0, AnaPaula=0, Beatriz=0, Nulo=0, i, QuantVotante, Voto;
	printf("Quantidade de votantes:\n");
	scanf("%d", &QuantVotante);
	if(QuantVotante > 0 ){
		Voto:
			printf("Selecione a candidata: 1 -| Maria \n2 -| Carla \n3 -| Júlia \n4 -| Ana Paula\n5 -| Beatriz \n6 -| Nulo\n OU 0 PARA SAIR DA VOTAÇÃO\n");
			for(i = 1 ; i <=  QuantVotante; i++)
			{
				scanf("%d", &Voto);
				if(Voto != 0)
				{
					switch(Voto)
					{
						case 1:{
							Maria++;
							break;
						}
						case 2:{
							Carla++;
							break;
						}
						case 3:{
							Julia++;
							break;
						}
						case 4:{
							AnaPaula++;
							break;
						}
						case 5:{
							Beatriz++;
							break;
						}
						case 6:{
							Nulo++;
							break;
						}
						default:{
							printf("Opção inválida!");
							goto Voto;
							break;
						}
						
					}
					
				}	
			}
		system("cls");	
		printf("Relatório da votação: Totao de Votos: %d \n1 -| Maria : %d votos\n2 -| Carla : %d votos\n"
		"3 -| Júlia : %d votos\n4 -| Ana Paula : %d votos\n5 -| Beatriz: %d votos \n6 -| Nulo : %d votos\n ", Voto, Maria, Carla, Julia, AnaPaula, Beatriz, Nulo);	
	}
	system("pause");
	
	return 0;
	}
