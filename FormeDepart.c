#include "FormeDepart.h"



//**************************
//Principe : Permet d'initialiser manuellement des cellules vivantes � la premi�re g�n�ration
//
//Entr�e :Un tableau de cellule
//Sortie :Tablea de cellule avec n cellule initialis�s vivantes
//Note :
//***************************
void initVie(Cellule clMonTab[][TAILLE]){

        int nRandom,n,i;
        srand(time(NULL));

        for (n=0;n<TAILLE;n++){
            for (i=0;i<TAILLE;i++){

                nRandom= rand()%100+1;
                if(nRandom<50)
                    {
                        clMonTab[n][i]=vie;
                    }
            }
        }
}

