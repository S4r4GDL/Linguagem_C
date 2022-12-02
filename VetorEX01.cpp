#include <stdio.h>
#include <stdlib.h>
#define N 6
#define M 6
int main(){
	int A[M]={ 1, 0, 5, 100, -5, 7}, i, j, Soma=0;
	for(i=0;i<N;i++)
	{
			Soma+=A[i];
	}
	printf("%d\n", Soma);
	return 0;
	system("pause");
}
