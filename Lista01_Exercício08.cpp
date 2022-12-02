#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int Vetor1[10], i, Pow[10];
	for(i=0; i<10; i++)
	{	
		scanf("%d", &Vetor1[i]);
	}
	for(i=0; i<10; i++)
	{	
		Pow[i] = pow(2, Vetor1[i]);
	}
	for(i=0; i<10; i++)
	{	
		printf("%d ", Pow[i]);
	}
	system("pause");
	return 0;
	
}
