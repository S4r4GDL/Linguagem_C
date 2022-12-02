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
	printf("\tCalculadora de Combinação - Permutação - Arranjo\n\nVocê sabe qual tipo de cálculo precisa? [S/N]\n");
	scanf(" %c", &Sabe);
	system("pause");
	system("cls");
	if(Sabe == 'S'||'s')
	{
		printf("\nEscolha:\n1 - Combinação\n2 - Permutação\n3 - Arranjo\n");
		scanf("%d", &Escolha);
	}
	else
	{
		printf("Combinação | Quando o número de elementos não é igual ao número de agrupamentos e a ordem deles não importa.\n");
		printf("Permutação | Quando o número de elementos é igual ao número de agrupamentos.\n ");
		printf("Arranjo    | Quando o número de elementos não é igual ao número de agrupamentos e a ordem deles importa.\n ");
		printf("\nEscolha:\n1 - Combinação\n2 - Permutação\n3 - Arranjo\n");
		scanf("%d", &Escolha);
	}	
	switch (Escolha)
	{
		case 1:
		{
			printf("Combinação\nNúmero de elementos:\n");
			scanf("%d", &n);
			for (per=1; per <= n; per++)
			{
				Total1 = Total1 * per ;
			}
			printf("Número de posições:\n");
			scanf("%d", &p);
			for (per=1; per <= p; per++)
			{
				Total2 = Total2 * per ;
			}
			Saida = Total1/(Total2 * (Total1-Total2));
			system("cls");
			printf("Combinação\n");
		} 
		
		
		case 2:
		{
			printf("Número de elementos:\n");
			scanf("%d", &n);
			for (per=1; per <= n; per++)
			{
				Total1 = Total1 * per ;
			}
			Saida = Total1;
			system("cls");
			printf("Permutação\n");
		} 
		break;
		case 3:
		{
			printf("Número de elementos:\n");
			scanf("%d", &n);
			for (per=1; per <= n; per++)
			{
				Total1 = Total1 * per ;
			}
			printf("Número de posições:\n");
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
			printf("Opção inválida!");
			goto Opcao;
		} 
	}if(Saida> 0)
	{
		printf("Resultado:%.0f formas.", Saida);
	}
	
	
	return 0;
} 
