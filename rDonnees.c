#include "maBiblio.h"
<<<<<<< Updated upstream

///  Blinder numD lors de la demande de récupération de la donnée
=======
#include "structures.h"
/*
///  Blinder num lors de la demande de rÃ©cupÃ©ration de la donnÃ©e
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1)//Extrait sort par sort. numS = numero du sort
{
    lFichier(liste);

        ///LECTURE NOM DU SORT
>>>>>>> Stashed changes

char* rDonnees(char liste[TL][NBC], int numD)//numD = numéro de la donnée. 1 = Nom sort etc
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
<<<<<<< Updated upstream
=======
*/
>>>>>>> Stashed changes
