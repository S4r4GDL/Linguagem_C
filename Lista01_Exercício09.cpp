#include <stdio.h>
#include <stdlib.h>
int main(){
	int Vetor[6], i, Aposta[6], j, cont=0;
	printf("N�meros sorteados:\n");
	for(i=0; i<6; i++)
	{	
		scanf("%d", &Vetor[i]);
	}
	printf("N�meros apostados:\n");
	for(i=0; i<6; i++)
	{	
		scanf("%d", &Aposta[i]);
	}
	for(i=0; i<6; i++)
	{
		for(j=6; j>=0; j--){
			if(Vetor[i] == Aposta[j] && i<j)
			{
				cont++;
			}
		}
	}
	if (cont>0){
		
		printf("Voc� acertou %d n�meros!\n", cont);
		
		if (cont==6){
			
			printf("GANHOU!");
		}
	}
	else{
		
		printf("NENHUM ACERTO!");		
	}
	return 0;
	
}
