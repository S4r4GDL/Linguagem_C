# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int X, FDeX;
	printf("Digite o valor de X:");
	scanf("%d", &X);
	if (X < 0)
	{
		FDeX = 4- pow (X, 2);
	}
	else if ( X == 1)
	{
		FDeX = 2;
	}
	else if ( X > 0)
	{
		FDeX = 2 + pow (X, 2);
	}
	printf ("F(x):%d", FDeX);
	return 0;
}
