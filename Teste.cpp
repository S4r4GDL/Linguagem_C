# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <conio.h>
# include <string.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int a, b, c, d, e, f, g, h, i, j, j1, a1, b1, c1, d1, e1, f1, g1, h1, i1, RP, RV, RP1, RV1;
	char Nome[20], R1[4], Rel, Rep, Test2;
	Rep:
	printf("Qual o seu nome?\n");
	scanf(" %s", &Nome);
	system("pause");
	system("cls");
	printf("Ol� %s, este teste precisa ser respondido com honestidade.\n", Nome);
	system("pause");
	system("cls");
	printf("Deseja ver as regras [Sim/N�o]?\n");
	scanf(" %s", &R1);
	system("cls");
	if(strcmp(R1, "Sim") == 0)
	{
		printf("\tRegras:\n\n 1 - Responda com sinseridade, isso n�o � um julgamento de carater.\n\n");
		printf(" 2 - As respostas v�o de 1 a 5 sendo:\n\n|     1 - Negativo\n|     2 - Mediano mas negativo\n|     3 - Mediano ou incerteza\n|     4 - Mediano mas positivo\n|     5 - Positivo\n\n");
		printf(" 3 - Uma vez respondida n�o se pode mudar a resposta.\n");
	}
	system("pause");
	system("cls");
	printf("\tSobre voc� com rela��o a pessoa:\n\n");
	printf("1 - Sentimento\n");
	scanf("%d", &a);
	system("cls");
	printf("2 - Cuidado\n");
	scanf("%d", &b);
	system("cls");
	printf("3 - Atra��o\n");
	scanf("%d", &c);
	system("cls");
	printf("4 - Comunica��o\n");
	scanf("%d", &d);
	system("cls");
	printf("5 - Ci�me\n");
	scanf("%d", &e);
	system("cls");
	printf("6 - Desinteresse\n");
	scanf("%d", &f);
	system("cls");
	printf("7 - Preocupa��o\n");
	scanf("%d", &g);
	system("cls");
	printf("8 - Expectativa\n");
	scanf("%d", &h);
	system("cls");
	printf("9 - Apatia\n");
	scanf("%d", &i);
	system("cls");
	printf("10 - De um a 5 quanto as intera��es entre voc�s valem?\n");
	scanf("%d", &j);
	system("cls");
	RP = a+b+c+d+g+h;
	RV = h+i+e+f;
	printf("Deseja fazer o teste do parceiro(a)[S/N]?\n");
	scanf(" %c", &Test2);
	if (Test2 == 'S' || Test2 == 's')
	{
		system("pause");
		system("cls");
		printf("\tSobre pessoa com rela��o a voc�:\n\n");
		printf("1 - Sentimento\n");
		scanf("%d", &a1);
		system("cls");
		printf("2 - Cuidado\n");
		scanf("%d", &b1);
		system("cls");
		printf("3 - Atra��o\n");
		scanf("%d", &c1);
		system("cls");
		printf("4 - Comunica��o\n");
		scanf("%d", &d1);
		system("cls");
		printf("5 - Ci�me\n");
		scanf("%d", &e1);
		system("cls");
		printf("6 - Desinteresse\n");
		scanf("%d", &f1);
		system("cls");
		printf("7 - Preocupa��o\n");
		scanf("%d", &g1);
		system("cls");
		printf("8 - Expectativa\n");
		scanf("%d", &h1);
		system("cls");
		printf("9 - Apatia\n");
		scanf("%d", &i1);
		system("cls");
		printf("10 - De um a 5 quanto as intera��es entre voc�s valem?\n");
		scanf("%d", &j1);
		system("cls");
		RP1 = a1+b1+c1+d1+g1+h1;
		RV1 = h1+i1+e1+f1;
		printf("Para ele(a):\n");
		if(RP>RV && j >=3 && j1 >=3)
		{
			printf("Maiores chances de valer a pena!\n");
		}
		else if(RP<RV || (j <3 && j1 <3))
		{
			printf("Maiores chances de n�o valer a pena!\n");
		}
		else
		{
			printf("Chances de 50/50!\n");
		}
	}
	printf("\n\nPara voc�:\n");
	if(RP>RV && j >=3)
	{
		printf("Maiores chances de valer a pena!\n");
	}
	else if(RP<RV)
	{
		printf("Maiores chances de n�o valer a pena!\n");
	}
	else
	{
		printf("Chances de 50/50!\n");
	}
	system("pause");
	system("cls");
	printf("\nVer relat�rio?[S/N]\n");
	scanf(" %c", &Rel);
	if(Rel == 'S'||Rel == 's')
	{
		system("cls");
		printf("\tSeu Relat�rio:\n\n");
		printf("Sentimento:%d\nCuidado:%d\n", a, b);	
		printf("Atra��o:%d\nComunica��o:%d\n", c, d);
		printf("Ci�me:%d\nDesinteresse:%d\n", e, f);
		printf("Preocupa��o:%d\nExpectativa:%d\n", g, h);		
		printf("Apatia:%d\nO quanto voc� cr� que as intera��es entre voc�s valem:%d\n", i, j);
		printf("Total de respostas Positivas:%d\nTotal de respostas Negativas:%d\n", RP, RV);
		if (Test2 == 'S' || Test2 == 's')
		{
			printf("\n\tRelat�rio Dele(a):\n\n");
		printf("Sentimento:%d\nCuidado:%d\n", a1, b1);	
		printf("Atra��o:%d\nComunica��o:%d\n", c1, d1);
		printf("Ci�me:%d\nDesinteresse:%d\n", e1, f1);
		printf("Preocupa��o:%d\nExpectativa:%d\n", g1, h1);		
		printf("Apatia:%d\nO quanto voc� cr� que as intera��es entre voc�s valem:%d\n", i1, j1);
		printf("Total de respostas Positivas:%d\nTotal de respostas Negativas:%d\n", RP1, RV1);
		}
	}
	system("pause");
	system("cls");
	printf("Deseja fazer o teste novamente?[S/N]\n");
	fflush(stdin);
	scanf(" %c", &Rep);
	if(Rep == 'S'||Rep == 's')
	{
		goto Rep;
	}
	getch();
	return 0;
}
