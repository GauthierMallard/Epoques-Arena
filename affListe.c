#include "maBiblio.h"

void affListe(char liste[TL][NBC])
{
    int j;
    for(j=0;j<TL;j++)//Affichage des donn�es r�cup�r�es.
    {
        printf("%s", liste[j]);
    }
    printf("\n");
}
