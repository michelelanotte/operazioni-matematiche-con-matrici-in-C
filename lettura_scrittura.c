#include "lettura_scrittura.h"

int Leggere_righe(matrice matrice_input)
{
  return matrice_input.righe;
}

int Leggere_colonne(matrice matrice_input)
{
  return matrice_input.colonne;
}

float Leggere_elemento(matrice matrice_input, int i, int j)
{
  return *(matrice_input.valori + (i * matrice_input.colonne) + j);
}



void Scrivere_numero_righe(matrice *matrice_input, int n)
{
  matrice_input->righe = n;
  return;
}

void Scrivere_numero_colonne(matrice *matrice_input, int m)
{
  matrice_input->colonne = m;
  return;
}

void Scrivere_elemento(int i, int j, float valore, matrice *matrice_output)
{
  *(matrice_output->valori + (i * Leggere_colonne(*matrice_output)) + j) = valore;
  return;
}

void Creare_matrice(matrice *matrice_input, int righe, int colonne)
{
  Scrivere_numero_righe(matrice_input, righe);
  Scrivere_numero_colonne(matrice_input, colonne);
  matrice_input->valori = (float *) calloc(righe*colonne, sizeof(float));
  return;
}
