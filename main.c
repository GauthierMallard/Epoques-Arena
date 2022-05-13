
#include "header.h"
#include "maBiblio.h"

int main()
{
    /* Pour savoir a quelle etape le jeux est, un entier est creee et chaque valeur correspond à un etat d'avancement :
     ex: -0 signifie que le joueur en est au menu
         -1 signifie que le joueur en est aux crédits
         -2 signifie que le joueur en est au parcours des classes
         -3 signifie que le joueur en est au choix du nombre de joueurs
         -4 signifie que le joueur en est au jeux en lui meme
    */
    int avjeu = 0;

    ///pas definitif
    int nbjoueurs=2;
    ///pas définitif

    int numD = 1;
    BITMAP *menu=NULL;
    BITMAP *page=NULL;
    BITMAP *curseur=NULL;
    BITMAP *cjoueur=NULL;
    initialisation();

    //récupération Bitmap menu
    menu=load_bitmap("BITMAPS/Menu.bmp",NULL);
    if (!menu)
    {
        allegro_message("pas pu trouver Menu.bmp");
        exit(EXIT_FAILURE);
    }

    //récupération de la Bitmap du curseur
    curseur=load_bitmap("BITMAPS/epee_1.bmp",NULL);
    if (!curseur)
    {
        allegro_message("pas pu trouver epee_1.bmp");
        exit(EXIT_FAILURE);
    }

    //récupération de la Bitmap du choix des joueurs
    cjoueur=load_bitmap("BITMAPS/menujoueurs.bmp",NULL);
    if (!curseur)
    {
        allegro_message("pas pu trouver menujoueurs.bmp");
        exit(EXIT_FAILURE);
    }


    // Boucle d'animation pour l'affichage
    while (!key[KEY_ESC])
    {
        if(avjeu<4)
        {
            hubmenus(menu,curseur,cjoueur,&avjeu,&nbjoueurs);
        }
        else if(avjeu==4)
        {
            ///jeu
        }
    }
    /*char liste[TL][NBC];
    lFichier(liste);
    rDonnees(liste,numD);
    */
    allegro_exit();
    return 0;
}
END_OF_MAIN();
