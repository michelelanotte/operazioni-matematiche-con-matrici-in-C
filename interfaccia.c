#include "interfaccia.h"

void Acquisire_matrice(matrice *matrice_input)
{
  int i, j;
  float valore;
  i = 0;
  while(i < Leggere_righe(*matrice_input))
  {
    j = 0;
    while(j < Leggere_colonne(*matrice_input))
    {
      printf ("Inserire valore in posizione %d, %d:  ", i, j);
      scanf("%f", &valore);
      Scrivere_elemento(i, j, valore, matrice_input);
      j = j + 1;
    }
    i = i + 1;
  }
  return;
}

void Stampare_risultato(matrice matrice_risultato)
{
  int i, j;
  i = 0;
  printf("La matrice risultante dall'operazione effettuata e' la seguente: \n\n");
  while(i < Leggere_righe(matrice_risultato))
  {
    j = 0;
    while(j < Leggere_colonne(matrice_risultato))
    {
      printf("|  %f  |", Leggere_elemento(matrice_risultato, i, j));
      j = j + 1;
    }
    printf("\n");
    i = i + 1;
  }
  printf("\n");
  return;
}

float Acquisire_numero_scalare()
{
  float numero_scalare;
  printf("Inserire numero scalare:  ");
  scanf("%f", &numero_scalare);
  return numero_scalare;
}
