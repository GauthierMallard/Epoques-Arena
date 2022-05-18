#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*
Definition des structures du projet
*/

//structure pour les sorts

typedef struct sorts
{
    char nomS[16];
/*Nom du sort, il faudra afficher toutes les donnees a l'ecran pour informer le joueur*/
    int porteeMin;
    int porteeMax;
/*Portee minimale du sort, portee maximale du sort*/
    int paS;
/*Nombre de pa que le sort coutera au joueur qui le lance*/
    int effet1;
    int effet2;
/*L'appelation effet permet d'eviter d'avoir trop de parametres.
Elle designe l'effet qu'aura le sort sur le joueur qui le recoit (pm ou pv)*/
    int type;
/*Type permet de définir le type du sort :
0 = Sort qui ne s'applique que sur le joueur (porteeMin et porteeMax = 0
1 = Sort dont la zone est une croix autour du joueur
2 = Sort dont la zone est tout autour du joueur, elle dessine un cercle autour de lui*/
    int proba1;
    int proba2;
/*Designe les probalites que les effets ait lieu. Il faut commencer par proba2
car ce sera l'effet le plus puissant. Si jamais proba2 ne permet pas au sort d'avoir effet
on utilise proba1 au moment du lancement du sort. (Si jamais le commentaire n'est pas clair, on peut le reecrire)*/

}t_sort;

//structure pour les classes

typedef struct classes
{
    char nomC[20];
/*Nom de la classe*/
    t_sort sorts[4];
/*Tableau de 4 structures de type t_sort (=Les 4 sorts de chaque classe)*/

}t_classes;

//structure pour les coordonnees de chaques personnages

typedef struct coord
{
    int ligne;
    int colonne;

}t_coord;

//structure pour chaque joueur

typedef struct joueur
{
    int id; //Contient le numéro du joueur, permet de gérer l'ordre de jeu, A AFFECTER DES LE CHOIX DU NOMBRE DE JOUEUR DANS LE MENU
    int classe; //Contient le numéro de la classe choisit. On charge la structure appropriee en fonction de cet entier
    ///VERIFIER POSSIBILITE UTILISATION CLASSE POUR CHARGER DESIGN DU JOUEUR.
    t_classes classeJ; //Contient la classe du joueur
    t_coord coordJ;//Contient les coordonnees du joueur
    int pa;
    int pm;
    int pv;
}t_joueur;



#endif // HEADER_H_INCLUDED
