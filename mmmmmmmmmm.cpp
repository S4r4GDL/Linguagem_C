#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM 8
int main(){
	char LetraAchar[NUM];
	int i, Maicont=0, Mincont=0, Carcont=0, flag=1;
	do{
	system("cls");
	printf("Insira %d letras:\n", NUM);
	for(i=0; i<NUM;i++){
		fflush(stdin);
		scanf("%c", &LetraAchar[i]);
		if(isupper(LetraAchar[i])!=0)
		{
			Maicont++;
		}
		else if(islower(LetraAchar[i])!=0)
		{
			Mincont++;
		}
		else if(ispunct(LetraAchar[i])!=0)
		{
			Carcont++;
		}
	}
	if(Maicont>0 && Mincont>0 && Carcont>0){
		printf("Senha Valida!");
	}
	else
	{
		printf("Senha Invalida!");
		flag=0;
	}
	}while(flag==0);
	return 0;
}
