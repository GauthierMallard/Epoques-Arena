#include "maBiblio.h"

/*
Programme qui affiche des nombres pour le nombre de joueurs tant que l'utilisateur ne clique pa sur un bouton en particulier
Au moment du clique, le programme change la valeur de l'avancement du jeu afin de lancer l'action souhaiter
de plus il modifie la valeur du nombre de joueurs
*/
void nombrejoueurs(BITMAP* fond,BITMAP* curseur,int* avjeu,int* nbjoueur)
{
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);

    while(*avjeu==3)
    {

        blit(fond,page,0,0,0,0,SCREEN_W,SCREEN_H);


        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);


        // affichage du menu sur l'écran
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


        if(mouse_b&1)
        {
            //si l'utilisateur clique sur le bouton 2 on change le nombre de joueurs et on retourne au menu
            if(mouse_x>210 && mouse_x<251 && mouse_y>360 && mouse_y<412)
            {
                *nbjoueur=2;//changement de la valeur de avjeu

                *avjeu=0;
            }

            //si l'utilisateur clique sur le bouton 3 on change le nombre de joueurs et on retourne au menu
            else if(mouse_x>282 && mouse_x<327 && mouse_y>360 && mouse_y<415)
            {
                *nbjoueur=3;//changement de la valeur de avjeu

                *avjeu=0;
            }

            //si l'utilisateur clique sur le bouton 4 on change le nombre de joueurs et on retourne au menu
            else if(mouse_x>350 && mouse_x<390 && mouse_y>360 && mouse_y<412)
            {
                *nbjoueur=4;//changement de la valeur de avjeu

                *avjeu=0;
            }
        }
    }
    destroy_bitmap(page);
}

