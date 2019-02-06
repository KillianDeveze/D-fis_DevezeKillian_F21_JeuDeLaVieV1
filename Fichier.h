#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED
#include <string.h>
#include <stdio.h>
#include "Celulle.h"


extern void FWrite(FILE* pFile,int nCelluleVivante,int nCelluleMorte,int Generation);
extern void FRead(FILE* pFile);
extern void FVide(FILE* pFile);

#endif // FICHIER_H_INCLUDED
