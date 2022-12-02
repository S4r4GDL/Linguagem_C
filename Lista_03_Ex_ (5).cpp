//Sara Gonçalves De Lima 
//Exercício 05 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define LIM 100
int main(){
	char Str[LIM];
	int i=0, Flag=0;
	setlocale(LC_ALL, "portuguese");
	printf("Insira seu e-mail:\n");
	fflush(stdin);
	gets(Str);
	do{
		while(Str[i]!= '\0'){
			if(Str[i] == '@' && isalnum(Str[i-1]) != 0 && isalnum(Str[i+1]) != 0){
				Flag=1;
			}
			i++;
		}
		if(Flag==0){
			
			printf("E-mail inválido. Digite novamente:\n");
			fflush(stdin);
			gets(Str);	
			i=0;	
		}
	}while(Flag==0);
	printf("E-mail válido.\n");
	system("pause");
	return 0;
}
