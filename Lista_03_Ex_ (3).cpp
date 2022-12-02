//Sara Gonçalves De Lima 
//Exercício 03 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define LIM 100
int main(){
	setlocale(LC_ALL, "portuguese");
	char Str[LIM];
	int i=0;
	printf("Insira seu texto:\n");
	gets(Str);
	strupr(Str);
	printf("Maiusculo: %s \n", Str);
	strlwr(Str);
	printf("Minusculo: %s\n", Str);
	system("pause");
	return 0;
}
