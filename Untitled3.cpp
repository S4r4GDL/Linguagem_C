#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float M, Cm, Dm, MM;
	do{
	printf("Insira o tamanho em metros ou 0 para sair:\n ");
	scanf("%f", &M);
	Cm = M*100;
	Dm = M*10;
	MM = M*1000;
	printf("%.1f Metros equivalem a:\n", M);
	printf("%.1f centímetros \n%.1 decímetros \n%.1f milímetros", Cm, Dm, MM);
	}while(M != 0 );
	
	return 0;
}
