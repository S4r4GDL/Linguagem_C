# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int N1, N2, N3, N4, N5, N6;
	for(N1=1;N1 <=3; N1++)
	{
		for(N2=2;N2 <=4; N2++)
		{
			for(N3=3;N3 <=5; N3++)
			{
				for(N4=4;N4 <=6; N4++)
				{
					if(N1 != N2 && N3 != N4 && N1 != N3 && N3 != N2 && N1 != N4 && N4 != N2 )
					{
						if(N1 < N2 && N3 < N4 && N2 < N3)
						printf("%d %d %d %d\n", N1, N2, N3, N4);
					}
					else
					{
					}
				}
			}
		}
	}	
	return 0;
}
