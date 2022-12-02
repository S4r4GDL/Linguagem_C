//Q02_L04_ALG02 Sara Gonçalves de lima
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMVET 100
#define TAM 2
typedef char String [TAMVET];
int main(){
    int I;
    String ModeloCarro[TAM];
    float ValorCarro[TAM], Total=0;
    int AnoCarro[TAM], IndiceValorMenor, IndiceValorMaior;
    for(I=0;I<TAM;I++)
    { 
        printf("Modelo:");
        gets(ModeloCarro[I]);
        printf("Ano:");
        scanf("%d", &AnoCarro[I]);//após adicionar esse ele não lê mais o modelo do carro
        printf("Valor:");
        scanf("%f", &ValorCarro[I]); 
		getchar();//para limpar o buffer
        Total+=ValorCarro[I];
    }
       IndiceValorMaior=0;
       IndiceValorMenor=0;
    for(I=1; I<TAM; I++) //meu debuguer
    {
          if(ValorCarro[I]>ValorCarro[IndiceValorMaior])
		  {
               IndiceValorMaior=I;
          }
          if(ValorCarro [I]<ValorCarro[IndiceValorMenor])
		  {
               IndiceValorMenor=I;
          }
        //output pra ver se os dados estam sendo lidos
        //printf("Carro %d:\nModelo: %s\n Ano: %d\n Valor: %.2f\n\n", I+1 , ModeloCarro[I], AnoCarro[I], ValorCarro[I]);
        
    }
	printf("Modelo do carro mais caro: %s\nModelo do carro mais barato: %s\n", ModeloCarro[IndiceValorMaior], ModeloCarro[IndiceValorMenor]);
    printf("Total: %.2f", Total);
   	system("pause");
    return 0;
}
