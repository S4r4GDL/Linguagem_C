#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int i;
	printf("6 numeros com rand\n");
	for(i=0;i<6;i++)
	printf("%d\n", rand()%100);
	return 0;
}
