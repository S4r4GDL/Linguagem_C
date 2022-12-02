//Sara Gonçalves De Lima 
//Exercício Desafio 01 b2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LIM 100
int main(){
	char Str[LIM], Crib[LIM], Caractere;
	int i, j=0, cont=0, Flag=0, k, Peso;
	printf("Palavra:");
	fflush(stdin);
	gets(Str);
	printf("Chave:");
	fflush(stdin);
	gets(Crib);
	Peso=strlen(Str) - strlen(Crib);
	for(i=0; i<=Peso; i++){
			printf("\nTeste   %d    ", i);
			while(Flag ==0 && Crib[j]!='\0' && Str[j]!='\0' ){
				
				if (Str[j]==Crib[j]){
					Flag=1;
				}
				printf("Str em %d:%c   Crib em %d:%c    Flag: %d\n\n", j, Str[j], j, Crib[j], Flag);
				j++;
			}
			if(Flag==0){
				cont++;
			}
			for(k=0; k<=strlen(Str); k++){
				Str[k]=Str[k+1];
				if(Str[k+1]=='0'){
					Str[k]='\0';
				}
				printf("\n%s",Str);
			}
			Flag=0;
			j=0;
			
	}
	printf("\n TOTAL %d", cont);
	system("pause");
	return 0;
}
