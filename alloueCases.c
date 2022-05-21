#include "maBiblio.h"

void alloueCases(t_cases carte[LIGNES][COLONNES])
{
    int i, j;
    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {
            carte[i][j].lignes = 32*i;
            carte[i][j].colonnes = 32*j;
            carte[i][j].etat = 0;
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=3; j<6;j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(i=0; i<6; i++)
    {
        carte[i][7].etat = 1;
    }

    for(i=0; i<6; i++)
    {
        carte[i][10].etat = 1;
    }

    for(i=0; i<7; i++)
    {
        for(j=11; j<14; j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=14; j<20; j++)
        {
            carte[i][j].etat = 1;
        }
    }

    carte[3][1].etat = 1;
    carte[3][5].etat = 1;

    for(i=3; i<6; i++)
    {
        for(j=16; j<20; j++)
        {
            carte[i][j].etat = 1;
        }
    }

    carte[4][3].etat = 1;
    carte[4][6].etat = 1;

    for(j=0; j<4; j++)
    {
        carte[5][j].etat = 1;
    }

    carte[5][6].etat = 1;
    carte[5][15].etat = 1;

    for(j=16;j<20;j++)
    {
        carte[7][j].etat = 1;
    }

    for(i=8;i<12;i++)
    {
        for(j=0;j<8;j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(i=8; i<12; i++)
    {
        carte[i][10].etat = 1;
    }

    for(j=11; j<16; j++)
    {
        carte[9][j].etat = 1;
    }

    carte[9][19].etat = 1;

    for(i=10;i<12;i++)
    {
        carte[i][11].etat = 1;
    }

    for(i=12;i<15;i++)
    {
        for(j=14;j<20;j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(j=0;j<2;j++)
    {
        carte[13][j].etat = 1;
    }

    for(i=14;i<20;i++)
    {
        for(j=0;j<3;j++)
        {
            carte[i][j].etat = 1;
        }
    }

    carte[14][9].etat = 1;

    for(i=15;i<17;i++)
    {
        for(j=15; j<20; j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(i=17;i<20;i++)
    {
        for(j=3;j<6;j++)
        {
            carte[i][j].etat = 1;
        }
    }

    carte[17][9].etat = 1;

    for(i=17; i<20; i++)
    {
        carte[i][19].etat = 1;
    }

    for(i=18;i<20;i++)
    {
        for(j=6; j<10; j++)
        {
            carte[i][j].etat = 1;
        }
    }

    for(j=10; j<19; j++)
    {
        carte[19][j].etat = 1;
    }
}

