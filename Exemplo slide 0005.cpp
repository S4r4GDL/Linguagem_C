#include<stdio.h>
#include<stdlib.h>
# define T 100
int main()
{
char Nome[T];
do
{
printf("Digite um nome ou <ENTER> para finalizar: ");
gets(Nome);
if (Nome[0] != '\0')
{
printf("\nNome digitado: %s\n",Nome);
system("Pause");
system("cls");
}
else
{
printf("Leitura de nomes finalizada!\n");
system("Pause");
}
}while(Nome[0] != '\0');
return 0;
}
