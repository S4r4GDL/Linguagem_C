#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int Vetor[8], i, Indice[2], Total, X, Y;
	for(i=0; i<8; i++)
	{	
		scanf("%d", &Vetor[i]);
	}
	do{
		scanf("%d", &X);
		scanf("%d", &Y);
		if(X > 7|| Y > 7 || X < 0 || Y < 0)
		{
			printf("Erro! Posição inválida.\n");
		}
	}while(X > 7 || Y > 7 || X < 0 || Y < 0);
	Total =  Vetor[X] + Vetor[Y];
	printf("%d\n",Total);
	system("pause");
	return 0;
}
