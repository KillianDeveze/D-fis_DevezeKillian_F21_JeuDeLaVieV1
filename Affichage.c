#include "Affichage.h"
#include <stdio.h>
#include "defineform.h"


//**************************
//Principe : Afficher un caractère en fonction de l'état de la cellule
//
//Entrée :Un tableau de cellule
//Sortie :Un catactères
//Note :
//***************************
void Affichage(Cellule clMontab[][TAILLE]){

    int n,i;

    for(n=0;n<TAILLE;n++){

        for(i=0;i<TAILLE;i++){

            if(clMontab[n][i]==vie)
                {printf("O");}
            else
                {printf(" ");}

        }printf("\n");
    }

}
