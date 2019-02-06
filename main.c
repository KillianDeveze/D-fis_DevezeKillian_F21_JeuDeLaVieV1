#include <stdio.h>
#include <stdlib.h>
#include "Celulle.h"
#include "Affichage.h"
#include "Fichier.h"
#include "FormeDepart.h"


int main(){

    //déclaration des tableau contenant les cellules
    Cellule clMonTab[TAILLE][TAILLE];
    Cellule newclMonTab[TAILLE][TAILLE];
    //Initialisation des variables
    int nCycle,ncpt; //Entier utilisés pour des boucles//PS : nCycle permet aussi d'indiquer la génération de cellule
    int nChoix=0; //permet à l'utilisateur de faire un choix entre tester le jeu de la vie ou afficher l'état des cellules
    int nCelluleVivante,nCelluleMorte; //compteur permettant de voire le nombre de cellulles vivantes ou mortes à chaque génération
    FILE * pFile=NULL; //déclaration du fichier text
    FVide(pFile); //permet de vider le fichier text a chaque nouvelle utilisation
    iniTab(clMonTab);
    iniTab(newclMonTab);
    initVie(clMonTab);

    do{

            printf("Bonjour et bienvenue dans le jeu de la vie !\n");
            printf("Que souhaitez vous faire ?\n");
            printf("Tapez 1 pour Tester le jeu de la vie\n");
            printf("Tapez 2 pour lire le fichier \n");
            printf("Tapez 3 pour quittez le programme \n");
            fflush(stdin);
            scanf("%d",&nChoix);

            switch(nChoix){
                case 1:
                        FVide(pFile);
                        printf("Combien de cycle ?");
                        scanf("%d",&nCycle);
                        for(ncpt=0;ncpt<nCycle;ncpt++){

                            nCelluleVivante=0;
                            nCelluleMorte=0;
                            Affichage(clMonTab);
                            printf("----------------------------------------------------------------\n");
                            parcoursTab(clMonTab,newclMonTab);
                            copieTableau(clMonTab,newclMonTab);
                            Compteurfichier(clMonTab,&nCelluleVivante,&nCelluleMorte);
                            FWrite(pFile,nCelluleVivante,nCelluleMorte,ncpt);
                            system("pause");
                            system("cls");
                        }break;
                case 2 :FRead(pFile);
                        system("pause");
                        system("cls");
                        ;break;
                case 3 : break;
            }

        }while(nChoix!=3);

}


