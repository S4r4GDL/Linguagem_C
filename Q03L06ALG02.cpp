#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
	int Matriz[N][N], i, j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d", &Matriz[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
		{
			if(i==j)
			{
				printf("%d", Matriz[j][i]);
			}
			
		}
		printf("\n");
	}
	return 0;
	system("pause");
}
