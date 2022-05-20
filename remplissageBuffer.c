#include "maBiblio.h"
/*
sous programme de remplissage du buffer de jeu
utilisable à chaque fois que l'on veut reset l'affichage à l'écran pour revenir à juste l'essentiel
avec les donnees de joueurs mises à jour
ex: emplacement, pa, pm,...
*/
void remplissageBuffer(BITMAP* decor,BITMAP* page,BITMAP *coeur,BITMAP *epee,BITMAP *chaussure,BITMAP *perso0w,BITMAP *perso1w,BITMAP *perso2w,BITMAP *perso3w,BITMAP *persocourt,BITMAP *fondlave,BITMAP *joueurSuivant,BITMAP *caseAttaque,t_joueur* joueurs,int jqj,int nbjoueur)
{
    blit(fondlave,page,0,0,0,0,SCREEN_W,SCREEN_H);
    blit(decor,page,0,0,0,0,640,640);
    masked_blit(epee,page,0,0,710,470,SCREEN_W,SCREEN_H);
    textprintf_ex(page, font, 750, 575, makecol(0, 0, 0),-1,"%d",joueurs[jqj].pa); // affiche ptd'attaque du joueur
    masked_blit(caseAttaque,page,0,0,200,640,SCREEN_W,SCREEN_H);
    masked_blit(chaussure, page,0,0,700,370,SCREEN_W,SCREEN_H);
    textprintf_ex(page, font, 740, 405, makecol(255, 255, 255),-1,"%d",joueurs[jqj].pm);  // affiche pt de deplacement du joueur
    masked_blit(coeur,page,0,0,650,450,SCREEN_W,SCREEN_H);
    textprintf_ex(page, font, 692, 485, makecol(0, 0, 0),-1,"%d",joueurs[jqj].pv);
    masked_blit(joueurSuivant, page,0,0,615,640,SCREEN_W,SCREEN_H);

    //affichage des persnnages
    masked_blit(perso0w, page, 0,0,joueurs[0].coordJ.lignes,joueurs[0].coordJ.colonnes,SCREEN_W,SCREEN_H);
    masked_blit(perso1w, page, 0,0,joueurs[1].coordJ.lignes,joueurs[1].coordJ.colonnes,SCREEN_W,SCREEN_H);
    if(nbjoueur == 3)
    {
        masked_blit(perso2w, page, 0,0,joueurs[2].coordJ.lignes,joueurs[2].coordJ.colonnes,SCREEN_W,SCREEN_H);
    }
    else if(nbjoueur == 4)
    {
        masked_blit(perso2w, page, 0,0,joueurs[2].coordJ.lignes,joueurs[2].coordJ.colonnes,SCREEN_W,SCREEN_H);
        masked_blit(perso3w, page, 0,0,joueurs[3].coordJ.lignes,joueurs[3].coordJ.colonnes,SCREEN_W,SCREEN_H);
    }
}
