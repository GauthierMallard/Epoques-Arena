#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED

#define TL 4
#define NBC 50

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <allegro.h>
#include "structures.h"


///Prototypes des fonctions
int lFichier(char liste[TL][NBC]);
void affListe(char liste[TL][NBC]);
char* rDonnees(char liste[TL][NBC], int numD);
void hubmenus(int* avjeu);
void initialisation();

#endif // MABIBLIO_H_INCLUDED
