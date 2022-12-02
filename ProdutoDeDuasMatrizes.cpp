#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 2
#define M 2
int main(){
	srand(time(NULL));
	int Matriz[N][M], i, j, k, Matriz2[N][M], MatrizProduto[N][M];
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			Matriz[i][j]=rand()%10;
		}
	}
	printf("\n");	
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%.2d  ", Matriz[i][j]);
		}
		printf("\n");	
	}
		for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			Matriz2[i][j]=rand()%10;
		}
	}
	printf("\n");	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		{
			printf("%.2d  ", Matriz2[i][j]);
		}
		printf("\n");	
	}
	printf("\n");	
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		{
			MatrizProduto[i][j]=0;
			for(k=0;k<N;k++)
			{
				MatrizProduto[i][j] = MatrizProduto[i][j] + Matriz[i][k] * Matriz2[k][j];
			}
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		{
			printf("%.2d  ", MatrizProduto[i][j]);
		}
		printf("\n");	
	}
	
	return 0;
	system("pause");
}
