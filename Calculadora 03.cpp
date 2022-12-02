#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//Apreciem esta peça de sofimento escarnio
int main(void){
	system ("color 2F");
	int  Limite, Rep;
	char escolha, Op;
	float a, b, total=0;
	
	system("cls"); 
	printf("Ola, Bem vindo a calculadora da Sara.\n");
	system("pause");
	system("cls");
	do {
	printf("Voce deseja ultilizar:\n[A: Calculadora classica / B: Calculadora automatica]\n");
    escolha = getchar();
    system("cls");
    if (escolha == 'A')
	{
    	printf("Calculadora classica\n\n");
    	printf("Primeiro numero:\n");
    	scanf("%f", &a);
    	printf("Segundo numero:\n");
    	scanf("%f", &b);
    	OperadoresA:
    	printf("Escolha a operacao\n[ + | - | * | / ]:\n\n");
    	Op = getche();
    	switch(Op)
    	{
    		case '+':
    			printf("\nResultado:\n%.1f + %.1f = %.1f", a, b, a+b);
				break;
			
			case '-':
    			printf("\nResultado:\n%.1f - %.1f = %.1f", a, b, a-b);
				break;
				
			case '*':
    			printf("\nResultado:\n%.1f * %.1f = %.1f", a, b, a*b);
				break;
				
			case '/':
				total = a/b;
    			printf("\nResultado:\n%.1f / %.1f = %1f", a, b, total);
				break;
					
			default :
				printf("\nOperacao invalida\n");
				Sleep (400);
				system("cls");
				goto OperadoresA;		
		}
	}
	else if (escolha == 'B')
	{
		printf("Calculadora automatica\n\n");
		printf("Numero:\n");
		scanf("%f", &a);
		printf("Limite de operações:\n");
		scanf("%d", &Limite);
		OperadoresB:
		printf("Escolha a operacao\n[ + | - | * | / ]:\n");
    	Op = getche();
    	for (b; b<=Limite;b++)
    	switch(Op)
    	{
    		case '+':
    			printf("\n%.1f + %.1f = %.1f", a, b, a+b);
				break;
			
			case '-':
    			printf("\n%.1f - %.1f = %.1f", a, b, a-b);
				break;
				
			case '*':
    			printf("\n%.1f * %.1f = %.1f", a, b, a*b);
				break;
				
			case '/':
    			total = a/b;
    			printf("\nResultado:\n%.1f / %.1f = %1f", a, b, total);
				break;
					
			default :
				printf("Operacao invalida");
				Sleep (400);
				system("cls");
				goto OperadoresB;		
		}
		
	}
	else
	{
		printf("Resposta invalida");
	}
	printf("\n\nDigite 1 para fazer uma nova operacao e 2 para sair:\n");
	scanf("%d", &Rep);
	} while (Rep == 1);

	return 0;
}
