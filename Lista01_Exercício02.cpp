#include <stdio.h>
#include <stdlib.h>
int main(){
	int Idade[10], i, IdadeInserida, cont=0;
	for(i=0; i<10; i++)
	{
		scanf("%d", &Idade[i]);
	}
	scanf("%d",&IdadeInserida);
	for(i=0; i<10; i++)
	{
		if(Idade[i] == IdadeInserida)
		{
			printf("%d\n", i);
			cont++;
		}
	}
	if(cont == 0)
	{
		printf("Idade não encontrada!");
	}
	return 0;
}
