#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 3
#define M 3
int main(){
	srand(time(NULL));
	int Matriz[N][M], i, j, k=0, Vetor[N*M];
	for(i=0;i<N*M;i++)
	{
		Vetor[i]=rand()%100;	
	}
	printf("Vetor: ");
	for(i=0;i<N*M;i++)
	{
		printf("%d ", Vetor[i]);	
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			do
			{
				Matriz[i][j] = Vetor[k];
				k++;
			}while(k<=i);
		}
		printf("\n");	
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%d ", Matriz[i][j] );
		}
		printf("\n");	
	}
	return 0;
	system("pause");
}
