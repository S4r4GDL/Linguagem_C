#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b; 
	float Total;
	char escolha, operacao;
	
	printf("Olá, Bem vindo a calculadora da Sara.\n");
	system("pause");
	system("cls"); 
	
	printf("Voce deseja ultilizar:\n[A: Calculadora classica / B: Calculadora automatica]\n");
    escolha = getchar();
    system("cls");
    if (escolha == 'A')
	{
    	printf("Calculadora clássica\n");
    	
    	printf("Primeiro numero:\n");
    	scanf("%d", &a);
    	
    	printf("Segundo numero:\n");
    	scanf("%d", &b);
    	
    	Operadores:
    	printf("operacao:\n[ + | - | * | / ]\n");
    	scanf ("%c", &operacao);
    	
    	switch (operacao)
    	{
    		case '+':
    			Total = a + b ;
				break;
			
			case '-':
    			Total = a - b ;
				break;
				
			case '*':
    			Total = a * b ;
				break;
				
			case '/':
    			Total = a / b ;
				break;
					
			default :
				printf("Operacao invalida");
				system ("cls");
				goto Operadores;		
		}
		printf("%f", Total);
    	
	}
	else if (escolha == 'B')
	{
		printf("Calculadora automatica\n");
	}
	else
	{
		printf("Resposta invalida");
	}
	
	

	return 0;
}
