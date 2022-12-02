//Sara Gonçalves De Lima 
//Exercício 06 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define LIM 21
int main(){
	char Str[LIM], Letra[5]={'a','e','i','o','u'};
	int i=0, Num[5]={0, 0, 0, 0, 0};
	printf("Digite as letras e pressione <Enter> para \nfinalizar a leitura (no máximo 20 letras):\n");
	gets(Str);
	while(Str[i]!= '\0')
	{
		if(isalpha(Str[i])!=0)
		{
			switch(Str[i]){
				
				case 'a':{
					Num[0]++;
					break;
				}
				case 'e':{
					Num[1]++;
					break;
				}
				case 'i':{
					Num[2]++;
					break;
				}
				case 'o':{
					Num[3]++;
					break;
				}
				case 'u':{
					Num[4]++;
					break;
				}
			}
			
		}
		i++;
	}
	printf("\nLetra Quantidade\n");
	for(i=0;i<5; i++)
	printf(" %c      %d\n", Letra[i], Num[i]);
	system("pause");
	return 0;
}
