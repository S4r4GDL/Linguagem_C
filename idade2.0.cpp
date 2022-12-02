#include <stdio.h>
main ()
{
	char  fez[2];
    int idade, anon, ano;
  //coletarão os dados
  printf ("Ano atual: \n");
  scanf ("%d", &ano);
  printf ("Idade: \n");
  scanf ("%d", &idade);
  printf ("Fez aniversário esse ano [S/N]:");
  scanf("%s", &fez);
  if(fez == "N"){
  	  anon =  (ano - idade - 1 );
  }
    else{
    anon = ano - idade;
	}
    
  printf ("Ano de nascimento: \n%d ", anon);
  return 0;
};
