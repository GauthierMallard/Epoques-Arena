#include "maBiblio.h"

///  Blinder numD lors de la demande de r�cup�ration de la donn�e

char* rDonnees(char liste[TL][NBC], int numD)//numD = num�ro de la donn�e. 1 = Nom sort etc
{
    int i = 0;
    int j = 0;
    int nbmpde = 0;
    char* dExtraites = (char*)malloc(TL * sizeof(char));
    for(i=0; i<TL; i++)
    {
        for(j=0; j<NBC; j++)
        {
            if(liste[i][j] == '!')
            {
                nbmpde = nbmpde+1;
            }
            if(nbmpde == numD)
            {
                dExtraites[j] = liste[TL][j+1];
            }
        }
    }
    for(i=0; i<TL; i++)
    {
        printf("%c\n", dExtraites[i]);
    }
    return dExtraites;
    free(dExtraites);
}
