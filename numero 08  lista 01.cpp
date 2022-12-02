#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Base, Altura, Area;
	printf("Cálculo de área de um retângulo");
	printf("\nBase:");
	scanf("%f", &Base);
	printf("Altura:");
	scanf("%f", &Altura);
	Area = Base * Altura;
	printf("A área deste retângulo é de:\n%.1f",Area);
	return 0;
}
