#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Nota1, Nota2, Media;
	printf(" Definir m�dia do aluno");
	printf("\n Nota 1:");
	scanf("%f", &Nota1);
	printf("\n Nota 2:");
	scanf("%f",&Nota2);
	Media = (Nota1*2 + Nota2*3)/5;
	printf("A m�dia do aluno �:%.1f", Media);
	return 0;
}	
