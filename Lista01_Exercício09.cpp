#include <stdio.h>
#include <stdlib.h>
int main(){
	int Vetor[6], i, Aposta[6], j, cont=0;
	printf("Números sorteados:\n");
	for(i=0; i<6; i++)
	{	
		scanf("%d", &Vetor[i]);
	}
	printf("Números apostados:\n");
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
		
		printf("Você acertou %d números!\n", cont);
		
		if (cont==6){
			
			printf("GANHOU!");
		}
	}
	else{
		
		printf("NENHUM ACERTO!");		
	}
	return 0;
	
}
