#include "maBiblio.h"


void animationPersonnageCourt(BITMAP*decor,BITMAP*page, BITMAP*persocourt,BITMAP*perso0w,BITMAP*perso1w,BITMAP*perso2w,BITMAP*perso3w,BITMAP*coeur,BITMAP*fondlave,BITMAP*epee,BITMAP*chaussure,BITMAP*joueurSuivant,char nomfichier[TNF])
{
    int numPersoCourt;
    int numeroPerso=0;
    BITMAP* affichagesort=NULL;
    affichagesort=create_bitmap(SCREEN_W,SCREEN_H);
    ///GIGA TEMPORAIRE
    int nbjoueur =4;
    int emplacementPerso0L;
    int emplacementPerso0H;
    int emplacementPerso1L;
    int emplacementPerso1H;
    int emplacementPerso2L;
    int emplacementPerso2H;
    int emplacementPerso3L;
    int emplacementPerso3H;
    ///GIGA TEMPORAIRE

    blit(page,affichagesort,0,0,0,0,SCREEN_W,SCREEN_H);

while((!mouse_b&1)&&(mouse_x>0) &&(mouse_x<200)&& (mouse_y>0)&&(mouse_y<200))
{
    rectfill(affichagesort,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));
    textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
    textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-185,makecol(255,255,255),-1,"point de combat %d",mouse_x );
    textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-172,makecol(255,255,255),-1,"Perte point de vie %d",mouse_y );
    textprintf_ex(affichagesort,font,SCREEN_W-648,SCREEN_H-159,makecol(255,255,255),-1," %d",mouse_x);
    blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
}

    blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


    if (mouse_b&1 && mouse_x>615&&mouse_y>640)
    {
        numeroPerso=numeroPerso+1;

        if (numeroPerso==nbjoueur)
        {
            numeroPerso=0;
        }
        rest(1000);
    }


    if ((mouse_b&1) &&mouse_y<644&&mouse_x<636)
    {
        if (numeroPerso==0)
        {
            emplacementPerso0L=mouse_x-20;
            emplacementPerso0H=mouse_y-80;
        }
        if (numeroPerso==1)
        {
            emplacementPerso1L=mouse_x-20;
            emplacementPerso1H=mouse_y-80;
        }
        if (numeroPerso==2)
        {
            emplacementPerso2L=mouse_x-20;
            emplacementPerso2H=mouse_y-80;
        }
        if (numeroPerso==3)
        {
            emplacementPerso3L=mouse_x-20;
            emplacementPerso3H=mouse_y-80;
        }



        // définition des limites des emplacements des joueurs pour qu'ils ne sortent pas
        if (emplacementPerso1L>=600)
        {
            emplacementPerso1L=570;
        }
        if (emplacementPerso1H>550)
        {
            emplacementPerso1H=545;
        }
        if (emplacementPerso0L>=600)
        {
            emplacementPerso0L=570;
        }
        if (emplacementPerso0H>550)
        {
            emplacementPerso0H=545;
        }
        if (emplacementPerso2L>=600)
        {
            emplacementPerso2L=570;
        }
        if (emplacementPerso2H>550)
        {
            emplacementPerso2H=545;
        }
        if (emplacementPerso3L>=600)
        {
            emplacementPerso3L=570;
        }
        if (emplacementPerso3H>550)
        {
            emplacementPerso3H=545;
        }

        for (numPersoCourt=1; numPersoCourt<NBIMAGE; numPersoCourt++)
        {
            rest(100);
            blit(decor,page,0,0,0,0,SCREEN_W,SCREEN_H);
            //sprintf permet de faire un printf dans une chaine
            sprintf(nomfichier,"perso%dCourt%d.bmp",numeroPerso,numPersoCourt);
            persocourt = load_bitmap(nomfichier,NULL);
            if (!persocourt)
            {
                allegro_message("pas pu trouver %s",nomfichier);
                exit(EXIT_FAILURE);
            }


            if(numeroPerso==0)
            {
                masked_blit(persocourt,page, 0,0,emplacementPerso0L,emplacementPerso0H,SCREEN_W,SCREEN_H);
                masked_blit(perso1w,page, 0,0,emplacementPerso1L,emplacementPerso1H,SCREEN_W,SCREEN_H);
                if(nbjoueur>=3)
                {
                    masked_blit(perso2w,page, 0,0,emplacementPerso2L,emplacementPerso2H,SCREEN_W,SCREEN_H);
                    if(nbjoueur==4)
                    {
                        masked_blit(perso3w,page, 0,0,emplacementPerso3L,emplacementPerso3H,SCREEN_W,SCREEN_H);
                    }
                }
            }

             if(numeroPerso==1)
            {
                masked_blit(perso0w,page, 0,0,emplacementPerso0L,emplacementPerso0H,SCREEN_W,SCREEN_H);
                masked_blit(persocourt,page, 0,0,emplacementPerso1L,emplacementPerso1H,SCREEN_W,SCREEN_H);
                if(nbjoueur>=3)
                {
                    masked_blit(perso2w,page, 0,0,emplacementPerso2L,emplacementPerso2H,SCREEN_W,SCREEN_H);
                    if(nbjoueur==4)
                    {
                        masked_blit(perso3w,page, 0,0,emplacementPerso3L,emplacementPerso3H,SCREEN_W,SCREEN_H);
                    }
                }
            }
             if(numeroPerso==2)
            {
                masked_blit(perso0w,page, 0,0,emplacementPerso0L,emplacementPerso0H,SCREEN_W,SCREEN_H);
                masked_blit(perso1w,page, 0,0,emplacementPerso1L,emplacementPerso1H,SCREEN_W,SCREEN_H);
                masked_blit(persocourt,page, 0,0,emplacementPerso2L,emplacementPerso2H,SCREEN_W,SCREEN_H);
                if (nbjoueur==4)
                {
                    masked_blit(perso3w,page, 0,0,emplacementPerso3L,emplacementPerso3H,SCREEN_W,SCREEN_H);
                }
            }
             if(numeroPerso==3)
            {
                masked_blit(persocourt,page, 0,0,emplacementPerso3L,emplacementPerso3H,SCREEN_W,SCREEN_H);
                masked_blit(perso0w,page, 0,0,emplacementPerso0L,emplacementPerso0H,SCREEN_W,SCREEN_H);
                masked_blit(perso2w,page, 0,0,emplacementPerso2L,emplacementPerso2H,SCREEN_W,SCREEN_H);
                masked_blit(perso1w,page, 0,0,emplacementPerso1L,emplacementPerso1H,SCREEN_W,SCREEN_H);
            }
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
            rest(100);
        }
        blit(decor,page,0,0,0,0,SCREEN_W,SCREEN_H);
        masked_blit(perso0w,page, 0,0,emplacementPerso0L,emplacementPerso0H,SCREEN_W,SCREEN_H);
        masked_blit(perso1w,page, 0,0,emplacementPerso1L,emplacementPerso1H,SCREEN_W,SCREEN_H);
        if (nbjoueur>=3)
        {
            masked_blit(perso2w,page, 0,0,emplacementPerso2L,emplacementPerso2H,SCREEN_W,SCREEN_H);
        if (nbjoueur==4)
        {
            masked_blit(perso3w,page, 0,0,emplacementPerso3L,emplacementPerso3H,SCREEN_W,SCREEN_H);
        }
        }
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        rest(100);
    }

destroy_bitmap(affichagesort);
}

//textprintf_ex(page,font,60,90,makecol(255,0,0), makecol(0,0,0),"%4d %4d",mouse_x,mouse_y);
//textprintf_ex(page, font, 200, 200, makecol(255, 0, 255),-1,"Ca s'affiche");






