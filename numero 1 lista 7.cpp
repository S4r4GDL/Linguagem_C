#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	printf("Letra da Garagem:");
	letra = getche();
	Sleep (50); 
	switch (letra)
	{
		case 'A':
    		printf("\nInquilino que utiliza a garagem: Rose");
			break;
				
		case 'B': 
			printf("\nInquilino que utiliza a garagem: Karine");
			break;
					
		case 'C': 
			printf("\nInquilino que utiliza a garagem: Alice");
			break;
					
		case 'D': 
			printf("\nInquilino que utiliza a garagem: Paulo");
			break;
					
		case 'E': 
			printf("\nInquilino que utiliza a garagem: Vilmar");
			break;	
				
		case 'F': 
			printf("\nInquilino que utiliza a garagem: Alexandre");
			break;
			
		case 'G': 
			printf("\nInquilino que utiliza a garagem: Caio");
			break;	
				
		case 'H': 
			printf("\nInquilino que utiliza a garagem: Itamar");
			break;	
			
		case 'I': 
			printf("\nInquilino que utiliza a garagem: Melissa");
			break;	
		
		case 'J': 
			printf("\nInquilino que utiliza a garagem: Antonia");
			break;	
		
		case 'K': 
			printf("\nInquilino que utiliza a garagem: Maria Lúcia");
			break;	
		
		default: 
			printf("\nGaragem não existe");
			break;
																
	}
	return 0;
}
