#include "maBiblio.h"
#include "structures.h"

///  Blinder num lors de la demande de récupération de la donnée
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1)//Extrait sort par sort. numS = numero du sort
{
    lFichier(liste);

        ///LECTURE NOM DU SORT

    memmove(sort1.nomS, liste[numS], sizeof(char)*16);
    for(int i = 0; i<16; i++)
    {
        printf("%c", sort1.nomS[i]);
    }
    printf("\n");

    ///LECTURE PORTEE MINIMALE

    sort1.porteeMin = liste[numS][17]-DTA;
    printf("%d", sort1.porteeMin);
    printf("\n");

    ///LECTURE PORTEE MAXIMALE

    sort1.porteeMax = liste[numS][19]-DTA;
    printf("%d", sort1.porteeMax);
    printf("\n");

    ///LECTURE COUT PA

    sort1.paS = liste[numS][21]-DTA;
    printf("%d", sort1.paS);
    printf("\n");

    ///LECTURE EFFET 1

    sort1.effet1 = liste[numS][23]-DTA;
    printf("%d", sort1.effet1);
    printf("\n");

    ///LECTURE EFFET 2

    sort1.effet2 = liste[numS][25]-DTA;
    printf("%d", sort1.effet2);
    printf("\n");

    ///LECTURE TYPE SORT

    sort1.type = liste[numS][27]-DTA;
    printf("%d", sort1.type);
    printf("\n");

    ///LECTURE PROBA EFFET 1

    sort1.proba1 = liste[numS][29]-DTA;
    printf("%d", sort1.proba1);
    printf("\n");

    ///LECTURE PROBA EFFET 2

    sort1.proba2 = liste[numS][31]-DTA;
    printf("%d", sort1.proba2);
    printf("\n");
    return sort1;
}

