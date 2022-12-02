#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int Vetor[20], i;
	for(i=0; i<20; i++)
	{
		Vetor[i]= (Vetor[i-1]) + 5;
		printf("%d° elemento do vetor:%d\n", i+1, Vetor[i]); 
	}
	system("pause");
	return 0;
}
