#include "maBiblio.h"
#include "structures.h"

///  Blinder num lors de la demande de récupération de la donnee
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1)//Extrait sort par sort. numS = numero du sort
{
    lFichier(liste);

        ///LECTURE NOM DU SORT

    memmove(sort1.nomS, liste[0], sizeof(char)*8);//Remplacer 0 par j
    for(int i = 0; i<8; i++)
    {
        printf("%c", sort1.nomS[i]);
    }
    printf("\n");

    ///LECTURE PORTEE MINIMALE

    sort1.porteeMin = liste[0][9]-DTA;
    printf("%d", sort1.porteeMin);
    printf("\n");

    ///LECTURE PORTEE MAXIMALE

    sort1.porteeMax = liste[0][11]-DTA;
    printf("%d", sort1.porteeMax);
    printf("\n");

    ///LECTURE COUT PA

    sort1.paS = liste[0][13]-DTA;
    printf("%d", sort1.paS);
    printf("\n");

    ///LECTURE EFFET 1

    sort1.effet1 = liste[0][15]-DTA;
    printf("%d", sort1.effet1);
    printf("\n");

    ///LECTURE EFFET 2

    sort1.effet2 = liste[0][17]-DTA;
    printf("%d", sort1.effet2);
    printf("\n");

    ///LECTURE TYPE SORT

    sort1.type = liste[0][19]-DTA;
    printf("%d", sort1.type);
    printf("\n");

    ///LECTURE PROBA EFFET 1

    sort1.proba1 = liste[0][21]-DTA;
    printf("%d", sort1.proba1);
    printf("\n");

    ///LECTURE PROBA EFFET 2

    sort1.proba2 = liste[0][23]-DTA;
    printf("%d", sort1.proba2);
    printf("\n");
    return sort1;
}
