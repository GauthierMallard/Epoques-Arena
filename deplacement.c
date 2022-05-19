#include "maBiblio.h"

void deplacements(BITMAP* decor,BITMAP* page, BITMAP* persocourt,BITMAP* perso0w,BITMAP* perso1w,BITMAP* perso2w,BITMAP* perso3w,BITMAP* coeur,BITMAP* fondlave,BITMAP* epee,BITMAP* chaussure,BITMAP* joueurSuivant,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases carte[LIGNES][COLONNES])
{
    t_cases dest;


    if(mouse_b&1)
    {
        dest.lignes = mouse_x;
        dest.colonnes = mouse_y;
        dest.etat = carte[(mouse_x - (mouse_x%32))/32][(mouse_y - (mouse_y%32))/32].etat;
    }

    do
    {
        if(dest.lignes < 32*20 && dest.colonnes < 32*20)
        {
            if(abs(joueurs[jqj].coordJ.colonnes - dest.colonnes)<2 && abs(joueurs[jqj].coordJ.lignes - dest.lignes)<2)
            {
                if(dest.etat == 0)
                {
                    chemin(decor, page, persocourt, perso0w, perso1w, perso2w, perso3w, coeur, fondlave, epee, chaussure, joueurSuivant, nomfichier, joueurs, nbjoueur, jqj, dest);
                    joueurs[jqj].pm--;
                }

            }
        }
    }
    while(joueurs[jqj].pm>=0);
}
