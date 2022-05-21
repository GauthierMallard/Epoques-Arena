#ifndef MABIBLIO_H_INCLUDED
#define MABIBLIO_H_INCLUDED
#include "structures.h"

#define TL 4 //Taille de la liste de sorts
#define NBC 50 //Nombre de caracteres sur une ligne du fichier
#define DTA 48 //Decalage table ASCII pour les entiers.
#define LIGNES 20 //Nombre de lignes dans la matrice carte
#define COLONNES 20 //Nombre de colonnes dans la matrice carte
#define NBIMAGE 7 // nombre d'image pour faire le mouvement qui court


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <allegro.h>
#include "structures.h"



///Prototypes des fonctions
int lFichier(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la premiere classe
int lFichier1(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la 2eme classe
int lFichier2(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la 3eme classe
int lFichier3(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la 4eme classe
void affListe(char liste[TL][NBC]);//Affiche la liste dans laquelle on recupere le fichier
void alloueCases(t_cases carte[LIGNES][COLONNES]);//alloue les emplacements nécésaires pour les cases
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1);//Copie des donnees dans une structure de type t_sort
t_classes cClasses(t_classes classe1);//Fonction appellee lors de la creation d'une classe.
t_classes cClasses1(t_classes classe1);//Identique a cClasses, c'est juste pas le meme fichier ouvert
t_classes cClasses2(t_classes classe1);//Identique a cClasses, c'est juste pas le meme fichier ouvert
t_classes cClasses3(t_classes classe1);//Identique a cClasses, c'est juste pas le meme fichier ouvert
t_joueur cJoueur(t_joueur joueur,int choix);//Fonction permettant le remplissage d'une structure de type t_joueur. Renvoie une structure de type t_joueur
t_joueur* nbmJoueurs();//Fonction permettant l'allocation d'un tableau dynamique en fonction du nbm de joueurs. Renvoie le tableau par adresse
void testRecupJoueur(t_joueur joueur);//Procédure permettant d'afficher les donnees stockees pour verifier bonne recuperation
void lancerSort(t_joueur* lanceur, int choixSort, t_cases carte[LIGNES][COLONNES], t_joueur* joueurs, int* nbjoueur);//Procédure permettant d'appliquer les effets du sort selectionne par le joueur. Int choixSort correspond a la case sur laquelle le joueur a clique(entre 0 et 4).
//Il faudra recuperer ce ss programme et l'associer a un personnage par la suite -> Pour celui qui s'en occupe.
void initialisation();//initialise Allegro
void lancermenu(BITMAP* menu,BITMAP* curseur,int* avjeu);//affiche le menu et gere les interactions avec l'utilisateur
void nombrejoueurs(BITMAP* fond,BITMAP* curseur,int* avjeu,int* nbjoueur);//permet de choisir le nombre de joueurs avant le debut de la partie
void credits(BITMAP* fond,BITMAP* curseur,int* avjeu);// affiche les credits
int choixclasse(BITMAP* fond,BITMAP* curseur);//permet au joueur de choisir sa classe
void hubmenus(BITMAP* menu,BITMAP* curseur,BITMAP* cjoueur,BITMAP *credit,int* avjeu,int* nbjoueur);//redirige le programmes vers l'action effectue par le joueur
void chemin(BITMAP* decor,BITMAP* grillage,BITMAP* curseur,BITMAP* page, BITMAP* persocourt,BITMAP* perso0w,BITMAP* perso1w,BITMAP* perso2w,BITMAP* perso3w,BITMAP* coeur,BITMAP* fondlave,BITMAP* epee,BITMAP* chaussure,BITMAP* joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases dest);
void deplacements(BITMAP* decor,BITMAP* grillage,BITMAP* curseur,BITMAP* page, BITMAP* persocourt,BITMAP* perso0w,BITMAP* perso1w,BITMAP* perso2w,BITMAP* perso3w,BITMAP* coeur,BITMAP* fondlave,BITMAP* epee,BITMAP* chaussure,BITMAP* joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases carte[LIGNES][COLONNES],int* test);
void animationPersonnageCourt(BITMAP*decor,BITMAP* grillage,BITMAP* curseur,BITMAP*page, BITMAP*persocourt,BITMAP*perso0w,BITMAP*perso1w,BITMAP*perso2w,BITMAP*perso3w,BITMAP*coeur,BITMAP*fondlave,BITMAP*epee,BITMAP*chaussure,BITMAP*joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,char nomfichier[256], t_joueur* joueurs, int *nbjoueur, int jqj, t_cases dest);
int choixSort(BITMAP*page, BITMAP*affichagesort,t_joueur*joueurs, int jqj);
void lancerSort(t_joueur* lanceur, int choixSort, t_cases carte[LIGNES][COLONNES], t_joueur* joueurs, int* nbjoueur);
int testDist(t_joueur* lanceur, int porteeMin, int porteeMax, int coordx, int coordy);
void recupClicSort(t_joueur* lanceur, t_joueur* victime, t_joueur* joueurs, int choixSort, t_cases carte[LIGNES][COLONNES],int* nbjoueur);//sous programme de recupération de la case attaquée
//sous programme qui gere toute la partie en jeu du programme et redirige celui-ci vers les bon sous-programme pour chaque action de l'utilisateur
void enJeu(BITMAP* decor,BITMAP* grillage,BITMAP* curseur,int* avjeu,BITMAP *choijoueur,BITMAP *credit,BITMAP *coeur,BITMAP *epee,BITMAP *chaussure,BITMAP *perso0w,BITMAP *perso1w,BITMAP *perso2w,BITMAP *perso3w,BITMAP *persocourt,BITMAP *fondlave,BITMAP *joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,t_joueur* joueurs,int* nbjoueur,t_cases carte[LIGNES][COLONNES]);
//sous programme permettant de remplis automatiquement le buffer de jeu
void remplissageBuffer(BITMAP* decor,BITMAP* grillage,BITMAP* page,BITMAP *coeur,BITMAP *epee,BITMAP *chaussure,BITMAP *perso0w,BITMAP *perso1w,BITMAP *perso2w,BITMAP *perso3w,BITMAP *persocourt,BITMAP *fondlave,BITMAP *joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,t_joueur* joueurs,int jqj,int nbjoueur);
void initJoueur(t_joueur* joueurs, int* nbJoueurs);



///fonctions utiles souvent
//textprintf_ex(page,font,60,90,makecol(255,0,0), makecol(0,0,0),"%4d %4d",mouse_x,mouse_y);
//textprintf_ex(page, font, 200, 200, makecol(255, 0, 255),-1,"Ca s'affiche");
#endif // MABIBLIO_H_INCLUDED
