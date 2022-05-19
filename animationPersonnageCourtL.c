#include "maBiblio.h"

void animationPersonnageCourtL(BITMAP*decor,BITMAP*page, BITMAP*persocourt,BITMAP*perso0w,BITMAP*perso1w,BITMAP*perso2w,BITMAP*perso3w,BITMAP*coeur,BITMAP*fondlave,BITMAP*epee,BITMAP*chaussure,BITMAP*joueurSuivant,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases dest)
{
    int numPersoCourt =1;
    blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);

    if(dest.colonnes<640 && dest.lignes<640)
    {
        joueurs[jqj].coordJ.lignes=mouse_x-20;
        joueurs[jqj].coordJ.colonnes=mouse_y-80;

        // définition des limites des emplacements des joueurs pour qu'ils ne sortent pas

        if (joueurs[jqj].coordJ.lignes>=600)
        {
            joueurs[jqj].coordJ.lignes=570;
        }
        if (joueurs[jqj].coordJ.colonnes>550)
        {
            joueurs[jqj].coordJ.colonnes=545;
        }
    }
    do
    {
        if(numPersoCourt == NBIMAGE+1)
        {
            numPersoCourt = 1;
        }
        joueurs[jqj].coordJ.lignes = joueurs[jqj].coordJ.lignes + 2;
        blit(decor,page,0,0,0,0,SCREEN_W,SCREEN_H);
        //sprintf permet de faire un printf dans une chaine
        sprintf(nomfichier,"perso%dCourt%d.bmp",jqj,numPersoCourt);
        persocourt = load_bitmap(nomfichier,NULL);
        rest(50);
        if (!persocourt)
        {
            allegro_message("pas pu trouver %s",nomfichier);
            exit(EXIT_FAILURE);
        }
        if(jqj==0)
        {
            masked_blit(persocourt,page, 0,0,joueurs[jqj].coordJ.lignes,joueurs[jqj].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(perso1w,page, 0,0,joueurs[jqj+1].coordJ.lignes,joueurs[jqj+1].coordJ.colonnes,SCREEN_W,SCREEN_H);
            if(*nbjoueur>=3)
            {
                masked_blit(perso2w,page, 0,0,joueurs[jqj+2].coordJ.lignes,joueurs[jqj+2].coordJ.colonnes,SCREEN_W,SCREEN_H);
                if(*nbjoueur==4)
                {
                    masked_blit(perso3w,page, 0,0,joueurs[jqj+3].coordJ.lignes,joueurs[jqj+3].coordJ.colonnes,SCREEN_W,SCREEN_H);
                }
            }
        }

        else if(jqj==1)
        {
            masked_blit(perso0w,page, 0,0,joueurs[jqj-1].coordJ.lignes,joueurs[jqj-1].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(persocourt,page, 0,0,joueurs[jqj].coordJ.lignes,joueurs[jqj].coordJ.colonnes,SCREEN_W,SCREEN_H);
            if(*nbjoueur>=3)
            {
                masked_blit(perso2w,page, 0,0,joueurs[jqj+1].coordJ.lignes,joueurs[jqj+1].coordJ.colonnes,SCREEN_W,SCREEN_H);
                if(*nbjoueur==4)
                {
                    masked_blit(perso3w,page, 0,0,joueurs[jqj+2].coordJ.lignes,joueurs[jqj+2].coordJ.colonnes,SCREEN_W,SCREEN_H);
                }
            }
        }
        else if(joueurs[jqj].id==2)
        {
            masked_blit(perso0w,page, 0,0,joueurs[jqj-2].coordJ.lignes,joueurs[jqj-2].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(perso1w,page, 0,0,joueurs[jqj-1].coordJ.lignes,joueurs[jqj-1].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(persocourt,page, 0,0,joueurs[jqj].coordJ.lignes,joueurs[jqj].coordJ.colonnes,SCREEN_W,SCREEN_H);
            if (*nbjoueur==4)
            {
                masked_blit(perso3w,page, 0,0,joueurs[jqj+1].coordJ.lignes,joueurs[jqj+1].coordJ.colonnes,SCREEN_W,SCREEN_H);
            }
        }
        else if(joueurs[jqj].id==3)
        {
            masked_blit(persocourt,page, 0,0,joueurs[jqj].coordJ.lignes,joueurs[jqj].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(perso0w,page, 0,0,joueurs[jqj-3].coordJ.lignes,joueurs[jqj-3].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(perso2w,page, 0,0,joueurs[jqj-1].coordJ.lignes,joueurs[jqj-1].coordJ.colonnes,SCREEN_W,SCREEN_H);
            masked_blit(perso1w,page, 0,0,joueurs[jqj-2].coordJ.lignes,joueurs[jqj-2].coordJ.colonnes,SCREEN_W,SCREEN_H);
        }
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        rest(100);

        blit(decor,page,0,0,0,0,SCREEN_W,SCREEN_H);
        masked_blit(perso0w,page, 0,0,joueurs[0].coordJ.lignes,joueurs[0].coordJ.colonnes,SCREEN_W,SCREEN_H);
        masked_blit(perso1w,page, 0,0,joueurs[1].coordJ.lignes,joueurs[1].coordJ.colonnes,SCREEN_W,SCREEN_H);
        if (*nbjoueur>=3)
        {
            masked_blit(perso2w,page, 0,0,joueurs[2].coordJ.lignes,joueurs[2].coordJ.colonnes,SCREEN_W,SCREEN_H);
            if (*nbjoueur==4)
            {
                masked_blit(perso3w,page, 0,0,joueurs[3].coordJ.lignes,joueurs[3].coordJ.colonnes,SCREEN_W,SCREEN_H);
            }
        }
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        rest(100);
        numPersoCourt++;
    }while(joueurs[jqj].coordJ.lignes<dest.lignes);
}
