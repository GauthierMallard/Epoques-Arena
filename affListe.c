#include "maBiblio.h"

void affListe(char liste[TL][NBC])
{
    int j;
    for(j=0;j<TL;j++)//Affichage des données récupérées.
    {
        printf("%s", liste[j]);
    }
    printf("\n");
}
