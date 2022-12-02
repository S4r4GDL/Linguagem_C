#include <stdio.h>
#include <stdlib.h>
int main(){
	int Vetor[10], i, j, cont=0;
	for(i=0; i<10; i++)
	{	
		scanf("%d", &Vetor[i]);
	}
	for(i=0; i<10; i++)
	{
		for(j=9; j>=0; j--){
			if(Vetor[i] == Vetor[j] && i<j)
			{
				printf("%d\n", Vetor[i]);
				cont++;
			}
			
		}
	}
	if (cont==0)
			{
				printf("Não existem valores iguais.\n");
			}
	return 0;
	
}
