#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5
int main(){
	int Matriz[N][M], i, j, Total=0, SomaLinha[N];
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
		SomaLinha[i]=Total;
		Total=0;
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%d\n", SomaLinha[i]);
		Total+=SomaLinha[i];
	}
	printf("%d", Total);
	return 0;
	system("pause");
}
