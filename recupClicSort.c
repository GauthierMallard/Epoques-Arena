#include "maBiblio.h"

void recupClicSort(t_joueur* lanceur, t_joueur* victime, t_joueur* joueurs, int choixSort, t_cases carte[LIGNES][COLONNES],int* nbjoueur)
{
    int porteeMin = lanceur->classeJ.sorts[choixSort].porteeMin*32;
    int porteeMax = lanceur->classeJ.sorts[choixSort].porteeMax*32;
    int coordx = 0;
    int coordy = 0;
    int i = 0;
    int tmpi = 0;
    int j = 0;
    int tmpj = 0;


    do
    {
        if (mouse_b&1)
        {
            coordx = mouse_x;
        }
        if (mouse_b&1)
        {
            coordy = mouse_y;
        }
    }while(!(testDist(lanceur, porteeMin, porteeMax, coordx, coordy) == 1));

    do
    {
        tmpi = i*32;
        tmpj = j*32;

        if(tmpi<coordx)
        {
            i++;
        }
        if(tmpj<coordy)
        {
            j++;
        }

    }while((tmpi<coordx)||(tmpj<coordy));

    if(carte[i-1][j-1].etat == 2)
    {
        for(int w = 0; w<*nbjoueur; w++)
        {
            if(joueurs[w].coordJ.lignes*32 == carte[i-1][j-1].lignes*32)
            {
                if(joueurs[w].coordJ.colonnes*32 == carte[i-1][j-1].colonnes*32)
                {
                    victime->id = joueurs[w]->id;
                }
            }
        }
    }
}
