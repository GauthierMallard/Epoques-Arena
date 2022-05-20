#include "maBiblio.h"

/*
Programme qui fait tourner le jeu en fond et gère toute les actions des joueurs durant leurs tours de jeu
*/
void enJeu(BITMAP* decor,BITMAP* curseur,int* avjeu,BITMAP *choijoueur,BITMAP *credit,BITMAP *coeur,BITMAP *epee,BITMAP *chaussure,BITMAP *perso0w,BITMAP *perso1w,BITMAP *perso2w,BITMAP *perso3w,BITMAP *persocourt,BITMAP *fondlave,BITMAP *joueurSuivant,BITMAP *caseAttaque,t_joueur* joueurs,int* nbjoueur)
{
    int jqj=0;//variable correspondant au joueur qui jou actuellement
    //création du double buffer page
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);


    while(*avjeu==5)
    {

        remplissageBuffer(decor,page,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaque,joueurs,jqj,*nbjoueur);
        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);

        // affichage du menu sur l'écran
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


        if(mouse_b&1)
        {
            //si l'utilisateur clique sur une case de la carte
            if(mouse_x>0 && mouse_x<640 && mouse_y>0 && mouse_y<640)
            {

            }

            //si l'utilisateur clique sur le bouton crédits on lance les crédits
            else if(mouse_x>430 && mouse_x<590 && mouse_y>280 && mouse_y<350)
            {

            }

            //si l'utilisateur clique sur le bouton joueurs suivant passage au joueur suivant
            else if (mouse_b&1 && mouse_x>615&&mouse_x< 780 && mouse_y<700 && mouse_y>640)
            {
                jqj = jqj+1;

                if (jqj==*nbjoueur)
                {
                    jqj=0;
                }
                rest(1000);
            }

        }
    }
    destroy_bitmap(page);
}
