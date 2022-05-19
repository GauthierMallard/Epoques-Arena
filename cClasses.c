#include "maBiblio.h"

t_classes cClasses(t_classes classe1)
{
    int numS = 0;
    char liste[TL][NBC];
    t_sort sort;
    printf("ENTRER NOM :\n");
    gets(classe1.nomC);
    lFichier(liste);
    for(numS=0; numS<4; numS++)
    {

        classe1.sorts[numS] = rDonnees(liste,numS,sort);

        /*for(int i = 0; i<16; i++)
        {
            printf("%c", classe1.sorts[numS].nomS[i]);
        }
        printf("\n");

        ///LECTURE PORTEE MINIMALE

        printf("%d", classe1.sorts[numS].porteeMin);
        printf("\n");

        ///LECTURE PORTEE MAXIMALE

        printf("%d", classe1.sorts[numS].porteeMax);
        printf("\n");

        ///LECTURE COUT PA

        printf("%d", classe1.sorts[numS].paS);
        printf("\n");

        ///LECTURE EFFET 1

        printf("%d", classe1.sorts[numS].effet1);
        printf("\n");

        ///LECTURE EFFET 2

        printf("%d", classe1.sorts[numS].effet2);
        printf("\n");

        ///LECTURE TYPE SORT

        printf("%d", classe1.sorts[numS].type);
        printf("\n");

        ///LECTURE PROBA EFFET 1

        printf("%d", classe1.sorts[numS].proba1);
        printf("\n");

        ///LECTURE PROBA EFFET 2


        printf("%d", classe1.sorts[numS].proba2);
        printf("\n");*/
        ///LE CODE EN COMMENTAIRE AU DESSUS SERT A VERIFIER LE FONCTIONNEMENT DU SS PROGRAMME
    }
    return classe1;
}
