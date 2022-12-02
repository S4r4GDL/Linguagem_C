#include<stdio.h>
#include<math.h>
int main(){
	float Cat1, Cat2, H;
	printf("Digite o valor do 1° cateto:");
	scanf("%f", &Cat1);
	printf("Digite o valor do 2° cateto:");
	scanf("%f", &Cat2);
	H = sqrt((pow(Cat1, 2) + pow(Cat2, 2)));
	printf("Hipotenusa:%.1f", H);
	
	return 0;
}
