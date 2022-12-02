#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 10
int main(){ 
	int i, Vet[TAM], Flag, J=TAM;
	printf("Digite %d numeros", TAM);
	for(I=0;I<TAM; I++)
	{
			scanf("%d", &Vet[I]);
	}
	for(I=0;I<TAM;I++)
	{
		Flag=0;
		while(J>I && Flag == 0)
		{
			if(Vet[I]==Vet[J])
			{
				Flag=1;
				//parei aqui
				Vet[I]=Vet[I+1];
			}
		}	
	}
}
