//Sara Gonçalves De Lima 
//Exercício 10 Lista 03 Alg-2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define LIM 100
int main(){
	setlocale(LC_ALL, "portuguese");
	char Chave[LIM];
	int i=0, Op, Flag=0, cont=0;
	float Valor;
	do{
	printf("1 - CPF\n2 - CNPJ\n3 - Celular\n4 - e-mail\nDigite o tipo de chave PIX: ");
	scanf("%d", &Op);
	printf("\nDigite a Chave: ");
	fflush(stdin);
	gets(Chave);
	if(Op<4 && Op >0){
		while(Chave[i]!='\0'){
			if(isdigit(Chave[i])!=0)
			cont++;	
			i++;
		}
	}
	switch(Op){
		case 1:{
			if(cont!=11){
			printf("\nCPF Inválido!\n");
			Flag=1;
			}
			break;
		}
		case 2:{
			if(cont!=14){
				printf("\nCNPJ Inválido!\n");
				Flag=1;
			}	
			break;
			}
			case 3:{
				if(cont!=11){
					printf("\nQuantidade de dígitos p/ telefone inválida.\n");
					Flag=1;
				}
				break;
				}
			case 4:{
				i=0;
				while(Chave[i]!= '\0'){
					if(Chave[i] == '@' && isalnum(Chave[i-1]) != 0 && isalnum(Chave[i+1]) != 0){
						Flag=0;
					}
					i++;}
				if(Flag==1){
					printf("\nFormato de e-mail inválido.\n");
				}
				break;
			}
			default:{
				printf("Opção inválida!\n");
				Flag=1;
				break;
			}
		}
		if(Flag==1){
			system("pause");
			system("cls");
		}
	}while(Flag==1);
	printf("\nValor a transferir: ");
	scanf("%f", &Valor);
	printf("\nPix realizado com sucesso!\n");
	system("pause");
	return 0;
}
