#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	printf("C�lculo de �rea de um ret�ngulo");
	printf("\nBase:");
	scanf("%f", &Base);
	printf("Altura:");
	scanf("%f", &Altura);
	Area = Base * Altura;
	printf("A �rea deste ret�ngulo � de:\n%.1f",Area);
	return 0;
}
