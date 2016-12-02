#include "operazioni.h"

/* --------------------- Funzione utile per la somma tra due matrici -------------------------------- */
void Somma_matrici()
{
  matrice matrice1;
  matrice matrice2;
  matrice matrice_somma;
  int n, m;

  do {
    printf("Quante righe devono avere le matrici su cui operare?  ");
    scanf("%d", &n);
    if(n < 1 || n > RIGHE)
    {
      printf("Errore! Numero di righe non valido!\n");
    }
  }while(n < 1 || n > RIGHE);

  do {
    printf("Quante colonne devono avere le matrici su cui operare?  ");
    scanf("%d", &m);
    if(m < 1 || m > COLONNE)
    {
        printf("Errore! Numero di colonne non valido!\n");
    }
  }while(m < 1 || m > COLONNE);

  Creare_matrice(&matrice1, n, m);
  Creare_matrice(&matrice2, n, m);
  Creare_matrice(&matrice_somma, n, m);

  printf("\n Acquisizione degli elementi della prima matrice:\n");
  Acquisire_matrice(&matrice1);
  printf("\n Acquisizione degli elementi della seconda matrice:\n");
  Acquisire_matrice(&matrice2);

  int i, j;
  i = 0;
  while(i < Leggere_righe(matrice1))
  {
	j = 0;
    while(j < Leggere_colonne(matrice1))
    {
      Scrivere_elemento(i, j, Leggere_elemento(matrice1, i, j) + Leggere_elemento(matrice2, i, j), &matrice_somma);
      j = j + 1;
    }
    i = i + 1;
  }
  Stampare_risultato(matrice_somma);
  return;
}


/* ------------------ Funzioni utile per il calcolo del prodotto scalare ----------------------------- */

void Prodotto_scalare()
{
  matrice matrice1;
  matrice matrice_scalare;
  float numero_scalare;
  int i, j;
  int n, m;

  do {
    printf("Quante righe deve avere la matrice su cui operare?  ");
    scanf("%d", &n);
    if(n < 1 || n > RIGHE)
    {
      printf("Errore! Numero di righe non valido!\n");
    }
  }while(n < 1 || n > RIGHE);

  do {
    printf("Quante colonne deve avere la matrice su cui operare?  ");
    scanf("%d", &m);
    if(m < 1 || m > COLONNE)
    {
      printf("Errore! Numero di colonne non valido!\n");
    }
  }while(m < 1 || m > COLONNE);
  Creare_matrice(&matrice1, n, m);
  Creare_matrice(&matrice_scalare, n, m);

  printf("\n Acquisizione degli elementi della matrice:\n");
  Acquisire_matrice(&matrice1);

  numero_scalare = Acquisire_numero_scalare();

  i = 0;
  while(i < Leggere_righe(matrice1))
  {
    j = 0;
    while(j < Leggere_colonne(matrice1))
    {
      Scrivere_elemento(i, j, Leggere_elemento(matrice1, i, j) * numero_scalare, &matrice_scalare);
      j = j + 1;
    }
    i = i + 1;
  }
  Stampare_risultato(matrice_scalare);
  return;
}

/* ------------------ Funzione utile per il calcolo della trasposta ----------------------------- */
void Trasposta()
{
  matrice matrice1;
  int i, j;
  int n, m;
  matrice matrice_trasposta;

  do {
    printf("Quante righe deve avere la matrice su cui operare?  ");
    scanf("%d", &n);
    if(n < 1 || n > RIGHE)
    {
      printf("Errore! Numero di righe non valido!\n");
    }
  }while(n < 1 || n > RIGHE);

  do {
    printf("Quante colonne deve avere la matrice su cui operare?  ");
    scanf("%d", &m);
    if(m < 1 || m > COLONNE)
    {
      printf("Errore! Numero di colonne non valido!\n");
    }
  }while(m < 1 || m > COLONNE);
  Creare_matrice(&matrice1, n, m);
  Creare_matrice(&matrice_trasposta, m, n);

    printf("\n Acquisizione degli elementi della matrice:\n");
    Acquisire_matrice(&matrice1);

  i = 0;
  while(i < Leggere_righe(matrice1))
  {
    j = 0;
    while(j < Leggere_colonne(matrice1))
    {
      Scrivere_elemento(j, i, Leggere_elemento(matrice1, i, j), &matrice_trasposta);
      j = j + 1;
    }
    i = i + 1;
  }
  Stampare_risultato(matrice_trasposta);
  return;
}

/* ------------ Funzione utile per il calcolo del prodotto tra due matrici ------------ */

void Prodotto_matrici()
{
  int i, j, k;
  float prodotto, somma;
  matrice matrice1;
  matrice matrice2;
  matrice matrice_prodotto;
  int n, m1, m2;

  do {
    printf("Quante righe deve avere la prima matrice su cui operare?  ");
    scanf("%d", &n);
    if(n < 1 || n > RIGHE)
    {
      printf("Errore! Numero di righe non valido!\n");
    }
  }while(n < 1 || n > RIGHE);

  do {
    printf("\nSapendo che il numero di colonne della prima matrice \ncorrisponde al numero di righe della seconda matrice. \n");
    printf("Quante colonne deve avere la prima matrice su cui operare?  ");
    scanf("%d", &m1);
    if(m1 < 1 || m1 > COLONNE)
    {
      printf("Errore! Numero di colonne non valido!\n");
    }
  }while(m1 < 1 || m1 > COLONNE);
  Creare_matrice(&matrice1, n, m1);

  do {
    printf("Quante colonne deve avere la seconda matrice su cui operare?  ");
    scanf("%d", &m2);
    if(m2 < 1 || m2 > COLONNE)
    {
      printf("Errore! Numero di colonne non valido!\n");
    }
  }while(m2 < 1 || m2 > COLONNE);
  Creare_matrice(&matrice2, m1, m2);
  Creare_matrice(&matrice_prodotto, n, m2);

  printf("\n Acquisizione degli elementi della prima matrice:\n");
  Acquisire_matrice(&matrice1);
  printf("\n Acquisizione degli elementi della seconda matrice:\n");
  Acquisire_matrice(&matrice2);

  i = 0;         //indice delle righe della matrice1
  while(i < Leggere_righe(matrice1))
  {
    j = 0;         //indice delle colonne della matrice2
    while(j < Leggere_colonne(matrice2))
    {
      k = 0;        //indice delle righe della matrice2
      somma = 0;
      while(k < Leggere_righe(matrice2))
      {
        prodotto = Leggere_elemento(matrice1, i, k) * Leggere_elemento(matrice2, k, j);
        somma = somma + prodotto;
        k = k + 1;
      }
      Scrivere_elemento(i, j, somma, &matrice_prodotto);
      j = j + 1;
    }
    i = i + 1;
  }
  Stampare_risultato(matrice_prodotto);
  return;
}
