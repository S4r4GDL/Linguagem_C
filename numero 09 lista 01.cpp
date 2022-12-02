#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.1415
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Raio, Area;
	printf("Cálculo da área de  um círculo");
	printf("\nRaio:");
	scanf("%f", &Raio);
	Area = PI * pow(Raio, 2);
	printf("A área deste círculo é: %.1f", Area);
	return 0;
}
