#include <stdio.h>
#include <stdlib.h>
#define N 3
int main(){
	int Matriz[N][N], i, j, Flag=0;
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
			if(Matriz[j][i] != Matriz[i][j])
			{
				Flag=1;
			}	
		}
	}
	if(Flag==0){
		printf("S");
	}
	else
	{
		printf("N");
	}
	return 0;
	system("pause");
}
