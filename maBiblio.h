#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
#include "structures.h"

#define TL 4 //Taille de la liste de sorts
#define NBC 50 //Nombre de caracteres sur une ligne du fichier
#define DTA 48 //Decalage table ASCII pour les entiers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>


///Prototypes des fonctions
int lFichier(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts
void affListe(char liste[TL][NBC]);//Affiche la liste dans laquelle on recupere le fichier
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1);//Copie des donnees dans une structure de type t_sort

//Je vais prototyper le ss programme permettant de creer une classe de sorts.
//Il faudra recuperer ce ss programme et l'associer a un personnage par la suite -> Pour celui qui s'en occupe.

#endif // MABIBLIO_H_INCLUDED
