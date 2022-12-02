#include <stdio.h>
#include <stdlib.h>
int main(){
	int Vetor1[10], i, Vetor2[10], Soma[10];
	for(i=0; i<10; i++)
	{	
		scanf("%d", &Vetor1[i]);
	}
	for(i=0; i<10; i++)
	{	
		scanf("%d", &Vetor2[i]);
	}
	for(i=0; i<10; i++)
	{	
		Soma[i] = Vetor1[i] + Vetor2[i];
	}
	for(i=0; i<10; i++)
	{	
		printf("%d ", Soma[i]);
	}
	system("pause");
	return 0;
	
}
