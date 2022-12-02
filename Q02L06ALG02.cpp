#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(){
	int Matriz[N][N], i, j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			Matriz[i][j]=i;
		}
	}
	printf("   ");
	for(i=0;i<N;i++){
		printf(" %d", i);
	}
	printf("\n");
	for(i=0;i<N;i++){
		
		printf(" %d |", i);
		for(j=0;j<N;j++)
		{
			printf("%d|", Matriz[j][i]);
		}
		printf("\n");
		
	}
	return 0;
	system("pause");
}
