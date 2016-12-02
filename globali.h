/*
 * globali.h
 *
 *  Created on: 30 nov 2016
 *      Author: Michele97
 */

#ifndef GLOBALI_H_
#define GLOBALI_H_

#include<stdio.h>
#include<stdlib.h>

// numero massimo di righe e colonne per le matrici
#define RIGHE 30
#define COLONNE 35

//definizione della struttura di tipo matrice
typedef struct {
  int righe;
  int colonne;
  float *valori;
} matrice;

#endif /* GLOBALI_H_ */
