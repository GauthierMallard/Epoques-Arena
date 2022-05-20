#include "maBiblio.h"

void lancerSort(t_joueur* lanceur, int choixSort)
{
    /*
    //Fonction a lancer lors du clic d'un joueur sur une des cases de sort

    t_joueur* victime;
    srandom(time(NULL));

    victime.id<-//id de l'adversaire sur lequel le joueur clic;

    lanceur.pa<-(lanceur.pa - lanceur.classeJ.sorts[choixSort].paS);

    long int alea1 = (random()/(lanceur.classeJ.sorts[choixSort].proba1))+1;
    long int alea2 = (random()/(lanceur.classeJ.sorts[choixSort].proba2))+1;
        /*

Type 0 : s’applique sur le joueur. On utilise que effet 1 pour pv et effet 2 pour pm.
Type 1 : s’applique dans une zone sous forme de croix. Inflige les effets à l’adversaire. Effet 1 = pv effet2 = pm
Type 2 : s’applique dans une zone circulaire. Inflige les effets à l’adversaire. Effet 1 = pv effet 2 = pm
Type 3 : s’applique dans une zone sous forme de croix. Permet de se régénérer. Effet 1 = pv perdus effet 2 = pv gagnes.
Type 4 : s’applique dans une zone circulaire. Permet de se régénérer. Effet 1 = pv perdus effet 2 = pv gagnés.

*/
/*
    if(lanceur.classeJ.sorts[choixSort].type == 0)
    {
        if(alea1 < 3)
        {
            lanceur.pv<-(lanceur.pv + lanceur.classeJ.sorts[choixSort].effet1);
        }
        if(alea2 < 3)
        {
            lanceur.pm<-(lanceur.pm + lanceur.classeJ.sorts[choixSort].effet2);
        }

    }

    if(lanceur.classeJ.sorts[choixSort].type == 1)
    {
        if(alea1 < 3)
        {
            victime.pv<-(victime.pv - lanceur.classeJ.sorts[choixSort].effet1);
        }
        if(alea2 < 3)
        {
            victime.pm<-(victime.pm - lanceur.classeJ.sorts[choixSort].effet2);
        }
    }
    if(lanceur.classeJ.sorts[choixSort].type == 2)
    {
        if(alea1 < 3)
        {
            victime.pv<-(victime.pv - lanceur.classeJ.sorts[choixSort].effet1);
        }
        if(alea2 < 3)
        {
            victime.pm<-(victime.pm - lanceur.classeJ.sorts[choixSort].effet2);
        }
    }

    if(lanceur.classeJ.sorts[choixSort].type == 3)
    {
        if(alea1 < 3)
        {
            victime.pv<-(victime.pv - lanceur.classeJ.sorts[choixSort].effet1);
        }
        if(alea2 < 3)
        {
            lanceur.pv<-(lanceur.pv + lanceur.classeJ.sorts[choixSort].effet2);
        }
    }

    if(lanceur.classeJ.sorts[choixSort].type == 4)
    {
        if(alea1 < 3)
        {
            victime.pv<-(victime.pv - lanceur.classeJ.sorts[choixSort].effet1);
        }
        if(alea2 < 3)
        {
            lanceur.pv<-(lanceur.pv + lanceur.classeJ.sorts[choixSort].effet2);
        }
    }

*/

    /*Je pense qu'il n'y a pas besoin de return quoi que ce soit.
    Lorsque le joueur lance un sort, on lui enleve des pa le temps d'un tour et on applique les effets
    pour toute la duree de la partie (peut etre regler ce probleme en simplifiant les sorts)
    Il faut donc recuperer en parametre l'id du joueur qui attaque et l'id du joueur sur qui le sort est envoye.
    EN PARLER AVEC LES AUTRES VOIR SI ILS N'ONT PAS D'AUTRES IDEES DE SOLUTION.*/
}
