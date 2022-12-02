//Q03_L04_ALG02 Sara Gonçalves de lima
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define T 100
#define TAMVET 15
typedef char String[T];
int main()
{
 setlocale(LC_ALL, "Portuguese");
 String Portugues[TAMVET], Ingles[TAMVET], Palavra;
 int I, IndicePalavra, Cont=0;
 char Op;
 printf("Palavras em português: \n");
 for(I=0;I<TAMVET;I++)
 {
    gets(Portugues[I]);
 }
 getchar();//para limpar o buffer
 printf("Palavras em Inglês: \n");
 for(I=0;I<TAMVET;I++)
 {
    gets(Ingles[I]);
 }
 printf("Digite uma palavra:");
 gets(Palavra);
 while(strcmp(Palavra, "*") != 0){
 	fflush(stdin);
 	printf("Inglês[I] Português[P]: ");
	scanf("%c",&Op);
	if(Op=='P'){
		for(I=0;I<TAMVET;I++)
		{
			if(strcmp(Palavra, Portugues[I]) == 0)
			{
				IndicePalavra=I;
			}
		}
		printf("%s \n", Ingles[IndicePalavra]);
	}
	else if(Op=='I'){
		for(I=0;I<TAMVET;I++)
		{
			if(strcmp(Palavra, Ingles[I]) == 0)
			{
				IndicePalavra=I;
			}
		}
		printf("%s \n", Portugues[IndicePalavra]);
	}
	else{
		printf("Opção inválida!\n");
	}
	getchar();
	printf("Digite uma palavra:");
 gets(Palavra);
 }
 system("pause");
 return 0;
}
 
 
