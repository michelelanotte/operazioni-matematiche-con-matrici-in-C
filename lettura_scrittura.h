/*
 * lettura_scrittura.h
 *
 *  Created on: 30 nov 2016
 *      Author: Michele97
 */

#ifndef LETTURA_SCRITTURA_H_
#define LETTURA_SCRITTURA_H_

#include "globali.h"

void Scrivere_numero_righe(matrice *matrice_input, int n);
void Scrivere_numero_colonne(matrice *matrice_input, int m);
void Scrivere_elemento(int i, int j, float valore, matrice *matrice_output);
void Creare_matrice(matrice *matrice_input, int righe, int colonne);
int Leggere_righe(matrice matrice_input);
int Leggere_colonne(matrice matrice_input);
float Leggere_elemento(matrice matrice_input, int i, int j);

#endif /* LETTURA_SCRITTURA_H_ */
