#include "maBiblio.h"

/*
Programme qui affiche les différentes classes pour chaque joueur tant que l'utilisateur ne clique pa sur un bouton en particulier
Au moment du clique, le programme change la valeur de la classe du joueur
de plus il modifie la valeur du nombre de joueurs
*/
int choixclasse(BITMAP* fond,BITMAP* curseur)
{
    int i=0,j=0;
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);

    while(j==0)
    {
            blit(fond,page,0,0,0,0,SCREEN_W,SCREEN_H);

            //affichage du curseur sur le menu sans les bords roses
            masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);

            // affichage du menu sur l'écran
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);

            if(mouse_b&1)
            {
                //si l'utilisateur clique sur la classe ete on modifie sa classe et on lance la partie
                if(mouse_x>210 && mouse_x<251 && mouse_y>360 && mouse_y<412)
                {
                    //joueurs[i]=cJoueur(jou,0); //on modifie sa classe

                }

                //si l'utilisateur clique sur la classe automne on modifie sa classe et on lance la partie
                else if(mouse_x>282 && mouse_x<327 && mouse_y>360 && mouse_y<415)
                {
                    //joueurs[i]=cJoueur(joueurs[i],1);//on modifie sa classe


                }

                //si l'utilisateur clique sur la classe hiver on modifie sa classe et on lance la partie
                else if(mouse_x>350 && mouse_x<390 && mouse_y>360 && mouse_y<412)
                {
                   // joueurs[i]=cJoueur(joueurs[i],2);//on modifie sa classe


                }

                //si l'utilisateur clique sur la classe printemps on modifie sa classe et on lance la partie
                else if(mouse_x>350 && mouse_x<390 && mouse_y>360 && mouse_y<412)
                {
                  //  joueurs[i]=cJoueur(joueurs[i],3);//on modifie sa class
                }
            }

    }
    destroy_bitmap(page);
}
