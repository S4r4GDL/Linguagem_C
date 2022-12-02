# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int N1, N2, N3, cont;
	cont=0;
	for(N1=1;N1 <=4; N1++)
	{
		for(N2=13;N2 <=14; N2++)
		{
			for(N3=60;N3 <=61; N3++)
			{
				if(N1%2==0 && N2%2==0 && N3%2==0)
				{
					printf("%d - %d - %d  Todos os números são pares\n", N1, N2, N3);
				}
				else if(N1%2!=0 && N2%2!=0 && N3%2!=0)
				{
					printf("%d - %d - %d  Todos os números são ímpares\n", N1, N2, N3);
				}
				else
				{
					printf("%d - %d - %d\n", N1, N2, N3);
				}
				cont++;
			}	
		}	
	}
	printf("%d Sequencias geradas\n", cont);
	return 0;
}
