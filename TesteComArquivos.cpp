#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *Arquivo;
	char NomeDoArquivo[100];
	
	fopen(NomeDoArquivo, "a");
	
	fclose(NomeDoArquivo);
	system("pause");
	return 0;
}
