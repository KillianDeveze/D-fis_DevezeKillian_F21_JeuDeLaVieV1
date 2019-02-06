#ifndef CELULLE_H_INCLUDED
#define CELULLE_H_INCLUDED


//const
#define TAILLE2 40
#define TAILLE 25

//structure
typedef enum Cellule{vie,mort}Cellule;

//prototypes
extern void iniTab(Cellule clMonTab[][TAILLE]);
extern void parcoursTab(Cellule clMonTab[][TAILLE],Cellule newclMonTab[][TAILLE]);
extern int CelluleVoisine(Cellule clMonTab[][TAILLE],int nY,int nX);
extern void Nouvellevie(Cellule newclMonTab[][TAILLE],int nY,int nX);
extern void Nouvellemort(Cellule newclMonTab[][TAILLE],int nY,int nX);
extern void copieTableau(Cellule clMonTab[][TAILLE],Cellule newclMonTab[][TAILLE]);
extern void Compteurfichier(Cellule clMonTab[][TAILLE],int *nCelluleVivante,int *nCelluleMorte);

#endif // CELULLE_H_INCLUDED
