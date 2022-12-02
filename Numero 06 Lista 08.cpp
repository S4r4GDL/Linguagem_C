# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	float Valor, Total, Quant;
	Total = 0;
	printf("Quantidade:\n");
	scanf("%f", &Quant);
	while (Quant != 0)
	{
		printf("Preço:\n");
		scanf("%f", &Valor);
		Total = Total + (Quant * Valor);
		printf("Quantidade:\n");
		scanf("%f", &Quant);
	}
	system ("cls");
	printf ("Total da Nota:\nR$ %.2f ", Total);
	return 0;
}
