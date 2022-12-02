#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM 12
int main(){
	char Caracteres[NUM];
	int i;
	for(i=0;i<NUM;i++){
		fflush(stdin);
		scanf("%c", &Caracteres[i]);
		if(isalpha(Caracteres[i])!= 0){
			Caracteres[i]=toupper(Caracteres[i]);
		}
		else{
			Caracteres[i] = '*';
		}
		
	}
	for(i=0;i<NUM;i++){
		printf("%c", Caracteres[i]);
	}
	
	system("pause");	
	return 0;
	}
