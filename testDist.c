#include "maBiblio.h"

int testDist(t_joueur* lanceur, int porteeMin, int porteeMax, int coordx, int coordy)
{
    if(abs(lanceur.coordJ.lignes - coordx)>porteeMin)
    {
        if(abs(lanceur.coordJ.lignes - coordx)<porteeMax)
        {
            if(abs(lanceur.coordJ.colonnes - coordy)>porteeMin)
            {
                if(abs(lanceur.coordJ.colonnes - coordy)<porteeMax)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}
