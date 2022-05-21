#include "maBiblio.h"


void animationPersonnageCourt(BITMAP*decor,BITMAP*page, BITMAP*persocourt,BITMAP*perso0w,BITMAP*perso1w,BITMAP*perso2w,BITMAP*perso3w,BITMAP*coeur,BITMAP*fondlave,BITMAP*epee,BITMAP*chaussure,BITMAP*joueurSuivant,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases dest)
{
    BITMAP* affichagesort=NULL;
    affichagesort=create_bitmap(SCREEN_W,SCREEN_H);
    int numPersoCourt;
    //Joueur qui joue = quel joueur joue dans le tableau joueurs

    blit(page,affichagesort,0,0,0,0,SCREEN_W,SCREEN_H);

    while((!mouse_b&1)&&(mouse_x>202) &&(mouse_x<256)&& (mouse_y>644)&&(mouse_y<700))
    {
        rectfill(affichagesort,SCREEN_W-650,SCREEN_H-200,SCREEN_W-280,SCREEN_H-150,makecol(0,0,0));
        textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
        textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-185,makecol(255,255,255),-1,"point de combat %d",jqj );  // afficher le nombre de PA du sort
        textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-172,makecol(255,255,255),-1,"Perte point de vie %d",mouse_y ); // afficher le nombre de PV infligé par le sort
        textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-159,makecol(255,255,255),-1,"portee maximale du sort %d et minimale %d", mouse_y,mouse_x);// afficher la portée min et max
        blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
    }
    choixSort(page,affichagesort,joueurs, jqj);
    blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);

    if(mouse_x<640)
    {
      //  remplissageBuffer(page,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaque,joueurs,jqj,*nbjoueur);

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
                sprintf(nomfichier,"perso%dCourt%d.bmp",jqj,numPersoCourt);
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
        }
    }
    destroy_bitmap(affichagesort);

}

//textprintf_ex(page,font,60,90,makecol(255,0,0), makecol(0,0,0),"%4d %4d",mouse_x,mouse_y);
//textprintf_ex(page, font, 200, 200, makecol(255, 0, 255),-1,"Ca s'affiche");
