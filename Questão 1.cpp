#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#define TAM3 10
int main(){
	int Vet1[TAM], Vet2[TAM], Vet3[TAM], i, j=1;
	for(i=0;i<TAM;i++){
		scanf("%d", &Vet1[i]);
	}
	for(i=0;i<TAM;i++){
		scanf("%d", &Vet2[i]);
	}
	Vet3[0]=Vet1[0];
	for(i=1;i<TAM3;i++)
	{
		
		if(j%2==0){
			Vet3[i]=Vet1[j];
		}
		else{
			Vet3[i]=Vet2[j];
		}
		j++;
	}
	for(j=i-1;j<=0;j--)
	{
		if(j%2==0){
		Vet3[i]=Vet1[j];
		}
		else{
			Vet3[i]=Vet2[j];
		}
	}
	printf("Vetor 3:");
	for(i=0;i<TAM3;i++){
		printf("%d  ", Vet3[i]);
	}
	system("pause");
	return 0;
}
