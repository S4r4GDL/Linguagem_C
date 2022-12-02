#include<stdio.h>
#include <locale.h>
#include <ctype.h>
#define T 100
int main()
{
setlocale(LC_ALL, "Portuguese");
char Texto[T];
int ContaCaracteres=0, cont =0;
printf("Digite um texto(Máximo 100 caracteres): ");
gets(Texto);
while (Texto[ContaCaracteres] != '\0')
{
	ContaCaracteres++ ;
	if(isspace(Texto[ContaCaracteres]) == 0){
		cont++;
	}

}
printf("\n %s possui %d caracteres.",Texto,cont);
return 0;
}
