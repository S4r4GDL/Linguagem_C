#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.1415
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Raio, Area;
	printf("C�lculo da �rea de  um c�rculo");
	printf("\nRaio:");
	scanf("%f", &Raio);
	Area = PI * pow(Raio, 2);
	printf("A �rea deste c�rculo �: %.1f", Area);
	return 0;
}
