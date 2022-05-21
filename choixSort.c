#include "maBiblio.h"

// ce sous programme permet de choisir l'une des 5 attaques possibles lorsque l'on clique sur l'une des cases correspondant à une des attaque.
int choixSort(BITMAP*page,BITMAP*affichagesort,  t_joueur* joueurs, int jqj)
{
while((!mouse_b&1)&&(mouse_x>202) &&(mouse_x<256)&& (mouse_y>644)&&(mouse_y<700))  // choisit l'attaque au corps à corps
    {

        rectfill(page,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));   // affiche les valeursd du CAC
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-188,makecol(255,255,255),-1,"Point d'attaque %d",joueurs[jqj].coordJ.lignes  );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-178,makecol(255,255,255),-1,"Point de vie %d",mouse_y );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-168,makecol(255,255,255),-1,"point de dépplacement %d",mouse_x);
        blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);

       if(mouse_b&1)
       {
            return 0;   // retourne la valeure 0 à coixSort
       }
    }
    while ((!mouse_b&1)&&(mouse_x>256) &&(mouse_x<310)&& (mouse_y>644)&&(mouse_y<700))  // choisit le sort 1
    {

        rectfill(page,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));  // afficher les valeurs du premier sort
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point d'attaque %d",joueurs[jqj].coordJ.lignes );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point de vie %d",mouse_y );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"point de dépplacement %d",mouse_x);
        blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
       if(mouse_b&1)
       {
                   return 1;  // retourne la valeur 1 à choixSort;
       }
    }
    while ((!mouse_b&1)&&(mouse_x>310) &&(mouse_x<370)&& (mouse_y>644)&&(mouse_y<700))  // choisit le sort 2
    {
        rectfill(page,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));   // afficher les valeurs du second sort
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point d'attaque %d",joueurs[jqj+1].coordJ.lignes );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point de vie %d",mouse_y );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"point de dépplacement %d",mouse_x);
        blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
       if(mouse_b&1)
       {
                   return 2;   // retourne la valeur 2 à choixSort;
       }
    }
     while ((!mouse_b&1)&&(mouse_x>370) &&(mouse_x<423)&& (mouse_y>644)&&(mouse_y<700))  // choisit le sort 3
    {

        rectfill(page,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));   // afficher les valeurs du troisième sort
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point d'attaque %d",joueurs[jqj].coordJ.lignes );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point de vie %d",mouse_y );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"point de dépplacement %d",mouse_x);
        blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
            blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
                return 3;   // retourne la valeur 3 à choixSort;
        }
    }
    while((!mouse_b&1) &&(mouse_x>423) &&(mouse_x<477)&& (mouse_y>644)&&(mouse_y<700))  // choisit le sort 4
    {

        rectfill(page,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));    //afficher les valeurs du quatrrième sort
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point d'attaque %d",joueurs[1].coordJ.lignes  );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point de vie %d",mouse_y );
        textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"point de dépplacement %d",mouse_x);
        blit(affichagesort,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);
        if(mouse_b&1)
        {
                    return 4;   // retourne la valeur 4 à choixSort;
        }
    }
    return 5;
}
