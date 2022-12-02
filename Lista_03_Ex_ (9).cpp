//Sara Gonçalves De Lima 
//Exercício 09 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIM 100
int main(){
	setlocale(LC_ALL, "portuguese");
	char Str1[LIM], Caracter, Aux;
	int i, j, k;
	printf("Digite a string: "); 
	gets(Str1);
	printf("Digite o caracter: ");
	fflush(stdin);
	scanf("%c", &Caracter);
	for(j=0;j<strlen(Str1);j++)
	{
		i=0;
		while(Str1[i]!='\0')
	{
		if(Str1[i]== Caracter){
			for(k=i; k<=strlen(Str1); k++){
				Str1[k]=Str1[k+1];
				if(Str1[k+1]=='0'){
					Str1[k]='\0';
				}
		}}
		i++;
	}
	}
	
	printf("String sem o caracter %c:  %s\n", Caracter, Str1); 
	system("pause");
	return 0;
}
