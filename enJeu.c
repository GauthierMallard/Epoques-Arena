#include "maBiblio.h"

/*
Programme qui fait tourner le jeu en fond et gère toute les actions des joueurs durant leurs tours de jeu
*/
void enJeu(BITMAP* decor,BITMAP* curseur,int* avjeu,BITMAP *choijoueur,BITMAP *credit,BITMAP *coeur,BITMAP *epee,BITMAP *chaussure,BITMAP *perso0w,BITMAP *perso1w,BITMAP *perso2w,BITMAP *perso3w,BITMAP *persocourt,BITMAP *fondlave,BITMAP *joueurSuivant,BITMAP *caseAttaque,int* nbjoueur)
{
    //création du double buffer page
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);
    //remplissage du buffer avec les décors
    blit(fondlave,page,0,0,0,0,SCREEN_W,SCREEN_H);
    blit(decor,page,0,0,0,0,644,636);

    //affichage des persnnages
    masked_blit(perso0w, page, 0,0,4*32,5*32,SCREEN_W,SCREEN_H);
    masked_blit(perso1w, page, 0,0,17*32,6*32,SCREEN_W,SCREEN_H);
    if(nbjoueur == 3)
    {

        masked_blit(perso2w, page, 0,0,2*32,13*32,SCREEN_W,SCREEN_H);
    }
    else if(nbjoueur == 4)
    {

        masked_blit(perso2w, page, 0,0,2*32,13*32,SCREEN_W,SCREEN_H);
        masked_blit(perso3w, page, 0,0,17*32,17*32,SCREEN_W,SCREEN_H);
    }

    while(*avjeu==5)
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
                *avjeu=4;//changement de la valeur de avjeu
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
