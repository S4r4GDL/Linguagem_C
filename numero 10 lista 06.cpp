# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
#include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int D1, D2, D3;
	printf("Digite três números:\n");
	scanf("%d%d%d", &D1, &D2, &D3);
	
	if(D1 < D2 && D2 < D3)
	{
		printf("%d %d %d",  D1, D2, D3);
	}
	
	else if(D1 < D3 && D3 < D2)
	{
		printf("%d %d %d", D1, D3, D2);
	}
	
	else if(D2 < D1 && D1 < D3)
	{
		printf("%d %d %d", D2, D1, D3);
	}
	
	else if(D2 < D3 && D3 < D1)
	{
		printf("%d %d %d", D2, D3, D1 );
	}
	
	else if(D1 < D3 && D3 < D2)
	{
		printf("%d %d %d", D1, D3, D2 );
	}
	
	else if(D3 < D1 && D1 < D2)
	{
		printf("%d %d %d", D3, D1, D2);
	}
	
	return 0;
	}
