#include "maBiblio.h"

/*
Programme qui affiche le menu tant que l'utilisateur ne clique pa sur un bouton en particulier
Au moment du clique, le programme change la valeur de l'avancement du jeu afin de lancer l'action souhaiter
*/
void lancermenu(BITMAP* menu,BITMAP* curseur,int* avjeu)
{
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);
    blit(menu,page,0,0,0,0,SCREEN_W,SCREEN_H);

    while(*avjeu==0)
    {

        blit(menu,page,0,0,0,0,SCREEN_W,SCREEN_H);


        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);


        // affichage du menu sur l'écran
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


        if(mouse_b&1)
        {
            //si l'utilisateur clique sur le bouton start on lance le jeu
            if(mouse_x>60 && mouse_x<120 && mouse_y>280 && mouse_y<350)
            {
                *avjeu=5;//changement de la valeur de avjeu
                allegro_message("lancement de la partie");
            }

            //si l'utilisateur clique sur le bouton crédits on lance les crédits
            else if(mouse_x>430 && mouse_x<590 && mouse_y>280 && mouse_y<350)
            {
                *avjeu=1;//changement de la valeur de avjeu

            }

            //si l'utilisateur clique sur le bouton classes on lance l'affichage des classes
            else if(mouse_x>620 && mouse_x<800 && mouse_y>280 && mouse_y<350)
            {
                *avjeu=4;//changement de la valeur de avjeu
                allegro_message("ouverture des classes");
            }

             //si l'utilisateur clique sur le bouton joueurs on lance l'affichage du nombre de joueurs
            else if(mouse_x>210 && mouse_x<370 && mouse_y>280 && mouse_y<350)
            {
                *avjeu=3;//changement de la valeur de avjeu
            }
        }
    }
    destroy_bitmap(page);
}
