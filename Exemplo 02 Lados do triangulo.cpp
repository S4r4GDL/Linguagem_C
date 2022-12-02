#include<stdio.h>
#include<math.h>
int main(){
	float Angulo, Cat1, Cat2, H;
	printf("Digite o valor da Hipotenusa:");
	scanf("%f", &H);
	printf("Digite o valor de um dos angulos entre a hipotenusa e um cateto:");
	scanf("%f", &Angulo);
	Cat1 = cos(Angulo)*H;
	Cat2 = sin(Angulo)*H;
	printf("Valor dos lados do triândulo:\nCateto Adjacente:%.1f\nCateto Oposto:%.1f\ E a Hipotenusa:%.1f", Cat1, Cat2, H);
	return 0;
}

	
