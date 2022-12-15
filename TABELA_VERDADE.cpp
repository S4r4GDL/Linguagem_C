#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, i, k, temp;
	system("color 04");
	for(k=0; k<4; k++)
	for(i=0;i<4; i++)
	{
		temp=i;
		a=temp%2;
		temp/=2;
		b=temp%2;
		if(k==0)
		{
			
			if(i==0)
			{
				printf("TABELA AND\nA  B   S\n");
				
			}
				printf("%d %2d %3d\n", a, b, a&b);
		}
		else if(k==1)
		{
			if(i==0)
			{
				printf("\nTABELA NAND\nA  B   S\n");
			}
			printf("%d %2d %3d\n", a, b, !(a&b));
		}
		else if(k==2)
		{
			if(i==0)
			{
				printf("\nTABELA OR\nA  B   S\n");
			}
			printf("%d %2d %3d\n", a, b, a|b);
		}
		else
		{
			if(i==0)
			{
				printf("\nTABELA XOR\nA  B   S\n");
			}
			printf("%d %2d %3d\n", a, b, ((a|b)&&!(a&b)));
		}
	}
	system("pause");
	return 0;
}
