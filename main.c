#include "globali.h"
#include "operazioni.h"

int main()
{
  int scelta;
  char risposta;
  do{
    do{
      printf("\n OPERAZIONI CON LE MATRICI \n");
      printf("Questo programma permette di effettuare operazioni sulle matrici. \n");
      printf("Scegliere l'operazione che si vuole effettuare: \n");
      printf("1. Somma tra due matrici\n");
      printf("2. Prodotto scalare\n");
      printf("3. Trasposta di una matrice\n");
      printf("4. Prodotto di due matrici\n");
      scanf("%d", &scelta);
      if((scelta < 1) || (scelta > 4))
      {
        printf("Scelta errata!\n");
      }
    }while((scelta < 1) || (scelta > 4));
    if(scelta == 1)
    {
      Somma_matrici();
    }
    else {
      if(scelta == 2)
      {
        Prodotto_scalare();
      }
      else{
        if(scelta == 3)
    	{
    	  Trasposta();
    	}
    	else{
    	  if(scelta == 4)
    	  {
    	    Prodotto_matrici();
    	  }
    	  else
    	    printf("Scelta errata!\n");
    	  }
       }
     }
    printf("Vuoi effettuare un'altra operazione? (s/n)");
    fflush(stdin);
    scanf("%c", &risposta);
  }while(risposta == 's');
  return 0;
}
