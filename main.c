#include "maBiblio.h"

int main()
{
    /* Pour savoir a quelle etape le jeux est, un entier est creee et chaque valeur correspond à un etat d'avancement :
     ex: -0 signifie que le joueur en est au menu
         -1 signifie que le joueur en est aux crédits
         -2 signifie que le joueur en est au parcours des classes
         -3 signifie que le joueur en est au choix du nombre de joueurs
         -4 signifie que les joueurs choississent leurs classes
         -5 signifie que les joueur en sont au jeux en lui meme
    */
    int avjeu = 0;
    t_joueur* joueurs=NULL;
    int nbjoueurs=2;


    int numD = 1;
    BITMAP *menu=NULL;
    BITMAP *curseur=NULL;
    BITMAP *cjoueur=NULL;
    BITMAP *credit=NULL;
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

    //récupération de la Bitmap des credits
    credit=load_bitmap("BITMAPS/menucredits.bmp",NULL);
    if (!curseur)
    {
        allegro_message("pas pu trouver menucredits.bmp");
        exit(EXIT_FAILURE);
    }

    // Boucle d'animation pour l'affichage
    while (!key[KEY_ESC])
    {
        if(avjeu<4)
        {
            hubmenus(menu,curseur,cjoueur,credit,&avjeu,&nbjoueurs);
        }
        else if(avjeu==4)
        {
            joueurs=malloc(nbjoueurs*sizeof(t_joueur));
            if(joueurs == NULL)
            {
                printf("ERREUR\n");
            }
            if(joueurs != NULL)
            {
                printf("OK\n");
            }
            joueurs[0] = cJoueur(joueurs[0],0);
            avjeu=+1;
            testRecupJoueur(joueurs[0]);


            //choixclasse(menu,curseur,&avjeu,&nbjoueurs,joueurs);
        }
        else if(avjeu==5)
        {
            ///jeu
        }
    }

    allegro_exit();
    free(joueurs);
    return 0;
}
END_OF_MAIN();
