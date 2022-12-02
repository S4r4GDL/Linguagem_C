#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int a, b; 
	float Total;
	char escolha, operacao;
	
	printf("Ola, Bem vindo a calculadora da Sara.\n");
	system("pause");
	system("cls"); 
	
	printf("Voce deseja ultilizar:\n[A: Calculadora classica / B: Calculadora automatica]\n");
    escolha = getchar();
    system("cls");
    if (escolha == 'A')
	{
    	printf("Calculadora classica\n\n");
    	
    	printf("Escolha a peracao:\n[ + | - | * | / ]\n");
    	scanf("%c", operacao);
    	
    	printf("Primeiro numero:\n");
    	scanf("%d", &a);
    	
    	printf("Segundo numero:\n");
    	scanf("%d", &b);
    	
    	
    	
    	switch (operacao)
    	{
    		case '+':
    			printf("%d + %d = %d", a, b, a+b);
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
