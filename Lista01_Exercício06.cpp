#include <stdio.h>
#include <stdlib.h>
int main(){
	int Vetor[10], i, j, cont=0;
	for(i=0; i<10; i++)
	{	
		scanf("%d", &Vetor[i]);
		for(j=9; j>=0; j--)
		{
			while(Vetor[i] == Vetor[j] && i>j)
			{
				printf("Erro! O número %d já existe no vetor."), Vetor[i];
				scanf("%d", &Vetor[i]);
			}
		}
	}
	printf("Vetor final:\n");
	for(i=0; i<10; i++)
	{
		printf("%d ", Vetor[i]);
	}
	system("pause");
	return 0;
	
}
