#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
//Sara Gonçalves de Lima
int main(){
	setlocale(LC_ALL, "Portuguese");
	float Area, PesoT, PesoN, Diametro, Dmm, DPol, Tensao;
	printf("Qual carga será aplicada ao parafufo (Em Toneladas):");
	scanf("%f", &PesoT);
	PesoN = PesoT * 1000 * 9.8;
	Tensao = 244 * pow(10,6);
	Area = PesoN/Tensao;
	Diametro = sqrt(4*Area/M_PI);
	Dmm = Diametro * 1000;
	DPol = Dmm / 25.4;
	printf("O diâmetro do parafuso em milímetro: %.2f", Dmm);
	printf("O diâmetro do parafuso em Polegada: %.2f", DPol);
	return 0;
}	
