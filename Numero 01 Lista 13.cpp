# include <stdlib.h>
# include <stdio.h>
# include <locale.h>
# include <math.h>
# include <windows.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int Escolha, Caloria;
	float Peso, Km, Gasto, Minutos;
	printf("Escolha uma porção que voce deseja comer (0 - Sai)\n1- Lagarto de boi assado (100 gramas) \n");
	printf("2- Leitão (100 gramas)\n3- Peito de frango s/pele (100 gramas) \n4- Rabo de porco salgado (100 gramas)\n");
	printf("5- Moela de galinha (100 gramas) \n6- Picanha (100 gramas)\n7- Banana prata (100 gramas) \n");
	printf("8- Pão francês (50 gramas)\n9- Batata frita com cheddar (100 gramas) \n10- Milk-Shake (100 gramas) \n");
	scanf("%d", &Escolha);
	while(Escolha > 0 && Escolha < 11)
	{
		switch (Escolha)
		{
			case 1: Caloria = 170;
			break;
		
			case 2: Caloria = 308;
			break;
		
			case 3: Caloria = 100;
			break;
		
			case 4: Caloria = 426;
			break;
		
			case 5: Caloria = 78;
			break;
		
			case 6: Caloria = 287;
			break;
		
			case 7: Caloria = 97;
			break;
	
			case 8: Caloria = 135;
			break;
		
			case 9: Caloria = 430;
			break;
			
			case 10: Caloria = 112;
			break;
			
			default:printf("Classe não existe\n");				
		}
		printf("Quanto você pesa?\n ");
		scanf("%f", &Peso);
		printf("Para gastar as calorias que você consumiu, você irá caminar ou correr.\n Você correrá ou caminhará a qual velocidade?\n ");
		scanf("%f", &Km);
		Gasto = Km * Peso * 0.0175;
		Minutos = Caloria/Gasto;
		printf("Uma porção dessa comida tem %d calorias\n", Caloria);
		printf("Você deverá se exercitar por %.2f minutos para gastar as calorias consumidas\n", Minutos);
		system ("pause");
		system ("cls");
		printf("Escolha uma porção que voce deseja comer (0 - Sai)\n1- Lagarto de boi assado (100 gramas) \n");
		printf("2- Leitão (100 gramas)\n3- Peito de frango s/pele (100 gramas) \n4- Rabo de porco salgado (100 gramas)\n");
		printf("5- Moela de galinha (100 gramas) \n6- Picanha (100 gramas)\n7- Banana prata (100 gramas) \n");
		printf("8- Pão francês (50 gramas)\n9- Batata frita com cheddar (100 gramas) \n10- Milk-Shake (100 gramas) \n");
		scanf("%d", &Escolha);
	}
	
	return 0;
}
