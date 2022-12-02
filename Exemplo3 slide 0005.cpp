#include<stdio.h>
#include <locale.h>
#define T 40
int main()
{
setlocale(LC_ALL, "Portuguese");
char NomeCliente[T],CaracterProcurado, CaracterProcurado2;
int ContaCaracteres=0, ContaCaracteres2=0,I=0;
printf("Nome do cliente: ");
gets(NomeCliente);
printf("Caracter para procurar: ");
fflush(stdin);
scanf("%c",&CaracterProcurado);
printf("Segundo caracter para procurar: ");
fflush(stdin);
scanf("%c",&CaracterProcurado2);
while (NomeCliente[I] != '\0')
{
if(NomeCliente[I]==CaracterProcurado)
{
ContaCaracteres++ ;}
if(NomeCliente[I]==CaracterProcurado2)
{
ContaCaracteres2++ ;
}
I++;
}

printf("\n O caracter %c aparece %d vezes no nome do cliente. \n",CaracterProcurado,ContaCaracteres);
printf(" O caracter %c aparece %d vezes no nome do cliente.",CaracterProcurado2,ContaCaracteres2);
return 0;
}
