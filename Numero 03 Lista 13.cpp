# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int N1, N2, N3, N4, N5, N6;
	for(N1=1;N1 < 56; N1++)
	{
		for(N2=2;N2 < 57; N2++)
		{
			for(N3=3;N3 < 58; N3++)
			{
				for(N4=4;N4 < 59; N4++)
				{
					for(N5=5;N5 < 60; N5++)
					{
						for(N6=6;N6 < 61; N6++)
						{
							if(N1 != N2 && N3 != N4 && N1 != N3 && N3 != N2 && N1 != N4 && N4 != N2 && N4 != N5 && N6 != N5 && N1!=N6 && N4 != N6 && N2 != N6)
						{
							if(N1 < N2 && N3 < N4 && N4 < N5 && N6 > N5)
							{
								printf("%d %d %d %d %d %d\n", N1, N2, N3, N4, N5, N6 );
								system ("pause");
						}	
						}
						
						}
						
					}
				}
			}
		}
	}	
	return 0;
}
