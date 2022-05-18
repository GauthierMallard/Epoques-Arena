#include "maBiblio.h"

void recupClicSort(t_joueur* lanceur, t_joueur* victime, int choixSort, )
{
    int porteeMin = lanceur.classeJ.sorts[choixSort].porteeMin*32;
    int porteeMax = lanceur.classeJ.sorts[choixSort].porteeMax*32;
    int coordx = 0;
    int coordy = 0;


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

    }while()



}
