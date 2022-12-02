#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Peso, Altura, IMC;
    printf ("Peso:");
    scanf("%f", &Peso);
    printf ("Altura: ");
    scanf("%f", &Altura);
    IMC = Peso / pow(Altura, 2);
    printf("IMC = %.2f", IMC);
    
    return 0;
}
