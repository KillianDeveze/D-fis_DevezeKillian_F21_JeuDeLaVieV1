#include "Affichage.h"
#include <stdio.h>
#include "defineform.h"


//**************************
//Principe : Afficher un caract�re en fonction de l'�tat de la cellule
//
//Entr�e :Un tableau de cellule
//Sortie :Un catact�res
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
