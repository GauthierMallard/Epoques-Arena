#include "maBiblio.h"

/*
Programme qui fait tourner le jeu en fond et gère toute les actions des joueurs durant leurs tours de jeu
*/
void enJeu(BITMAP* decor,BITMAP* grillage,BITMAP* curseur,int* avjeu,BITMAP *choijoueur,BITMAP *credit,BITMAP *coeur,BITMAP *epee,BITMAP *chaussure,BITMAP *perso0w,BITMAP *perso1w,BITMAP *perso2w,BITMAP *perso3w,BITMAP *persocourt,BITMAP *fondlave,BITMAP *joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,t_joueur* joueurs,int* nbjoueur,t_cases carte[LIGNES][COLONNES])
{

    char nomfichier[256];
    int jqj=0;//variable correspondant au joueur qui joue actuellement
    int test=0;
    //création du double buffer page
    BITMAP* page;
    page=create_bitmap(SCREEN_W,SCREEN_H);

    while(*avjeu==5)
    {
        remplissageBuffer(decor,grillage,page,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaquePrint,caseAttaqueEte,caseAttaqueAut,caseAttaqueHiv,joueurs,jqj,*nbjoueur);
        //affichage du curseur sur le menu sans les bords roses
        masked_blit(curseur,page,0,0,mouse_x,mouse_y,curseur->w,curseur->h);
        // affichage du menu sur l'écran
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


        if(mouse_b&1)
        {
            //si l'utilisateur clique sur une case de la carte
            if(mouse_x>0 && mouse_x<640 && mouse_y>0 && mouse_y<640)
            {

                while(joueurs[jqj].pm >= 1)
                {
                    test = 0;
                    deplacements(decor,grillage,curseur,page,persocourt,perso0w,perso1w,perso2w,perso3w,coeur,fondlave,epee,chaussure,joueurSuivant,caseAttaquePrint,caseAttaqueEte,caseAttaqueAut,caseAttaqueHiv,nomfichier,joueurs,nbjoueur,jqj,carte, &test);
                    if(test == 1)
                    {
                        joueurs[jqj].pm = joueurs[jqj].pm-1;
                        allegro_message("OK 4");
                    }
                }
            }
            //sortie de la boucle de jeu
            else if(mouse_x>770 && mouse_x<800 && mouse_y>0 && mouse_y<30)
            {
                allegro_message("OK 6");
                *avjeu=6;
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


