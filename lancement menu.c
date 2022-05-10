#include "maBiblio.h"

/*
Programme qui affiche le menu tant que l'utilisateur ne clique pa sur un bouton en particulier
Au moment du clique, le programme change la valeur de l'avancement du jeu afin de lancer l'action souhaiter
*/
void lancermenu(BITMAP* menu,BITMAP* curseur,int* avjeu)
{
    while(avjeu==0)
    {
        //effacement du buffer
        clear_bitmap(menu);

        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,menu,0,0,mouse_x+(curseur->w)/2,mouse_y+(curseur->h)/2,curseur->w,curseur->h);

        // affichage du menu sur l'écran
        blit(menu,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
            //si l'utilisateur clique sur le bouton start on lance le jeu
            if(mouse_x<200 && mouse_x>300 && mouse_y<200 && mouse_y>300)
            {
                *avjeu=4;//changement de la valeur de avjeu
            }

            //si l'utilisateur clique sur le bouton crédits on lance les crédits
            else if(mouse_x<200 && mouse_x>300 && mouse_y<200 && mouse_y>300)
            {
                *avjeu=1;//changement de la valeur de avjeu
            }

            //si l'utilisateur clique sur le bouton classes on lance l'affichage des classes
            else if(mouse_x<200 && mouse_x>300 && mouse_y<200 && mouse_y>300)
            {
                *avjeu=2;//changement de la valeur de avjeu
            }

             //si l'utilisateur clique sur le bouton joueurs on lance l'affichage du nombre de joueurs
            else if(mouse_x<200 && mouse_x>300 && mouse_y<200 && mouse_y>300)
            {
                *avjeu=3;//changement de la valeur de avjeu
            }
        }
    }

}
