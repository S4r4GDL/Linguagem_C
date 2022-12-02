//Sara Gonçalves De Lima 
//Exercício 08 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define LIM 100
int main(){
	setlocale(LC_ALL, "portuguese");
	char Str1[LIM], Str2[LIM];
	printf("Digite a primeira string: ");
	gets(Str1);
	printf("Digite a segunda string: ");
	gets(Str2);
	if(strcmp(Str1, Str2)<0){
		printf("Ordem alfabética:\n%s\n%s\n", Str1, Str2);
	}
	else if(strcmp(Str1, Str2)>0){
		printf("Ordem alfabética:\n%s\n%s\n", Str2, Str1);
	}
	else{
		printf("Strings iguais.\n");
	}
	system("pause");
	return 0;	
}
