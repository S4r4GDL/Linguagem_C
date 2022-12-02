//Sara Gonçalves De Lima 
//Exercício 04 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#define LIM 10000
int main(){
	setlocale(LC_ALL, "portuguese");
	char Str[LIM];
	int i=1, cont=1;
	printf("Insira seu texto:\n");
	gets(Str);
	strupr(Str);
	while(Str[i]!= '\0')
	{
		if(isspace(Str[i])!=0 && isspace(Str[i+1])==0 && isspace(Str[i-1])==0 || isspace(Str[i])!=0 && isspace(Str[i+1])==0)
		{
			cont++;
		}	
		i++;
	}
	
	printf("Existe(m) %d palavra(s) na string.\n", cont);
	system("pause");
	return 0;
}
