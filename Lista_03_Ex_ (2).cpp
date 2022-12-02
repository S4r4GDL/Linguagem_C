//Sara Gonçalves De Lima 
//Exercício 02 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LIM 100
int main(){
	char Str[LIM];
	int i=0;
	printf("Insira seu texto:\n");
	gets(Str);
	strupr(Str);
	while(Str[i]!= '\0')
	{
		if(isalpha(Str[i])!=0)
		{
			
			if(Str[i]!='A'&&Str[i]!='E'&&Str[i]!='I'&&Str[i]!='O'&&Str[i]!='U'){
				Str[i]='@';	
			}
		}
		i++;
	}
	printf("%s\n", Str);
	system("pause");
	return 0;
}
