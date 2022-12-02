#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 4
int main(){
	srand(time(NULL));
	int Matriz[N][M], i, j, MaiorColuna[M], MenorColuna[M], MaiorLinha[N], MenorLinha[N],Total=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			Matriz[i][j]=rand()%100;
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		{
			printf("%.2d  ", Matriz[i][j]);
		}
		printf("\n");	
	}
	for(i=0;i<N;i++)
	{
		MaiorLinha[i]=Matriz[i][0];
		MenorLinha[i]=Matriz[i][0];
	}
	for(j=0;j<M;j++)
	{
		MaiorColuna[j]=Matriz[0][j];
		MenorColuna[j]=Matriz[0][j];
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			if(MaiorLinha[i]<Matriz[i][j])
			{
				MaiorLinha[i]=Matriz[i][j];
			}
			if(MenorLinha[i]>Matriz[i][j])
			{
				MenorLinha[i]=Matriz[i][j];
			}
			if(MaiorColuna[j]<Matriz[i][j])
			{
				MaiorColuna[j]=Matriz[i][j];
			}
			if(MenorColuna[j]>Matriz[i][j])
			{
				MenorColuna[j]=Matriz[i][j];
			}
		}
	}
	printf("Maior Linha = {");
	for(i=0;i<N;i++)
	{
		printf("%d ", MaiorLinha[i]);
	}
	printf("}\n");
	printf("Menor Linha = {");
	for(i=0;i<N;i++)
	{
		printf("%d ", MenorLinha[i]);
	}
	printf("}\n");
	printf("Maior Coluna = {");
	for(j=0;j<M;j++)
	{
		printf("%d ", MaiorColuna[j]);
	}
	printf("}\n");
	printf("Menor Coluna = {");
	for(j=0;j<M;j++)
	{
		printf("%d ", MenorColuna[j]);
	}
	printf("}\n");
	return 0;
	system("pause");
}
