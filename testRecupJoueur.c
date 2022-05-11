#include "maBiblio.h"

void testRecupJoueur(t_joueur joueur)
{
    int numS;
    int i;
    for(numS=0; numS<4; numS++)
        {
            for(i = 0; i<16; i++)
            {
                printf("%c", joueur.classeJ.sorts[numS].nomS[i]);
                printf("%c", joueur.classeJ.sorts[numS].nomS[i]);
            }
            printf("\n");

            ///LECTURE PORTEE MINIMALE

            printf("%d", joueur.classeJ.sorts[numS].porteeMin);
            printf("\n");

            ///LECTURE PORTEE MAXIMALE

            printf("%d", joueur.classeJ.sorts[numS].porteeMax);
            printf("\n");

            ///LECTURE COUT PA

            printf("%d", joueur.classeJ.sorts[numS].paS);
            printf("\n");

            ///LECTURE EFFET 1

            printf("%d", joueur.classeJ.sorts[numS].effet1);
            printf("\n");

            ///LECTURE EFFET 2

            printf("%d", joueur.classeJ.sorts[numS].effet2);
            printf("\n");

            ///LECTURE TYPE SORT

            printf("%d", joueur.classeJ.sorts[numS].type);
            printf("\n");

            ///LECTURE PROBA EFFET 1

            printf("%d", joueur.classeJ.sorts[numS].proba1);
            printf("\n");

            ///LECTURE PROBA EFFET 2

            printf("%d", joueur.classeJ.sorts[numS].proba2);
            printf("\n");
        }
        printf("pa : %d\n", joueur.pa);
        printf("pm : %d\n", joueur.pm);
        printf("pv : %d\n", joueur.pv);
}
