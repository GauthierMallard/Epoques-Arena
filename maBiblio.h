#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED

#define TL 4 //Taille de la liste de sorts
#define NBC 50 //Nombre de caracteres sur une ligne du fichier
#define DTA 48 //Decalage table ASCII pour les entiers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <allegro.h>
#include "structures.h"


///Prototypes des fonctions
int lFichier(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts
void affListe(char liste[TL][NBC]);//Affiche la liste dans laquelle on recupere le fichier
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1);//Copie des donnees dans une structure de type t_sort
void hubmenus(BITMAP* menu,BITMAP* curseur,BITMAP* cjoueur,int* avjeu,int* nbjoueur);//redirige le programmes vers l'action effectue par le joueur
void initialisation();//initialise Allegro
void lancermenu(BITMAP* menu,BITMAP* curseur,int* avjeu);//affiche le menu et gere les interactions avec l'utilisateur
void nombrejoueurs(BITMAP* fond,BITMAP* curseur,int* avjeu,int* nbjoueur);//permet de choisir le nombre de joueurs avant le debut de la partie

#endif // MABIBLIO_H_INCLUDED
