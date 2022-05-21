#include "maBiblio.h"

int main()
{

    t_joueur *joueurs = NULL;
    // Chargement de l'image (l'allocation a lieu en même temps)

    t_cases carte[LIGNES][COLONNES];
    alloueCases(carte);


    // Vérification que l'image est bien chargée (dans le cas contraire image vaut NULL)
    // TOUJOURS LE FAIRE CAR ON N'EST JAMAIS CERTAIN DE BIEN TROUVER L'IMAGE




    /* Pour savoir a quelle etape le jeux est, un entier est creee et chaque valeur correspond à un etat d'avancement :
     ex: -0 signifie que le joueur en est au menu
         -1 signifie que le joueur en est aux crédits
         -2 signifie que le joueur en est au parcours des classes
         -3 signifie que le joueur en est au choix du nombre de joueurs
         -4 signifie que les joueurs choississent leurs classes
         -5 signifie que les joueur en sont au jeux en lui meme
    */
    int avjeu = 0;
    int nbjoueurs=2;
    int choiclasse=0;


    BITMAP *menu=NULL;
    BITMAP *epee = NULL;
    BITMAP *credit=NULL;
    BITMAP *curseur=NULL;
    BITMAP *decor = NULL;
    BITMAP *coeur = NULL;
    BITMAP *fondlave=NULL;
    BITMAP *perso0w = NULL;
    BITMAP *perso1w = NULL;
    BITMAP *perso2w = NULL;
    BITMAP *perso3w = NULL;
    BITMAP *choclasse=NULL;
    BITMAP *grillage = NULL;
    BITMAP *chaussure = NULL;
    BITMAP *persocourt = NULL;
    BITMAP *choijoueur = NULL;
    BITMAP *joueurSuivant=NULL;
    BITMAP *caseAttaqueAut=NULL;
    BITMAP *caseAttaqueEte=NULL;
    BITMAP *caseAttaqueHiv=NULL;
    BITMAP *caseAttaquePrint=NULL;
    initialisation();


    decor=load_bitmap("BITMAPS/carte2.bmp",NULL);
    // Vérification que l'image est bien chargée (dans le cas contraire image vaut NULL)
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

    menu = load_bitmap("BITMAPS/menu.bmp",NULL);
    if (!menu)
    {
        allegro_message("pas pu trouver menu.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    credit = load_bitmap("BITMAPS/menuCredits.bmp",NULL);
    if (!credit)
    {
        allegro_message("pas pu trouver menucredits.bmp");
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


    //récupération Bitmap grillage
    grillage=load_bitmap("BITMAPS/grillagesuperpose.bmp",NULL);
    if (!grillage)
    {
        allegro_message("pas pu trouver grillage.bmp");
        exit(EXIT_FAILURE);
    }

    //récupération Bitmap pour choisir la classe
    choclasse=load_bitmap("BITMAPS/choixClasse.bmp",NULL);
    if (!choclasse)
    {
        allegro_message("pas pu trouver choixClasse.bmp");
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
    if (!choijoueur)
    {
        allegro_message("pas pu trouver perso3Court0.bmp");
        exit(EXIT_FAILURE);
    }


    // Boucle d'animation pour l'affichage
    while (avjeu!=6)
    {
        if(avjeu<4)
        {
            hubmenus(menu,curseur,choijoueur,credit,&avjeu,&nbjoueurs);
        }
        else if(avjeu == 4)
        {
            joueurs=malloc(nbjoueurs*sizeof(t_joueur));
            initJoueur(joueurs, &nbjoueurs);
            for(int i=0; i<nbjoueurs; i++)
            {
                choiclasse = choixclasse(choclasse,curseur);
                joueurs[i] = cJoueur(joueurs[i],choiclasse);
            }

            avjeu=5;
            //testRecupJoueur(joueurs[1])
            //Test afin de verifier la classe recupere
            //par le sous-programme
            //testRecupJoueur
        }
        else if(avjeu == 5)
        {
            enJeu(decor,grillage,curseur,&avjeu,choijoueur,credit,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaquePrint,caseAttaqueEte,caseAttaqueAut,caseAttaqueHiv,joueurs,&nbjoueurs,carte);
        }
    }
    free(joueurs);
    return 0;
}
END_OF_MAIN();
