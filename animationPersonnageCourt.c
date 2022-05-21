#include "maBiblio.h"


void animationPersonnageCourt(BITMAP*decor,BITMAP* grillage,BITMAP* curseur,BITMAP*page, BITMAP*persocourt,BITMAP*perso0w,BITMAP*perso1w,BITMAP*perso2w,BITMAP*perso3w,BITMAP*coeur,BITMAP*fondlave,BITMAP*epee,BITMAP*chaussure,BITMAP*joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases dest)
{
    int numPersoCourt;
    //Joueur qui joue = quel joueur joue dans le tableau joueurs
    blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);

    remplissageBuffer(decor,grillage,page,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaquePrint,caseAttaqueEte,caseAttaqueAut,caseAttaqueHiv,joueurs,jqj,*nbjoueur);


        if ((mouse_b&1) && mouse_y<644 && mouse_x<636)
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

            for (numPersoCourt=1; numPersoCourt<NBIMAGE; numPersoCourt++)
            {
                if(joueurs[jqj].coordJ.colonnes < dest.colonnes)
                {
                    joueurs[jqj].coordJ.colonnes = joueurs[jqj].coordJ.colonnes+4;
                }

                if(joueurs[jqj].coordJ.lignes < dest.lignes)
                {
                    joueurs[jqj].coordJ.lignes = joueurs[jqj].coordJ.lignes+4;
                }

                rest(100);
                blit(decor,page,0,0,0,0,SCREEN_W,SCREEN_H);
                //sprintf permet de faire un printf dans une chaine
                sprintf(nomfichier,"BITMAPS/perso%dCourt%d.bmp",jqj,numPersoCourt);
                persocourt = load_bitmap(nomfichier,NULL);
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
                else if(jqj==2)
                {
                    masked_blit(perso0w,page, 0,0,joueurs[jqj-2].coordJ.lignes,joueurs[jqj-2].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    masked_blit(perso1w,page, 0,0,joueurs[jqj-1].coordJ.lignes,joueurs[jqj-1].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    masked_blit(persocourt,page, 0,0,joueurs[jqj].coordJ.lignes,joueurs[jqj].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    if (*nbjoueur==4)
                    {
                        masked_blit(perso3w,page, 0,0,joueurs[jqj+1].coordJ.lignes,joueurs[jqj+1].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    }
                }
                else if(jqj==3)
                {
                    masked_blit(persocourt,page, 0,0,joueurs[jqj].coordJ.lignes,joueurs[jqj].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    masked_blit(perso0w,page, 0,0,joueurs[jqj-3].coordJ.lignes,joueurs[jqj-3].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    masked_blit(perso2w,page, 0,0,joueurs[jqj-1].coordJ.lignes,joueurs[jqj-1].coordJ.colonnes,SCREEN_W,SCREEN_H);
                    masked_blit(perso1w,page, 0,0,joueurs[jqj-2].coordJ.lignes,joueurs[jqj-2].coordJ.colonnes,SCREEN_W,SCREEN_H);
                }
                blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
                rest(100);
            }
            remplissageBuffer(decor,grillage,page,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaquePrint,caseAttaqueEte,caseAttaqueAut,caseAttaqueHiv,joueurs,jqj,*nbjoueur);
            masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);
            // affichage du menu sur l'écran
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
            rest(100);
        }
}

//textprintf_ex(page,font,60,90,makecol(255,0,0), makecol(0,0,0),"%4d %4d",mouse_x,mouse_y);
//textprintf_ex(page, font, 200, 200, makecol(255, 0, 255),-1,"Ca s'affiche");
