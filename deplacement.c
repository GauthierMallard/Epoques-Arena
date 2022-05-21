#include "maBiblio.h"

void deplacements(BITMAP* decor,BITMAP* grillage,BITMAP* curseur,BITMAP* page, BITMAP* persocourt,BITMAP* perso0w,BITMAP* perso1w,BITMAP* perso2w,BITMAP* perso3w,BITMAP* coeur,BITMAP* fondlave,BITMAP* epee,BITMAP* chaussure,BITMAP* joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases carte[LIGNES][COLONNES], int* test)
{
    t_cases dest;

    /*for(int i=0; i<LIGNES; i++)
    {
        for(int j=0; j<COLONNES; j++)
        {
            printf("%d ", carte[i][j].etat);
        }
        printf("\n");
    }
    */

    if(mouse_b&1)
    {

        dest.lignes = mouse_x;
        dest.colonnes = mouse_y;
        dest.etat = carte[(mouse_x - (mouse_x%32))/32][(mouse_y - (mouse_y%32))/32].etat;
        if(joueurs[jqj].coordJ.colonnes == 0)
        {
            joueurs[jqj].coordJ.colonnes = 1;
        }
        if(joueurs[jqj].coordJ.lignes == 0)
        {
            joueurs[jqj].coordJ.lignes = 1;
        }

        if(dest.lignes < 32*20 && dest.colonnes < 32*20)
        {

            if(abs(joueurs[jqj].coordJ.colonnes - dest.colonnes)<64 && abs(joueurs[jqj].coordJ.lignes - dest.lignes)<64)
            {

                if(carte[((mouse_y - mouse_y%32))/32][(mouse_x - (mouse_x%32))/32].etat == 0)
                {
                    allegro_message("OK 2");
                    chemin(decor,grillage, page, curseur, persocourt, perso0w, perso1w, perso2w, perso3w, coeur, fondlave, epee, chaussure, joueurSuivant, caseAttaquePrint, caseAttaqueEte, caseAttaqueAut, caseAttaqueHiv, nomfichier, joueurs, nbjoueur, jqj, dest);
                    *test = 1;
                }
            }
        }
    }
}
