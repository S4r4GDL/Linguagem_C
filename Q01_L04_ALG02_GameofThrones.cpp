//Q01_L04_ALG02 Sara Gonçalves de lima
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 100
#define TAMVET 10
typedef char String[T];
int main()
{
 String VetorNomes[TAMVET], NomeBusca;
 int I, Cont=0;
 //printf("Digite os sobrenomes: \n");
 for(I=0;I<TAMVET;I++)
 {
    gets(VetorNomes[I]);
 }
 //printf("Digite um sobrenome para realizar a busca: ");
 gets(NomeBusca);
 for(I=0;I<TAMVET;I++)
 {
    if(strcmp(NomeBusca,VetorNomes[I]) == 0)
    Cont++;
 }
 printf("%d", Cont);
 //system("pause");
 return 0;
}
