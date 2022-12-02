#include <stdlib.h>
#include <stdio.h>
#define NUM 10
int
main ()
{
  int i, j, Vt[NUM],Temp, Menor, Indice;
  for (i = 0; i < NUM; i++)
    {
      scanf ("%d", &Vt[i]);
    }
  for (i = 0; i < NUM; i++)
    {
    	Menor = Vt[i];
    	Indice = i;
      for (j = i+1; j < NUM; j++)
        {
        	if (Vt[j] < Menor)
        	{
				Menor = Vt[j];    
				Indice = j;   
    	    } 
		}
        Temp = Vt[i];
        Vt[i] = Vt[Indice];
    	Vt[Indice] = Temp;
    }


  for (i = 0; i < NUM; i++)
    {
      printf ("%d ", Vt[i]);

    }
	system ("pause");
	return 0;
}

