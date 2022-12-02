#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5
int main(){
	int Matriz[N][M], i, j, LinhaMaior=0, ColunaMaior=0, LinhaMenor=0, ColunaMenor=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d", &Matriz[i][j]);
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		{
			printf("%d ", Matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++){
		for(j=0;j<M;j++)
		{
			if(Matriz[LinhaMaior][ColunaMaior]<Matriz[i][j]){
				LinhaMaior=i;
				ColunaMaior=j;
			}
			if(Matriz[LinhaMenor][ColunaMenor]>Matriz[i][j]){
				LinhaMenor=i;
				ColunaMenor=j;
			}
		}
	}
	printf("%d\n%d\n%d\n%d\n", LinhaMaior, ColunaMaior, LinhaMenor, ColunaMenor);
	return 0;
	system("pause");
}
