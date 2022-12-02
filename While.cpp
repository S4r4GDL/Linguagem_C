#include<stdio.h>
int main(){
	
	int A, B, C, D;
	printf("A:");
	scanf("%d", &A);
	B = 1;
	C = A;
	while(B <= A)
	{
		for(C=1;C<=B;C++)
		{
			printf("#");
		}
		printf("\n");
		B++;
	}
	
	return 0;
}
