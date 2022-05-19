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


    BITMAP *menu=NULL;
    BITMAP *curseur=NULL;
    BITMAP *choijoueur=NULL;
    BITMAP *credit=NULL;
    BITMAP *decor = NULL;
    BITMAP *coeur = NULL;
    BITMAP *epee = NULL;
    BITMAP *chaussure = NULL;
    BITMAP *perso0w = NULL;
    BITMAP *perso1w = NULL;
    BITMAP *perso2w = NULL;
    BITMAP *perso3w = NULL;
    BITMAP *persocourt = NULL;
    BITMAP *fondlave=NULL;
    BITMAP *joueurSuivant=NULL;
    BITMAP *caseAttaqueAut=NULL;
    BITMAP *caseAttaqueEte=NULL;
    BITMAP *caseAttaqueHiv=NULL;
    BITMAP *caseAttaquePrint=NULL;
    initialisation();


    decor=load_bitmap("BITMAPS/carte2.bmp",NULL);

    // Vérification que l'image est bien chargée (dans le cas contraire image vaut NULL)
    // TOUJOURS LE FAIRE CAR ON N'EST JAMAIS CERTAIN DE BIEN TROUVER L'IMAGE

    if (!decor)
    {
        allegro_message("pas pu trouver carte2.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    coeur =load_bitmap("BITMAPS/coeur.bmp",NULL);

    if (!coeur)
    {
        allegro_message("pas pu trouver coeur.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    caseAttaqueAut =load_bitmap("BITMAPS/caseAttaqueEte.bmp",NULL);
    if (!caseAttaqueAut)
    {
        allegro_message("pas pu trouver caseAttaqueEte.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    caseAttaqueHiv =load_bitmap("BITMAPS/caseAttaqueHiv.bmp",NULL);
    if (!caseAttaqueHiv)
    {
        allegro_message("pas pu trouver caseAttaqueHiv.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    caseAttaquePrint =load_bitmap("BITMAPS/caseAttaqueAut.bmp",NULL);
    if (!caseAttaquePrint)
    {
        allegro_message("pas pu trouver caseAttaqueAut.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    caseAttaqueEte =load_bitmap("BITMAPS/caseAttaquePrint.bmp",NULL);
    if (!caseAttaqueEte)
    {
        allegro_message("pas pu trouver caseAttaquePrint.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    epee = load_bitmap("BITMAPS/epee.bmp",NULL);

    if (!epee)
    {
        allegro_message("pas pu trouver epee.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    chaussure =load_bitmap("BITMAPS/chaussure.bmp",NULL);
    if (!chaussure)
    {
        allegro_message("pas pu trouver chaussure.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    // test affichage du joueur
    perso0w=load_bitmap("BITMAPS/perso0court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso0w)
    {
        allegro_message("pas pu trouver perso0Court0.bmp");
        exit(EXIT_FAILURE);
    }
        perso1w=load_bitmap("BITMAPS/perso1court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso1w)
    {
        allegro_message("pas pu trouver perso1court0.bmp");
        exit(EXIT_FAILURE);
    }
        perso2w=load_bitmap("BITMAPS/perso2court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso2w)
    {
        allegro_message("pas pu trouver perso2Couyrt0.bmp");
        exit(EXIT_FAILURE);
    }
        perso3w=load_bitmap("BITMAPS/perso3court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso1w)
    {
        allegro_message("pas pu trouver perso3Court0.bmp");
        exit(EXIT_FAILURE);
    }
    fondlave=load_bitmap("BITMAPS/fondEcran.bmp",NULL);
        if (!fondlave)
    {
        allegro_message("pas pu trouver fondlave.bmp");
        exit(EXIT_FAILURE);
    }
    joueurSuivant=load_bitmap("BITMAPS/findetour.bmp",NULL);
        if (!joueurSuivant)
    {
        allegro_message("pas pu trouver findetour.bmp");
        exit(EXIT_FAILURE);
    }

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
    choijoueur=load_bitmap("BITMAPS/menujoueurs.bmp",NULL);
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
            hubmenus(menu,curseur,choijoueur,credit,&avjeu,&nbjoueurs);
        }
        else if(avjeu==4)
        {
            joueurs=malloc(nbjoueurs*sizeof(t_joueur));
            initJoueur(joueurs);
            if(joueurs == NULL)
            {
                printf("ERREUR\n");
            }
            if(joueurs != NULL)
            {
                printf("OK\n");
            }
            for(int i=0; i<nbjoueurs; i++)
            {
                ///choixclasse
                joueurs[i] = cJoueur(joueurs[i],0);
            }

            avjeu=+1;
            testRecupJoueur(joueurs[0]);


            //choixclasse(menu,curseur,&avjeu,&nbjoueurs,joueurs);
        }
        else if(avjeu==5)
        {
            enJeu(decor,curseur,&avjeu,choijoueur,credit,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaqueAut,joueurs,&nbjoueurs);
        }
    }

    allegro_exit();
    free(joueurs);
    return 0;
}
END_OF_MAIN();
