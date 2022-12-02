//Sara Gonçalves De Lima 
//Exercício 07 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define LIM 20
int main(){
	setlocale(LC_ALL, "portuguese");
	char Str[LIM], Contrario[LIM];
	int i=0, j=0;
	printf("Digite as letras e pressione <Enter> para\nfinalizar a leitura (no máximo 20 letras):\n");
	gets(Str);
	strcpy(Contrario, Str);
	j+=strlen(Str)-1;
	while(Str[i]!='\0'){
		Contrario[j]=Str[i];
		j--;
		i++;
	}
	Contrario[i]='\0';
	printf("%s \n", Contrario);
	system("pause");
	return 0;
}
