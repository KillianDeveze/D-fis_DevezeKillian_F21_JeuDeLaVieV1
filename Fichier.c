#include "Fichier.h"

//**************************
//Principe : Permet d'�crire dans un fichier les cellules vivantes et morte a chaque g�n�rations
//
//Entr�e :nombre de cellule vivantes , nombre de cellule morte et num�ro de la g�n�ration
//Sortie : fichier texte
//Note :
//***************************
void FWrite(FILE* pFile,int nCelluleVivante,int nCelluleMorte,int Generation){

     pFile = fopen ("DetailsCellule.txt","a"); //=pointeur de fonction
     fflush(stdin);

     if(fopen ("DetailsCellule.txt","a")==NULL) //si le chemin du fichier est faux/inexistant
     {
         perror("Erreur de cr�ation de fichier");
     }
     else
     {

         fprintf(pFile,"Generation :%d",Generation+1);
         fputc('\n',pFile);
         fprintf(pFile,"Cellule vivante :%d",nCelluleVivante);
         fputc('\n',pFile);
         fprintf(pFile,"Cellule morte :%d",nCelluleMorte);
         fputc('\n',pFile);

     }
     fclose(pFile);
}

//**************************
//Principe : Affiche le texte cotenu dans le fichier text
//
//Entr�e : Fichier text pr�alablement rempli avec le nombre de cellules vivantes et mortes
//Sortie :Informations contenus dans le fichier text
//Note :
//***************************
void FRead(FILE* pFile){

    char cLecture[100];


     pFile = fopen ("DetailsCellule.txt","r");
     rewind(pFile);

        if(fopen ("DetailsCellule.txt","a")==NULL) //si le chemin du fichier est faux/inexistant
     {
         perror("Erreur de lecture de fichier");
     }
     else
     {
         while(fgets(cLecture,1000,pFile)!=NULL)
         {

               printf("%s\n",cLecture);

         }
     }

     fclose (pFile);

}
//**************************
//Principe : Permet de vider le contenu du fichier text a chaque fois que le programme d�marre
//
//Entr�e : Fichier texte pFile
//Sortie : Fichier texte pFIle r�initialis�
//Note :
//***************************
void FVide(FILE* pFile){

     pFile=fopen("DetailsCellule.txt","w");
     fclose (pFile);
}

