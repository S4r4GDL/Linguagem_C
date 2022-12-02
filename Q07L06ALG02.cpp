#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 6
int main(){
	int Matriz[N][M], i, j, Total=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d", &Matriz[i][j]);
		}
	}
	/*printf("   ");
	for(i=0;i<N;i++){
		printf(" %d", i);
	}
	printf("\n");
	for(i=0;i<N;i++){
		
		printf(" %d |", i);
		for(j=0;j<N;j++)
		{
			printf("%d|", Matriz[i][j]);
		}
		printf("\n");
		
	}*/
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			Total+=Matriz[i][j];
		}
		printf("%d \n", Total);
		Total=0;
	}
	printf("\n");
	for(j=0;j<M;j++)
	{
		for(i=0;i<N;i++)
		{
			Total+=Matriz[i][j];
		}
		printf("%d \n", Total);
		Total=0;
	}
	return 0;
	system("pause");
}
