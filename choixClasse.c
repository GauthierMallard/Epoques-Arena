#include "maBiblio.h"

/*
Programme qui affiche les différentes classes pour chaque joueur tant que l'utilisateur ne clique pa sur un bouton en particulier
Au moment du clique, le programme change la valeur de la classe du joueur
de plus il modifie la valeur du nombre de joueurs
*/
int choixclasse(BITMAP* fond,BITMAP* curseur)
{
    int j=0;
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);

    while(j==0)
    {
        blit(fond,page,0,0,0,0,SCREEN_W,SCREEN_H);

        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);

        textprintf_ex(page,font,60,90,makecol(255,0,0), makecol(0,0,0),"%4d %4d",mouse_x,mouse_y);

        // affichage du menu sur l'écran
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


        if(mouse_b&1)
        {
            //si l'utilisateur clique sur la classe ete on modifie sa classe
            if(mouse_x<188 && mouse_y<240)
            {
                return 2;
                j++;
            }

            //si l'utilisateur clique sur la classe automne on modifie sa classe
            else if(mouse_x>188 && mouse_x<411 && mouse_y<240)
            {
                return 0;
                j++;
            }

            //si l'utilisateur clique sur la classe hiver on modifie sa classe
            else if(mouse_x>411 && mouse_x<611 && mouse_y<240)
            {
                return 3;
                j++;
            }

            //si l'utilisateur clique sur la classe printemps on modifie sa classe
            else if(mouse_x>611 && mouse_y<240)
            {
                return 1;
                j++;
            }
        }
    }
    destroy_bitmap(page);
    return 0;
}
