#include "maBiblio.h"

t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1)//Extrait sort par sort. numS = numero du sort
{


    ///LECTURE NOM DU SORT

    memmove(sort1.nomS, liste[numS], sizeof(char)*16);


    ///LECTURE PORTEE MINIMALE

    sort1.porteeMin = liste[numS][17]-DTA;


    ///LECTURE PORTEE MAXIMALE

    sort1.porteeMax = liste[numS][19]-DTA;

    ///LECTURE COUT PA

    sort1.paS = liste[numS][21]-DTA;


    ///LECTURE EFFET 1

    sort1.effet1 = liste[numS][23]-DTA;

    ///LECTURE EFFET 2

    sort1.effet2 = liste[numS][25]-DTA;

    ///LECTURE TYPE SORT

    sort1.type = liste[numS][27]-DTA;


    ///LECTURE PROBA EFFET 1

    sort1.proba1 = liste[numS][29]-DTA;


    ///LECTURE PROBA EFFET 2

    sort1.proba2 = liste[numS][31]-DTA;

    return sort1;
}


