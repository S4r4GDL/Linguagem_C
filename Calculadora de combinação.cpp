# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <windows.h>
# include <conio.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int n, p, i, cont, Total1, Total2, Total3, Escolha;
	float com, per, ar, Saida;
	char Sabe, PosEle;
	Opcao:
	printf("\tCalculadora de Combina��o - Permuta��o - Arranjo\n\nVoc� sabe qual tipo de c�lculo precisa? [S/N]\n");
	scanf(" %c", &Sabe);
	system("pause");
	system("cls");
	if(Sabe == 'S'||'s')
	{
		printf("\nEscolha:\n1 - Combina��o\n2 - Permuta��o\n3 - Arranjo\n");
		scanf("%d", &Escolha);
	}
	else
	{
		printf("Combina��o | Quando o n�mero de elementos n�o � igual ao n�mero de agrupamentos e a ordem deles n�o importa.\n");
		printf("Permuta��o | Quando o n�mero de elementos � igual ao n�mero de agrupamentos.\n ");
		printf("Arranjo    | Quando o n�mero de elementos n�o � igual ao n�mero de agrupamentos e a ordem deles importa.\n ");
		printf("\nEscolha:\n1 - Combina��o\n2 - Permuta��o\n3 - Arranjo\n");
		scanf("%d", &Escolha);
	}	
	switch (Escolha)
	{
		case 1:
		{
			printf("Combina��o\nN�mero de elementos:\n");
			scanf("%d", &n);
			for (per=1; per <= n; per++)
			{
				Total1 = Total1 * per ;
			}
			printf("N�mero de posi��es:\n");
			scanf("%d", &p);
			for (per=1; per <= p; per++)
			{
				Total2 = Total2 * per ;
			}
			Saida = Total1/(Total2 * (Total1-Total2));
			system("cls");
			printf("Combina��o\n");
		} 
		
		
		case 2:
		{
			printf("N�mero de elementos:\n");
			scanf("%d", &n);
			for (per=1; per <= n; per++)
			{
				Total1 = Total1 * per ;
			}
			Saida = Total1;
			system("cls");
			printf("Permuta��o\n");
		} 
		break;
		case 3:
		{
			printf("N�mero de elementos:\n");
			scanf("%d", &n);
			for (per=1; per <= n; per++)
			{
				Total1 = Total1 * per ;
			}
			printf("N�mero de posi��es:\n");
			scanf("%d", &p);
			for (per=1; per <= p; per++)
			{
				Total2 = Total2 * per ;
			}
			for (per=1; per <= (n-p); per++)
			{
				Total3 = Total3 * per ;
			}
			Saida = Total1/Total3;
			system("cls");
			printf("Arranjo\n");
		} 	
		break;
		default:
		{
			printf("Op��o inv�lida!");
			goto Opcao;
		} 
	}if(Saida> 0)
	{
		printf("Resultado:%.0f formas.", Saida);
	}
	
	
	return 0;
} 
