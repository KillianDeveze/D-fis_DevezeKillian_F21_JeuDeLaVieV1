#include "Celulle.h"
#define MIN 0

//**************************
//Principe : Initialiser le tableau contenant les cellules
//
//Entr�e :Un tableau de cellule
//Sortie :Le tableau de cellule initialis�
//Note :
//***************************
void iniTab(Cellule clMonTab[][TAILLE]){

    int n,i;

    for(n=0;n<TAILLE;n++){

        for(i=0;i<TAILLE;i++){

            clMonTab[n][i]=mort;

        }
    }

}
//**************************
//Principe : permet de check chaque cellule de mon tableau initial
//
//Entr�e :Un tableau de cellule
//Sortie :
//Note :
//***************************
void parcoursTab(Cellule clMonTab[][TAILLE],Cellule newclMonTab[][TAILLE]){

    int n,i=0;

    for(n=0;n<TAILLE;n++){

        for(i=0;i<TAILLE;i++){

            if(CelluleVoisine(clMonTab,n,i)==3)
                {

                    Nouvellevie(newclMonTab,n,i);

                }
            else{
                if(CelluleVoisine(clMonTab,n,i)>3 || CelluleVoisine(clMonTab,n,i)<2)
                    {
                        Nouvellemort(newclMonTab,n,i);

                    }

                }
            }
        }
}

//**************************
//Principe : Permet de checker le nombres de cellule � cot� d'une cellule s�lectionner
//
//Entr�e :Une cellule de mon tab de Cellule
//Sortie :Le tableau de cellule initialis�
//Note :
//***************************
int CelluleVoisine(Cellule clMonTab[][TAILLE],int nY,int nX){

    int nResultat=0;



    if(clMonTab[nY+1][nX-1]==vie && nY+1<TAILLE && nX-1>MIN){nResultat++;};
    if(clMonTab[nY+1][nX]==vie && nY+1<TAILLE){nResultat++;};
    if(clMonTab[nY+1][nX+1]==vie && nY+1<TAILLE && nX+1<TAILLE){nResultat++;};
    if(clMonTab[nY][nX-1]==vie && nX-1>MIN){nResultat++;};
    if(clMonTab[nY][nX+1]==vie && nX+1<TAILLE){nResultat++;};
    if(clMonTab[nY-1][nX-1]==vie && nY-1>MIN && nX-1>MIN){nResultat++;};
    if(clMonTab[nY-1][nX]==vie && nY-1>MIN ){nResultat++;};
    if(clMonTab[nY-1][nX+1]==vie && nY-1>MIN && nX+1<TAILLE){nResultat++;};

return nResultat;}

//**************************
//Principe : Permet de rendre vivante la cellule vivante de la prochaine g�n�ration dans le nouveau tableau
//
//Entr�e :Une cellule de mon tab de Cellule
//Sortie :La nouvelle cellule dans le nouveau tableau
//Note :
//***************************
void Nouvellevie(Cellule newclMonTab[][TAILLE],int nY,int nX){


    newclMonTab[nY][nX]=vie;

}

//**************************
//Principe : Permet de rendre morte la cellule vivante de la prochaine g�n�ration dans le nouveau tableau
//
//Entr�e :Une cellule de mon tab de Cellule
//Sortie :La nouvelle cellule dans le nouveau tableau
//Note :
//***************************
void Nouvellemort(Cellule newclMonTab[][TAILLE],int nY,int nX){

    newclMonTab[nY][nX]=mort;

}

//**************************
//Principe : Permet de copier la nouvelle g�n�ration du deuxi�me tableau dans le tableau initial
//
//Entr�e :Mon tableau initial , le nouveau tableau
//Sortie :Tableau initial avec nouvelle g�n�ration
//Note :
//***************************
void copieTableau(Cellule clMonTab[][TAILLE],Cellule newclMonTab[][TAILLE]){

      int n,i;

    for(n=0;n<TAILLE;n++){

        for(i=0;i<TAILLE;i++){

            clMonTab[n][i]=newclMonTab[n][i];

        }
    }

}

//**************************
//Principe : Permet de compter le nombre de cellule vivantes et morte dans le tableau
//
//Entr�e :Mon tableau initial
//Sortie :Nombre de cellules vivantes et nombre de cellules mortes
//Note :
//***************************
void Compteurfichier(Cellule clMonTab[][TAILLE],int *nCelluleVivante,int *nCelluleMorte){

    int n,i;

    for(n=0;n<TAILLE;n++){

        for(i=0;i<TAILLE;i++){

            if(clMonTab[n][i]==vie)
                {*nCelluleVivante=*nCelluleVivante+1;}
            else
                {*nCelluleMorte=*nCelluleMorte+1;}

        }
    }

}

