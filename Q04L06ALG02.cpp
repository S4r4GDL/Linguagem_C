#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 5
int main(){
	int Matriz[N][M], i, j, Coluna, Flag=0;
	do{
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
			for(j=0;j<M;j++)
			{
				printf("%d|", Matriz[i][j]);
			}
			printf("\n");
	}*/
		printf("Digite a coluna:");
		scanf("%d", &Coluna);
		if(Coluna<M)
		{
			for(i=0;i<N;i++)
			{
				printf("%d", Matriz[i][Coluna]);
				printf("\n");
			}
		}
		else
		{
			printf("Coluna inválida!");
			Flag=1;
		}
	}while(Flag==1);
	return 0;
	system("pause");
}
