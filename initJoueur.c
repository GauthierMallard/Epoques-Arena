#include "maBiblio.h"

//sousprogramme d'initialisation des coordonnées des joueurs
void initJoueur(t_joueur* joueurs)
{
    //initialisation des coordonnées des joueurs
    joueurs[0].coordJ.lignes=4*32;
    joueurs[1].coordJ.lignes=17*32;
    joueurs[2].coordJ.lignes=2*32;
    joueurs[3].coordJ.lignes=17*32;
    joueurs[0].coordJ.colonnes=5*32;
    joueurs[1].coordJ.colonnes=6*32;
    joueurs[2].coordJ.colonnes=13*32;
    joueurs[3].coordJ.colonnes=17*32;
}
