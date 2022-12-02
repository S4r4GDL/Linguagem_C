#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	char nome[10];
	float notas[10] = {7.3, 7.4, 7.5, 7.6 };
	printf("Seu primeiro nome:");
	scanf("%s", nome);
	system("cls");
	system("pause");
	printf("Aluno(a):%s", nome);
	if(nome=="Sara"||"sara"||"SARA")
	{
		printf("\nNota:%.1f", notas[0]);
}
	else if(nome=="Matheus"||"matheus"||"MATHEUS")
	{
		printf("\nNota:%.1f", notas[1]);
		}
	else if(nome=="Eric"||"eric"||"ERIC")
	{
		printf("\nNota:%.1f", notas[2]);
		}	
    else{
	printf("Nota não encontrada");
	}
	
   return 0;
}
