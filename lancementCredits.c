#include "maBiblio.h"

/*
Programme qui affiche des nombres pour le nombre de joueurs tant que l'utilisateur ne clique pa sur un bouton en particulier
Au moment du clique, le programme change la valeur de l'avancement du jeu afin de lancer l'action souhaiter
de plus il modifie la valeur du nombre de joueurs
*/
void credits(BITMAP* fond,BITMAP* curseur,int* avjeu)
{
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);

    while(*avjeu==1)
    {

        blit(fond,page,0,0,0,0,SCREEN_W,SCREEN_H);



        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);


        // affichage du menu sur l'écran
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


        if(mouse_b&1)
        {
            //si l'utilisateur clique sur le bouton retour on revient au menu
            if(mouse_x>0 && mouse_x<132 && mouse_y>0 && mouse_y<65)
            {
                *avjeu=0;
            }
        }
    }
    destroy_bitmap(page);
}
