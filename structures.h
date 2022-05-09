#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*
Definition des structures du projet
*/

///structure pour les sorts

typedef struct sorts
{
    char nomS[20];
    int paS;
    int pmS;
    int pvS;

}t_sort;

///structure pour les classes

typedef struct classes
{
    char nomC[20];
    t_sort sorts[4];

}t_classes;

///structure pour les coordonnees de chaques personnages

typedef struct coord
{
    int ligne;
    int colonne;

}t_coord;

#endif // HEADER_H_INCLUDED
