#include "maBiblio.h"

int main()
{
    char nomfichier[256];
    // Déclaration des pointeurs sur BITMAP devant recevoir les image
    BITMAP *decor = NULL;
    BITMAP *coeur = NULL;
    BITMAP *epee = NULL;
    BITMAP *chaussure = NULL;
    BITMAP *perso0w = NULL;
    BITMAP *perso1w = NULL;
    BITMAP *perso2w = NULL;
    BITMAP *perso3w = NULL;
    BITMAP *persocourt = NULL;
    BITMAP *page=NULL;
    BITMAP *fondlave=NULL;
    BITMAP *joueurSuivant=NULL;
    BITMAP *caseAttaque=NULL;
    t_joueur *joueurs;
    int nbjoueur =4;
    int jqj = 0;
    int test = 0;
    // Lancer allegro
    initallegro();
    // Chargement de l'image (l'allocation a lieu en même temps)
    decor=load_bitmap("carte2.bmp",NULL);
    t_cases carte[LIGNES][COLONNES];
    creationCarte(carte);
    alloueCases(carte);


    // Vérification que l'image est bien chargée (dans le cas contraire image vaut NULL)
    // TOUJOURS LE FAIRE CAR ON N'EST JAMAIS CERTAIN DE BIEN TROUVER L'IMAGE

    if (!decor)
    {
        allegro_message("pas pu trouver carte2.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }


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
    if (!menu)
    {
        allegro_message("pas pu trouver grillage.bmp");
        exit(EXIT_FAILURE);
    }

    //récupération Bitmap pour choisir la classe
    choclasse=load_bitmap("BITMAPS/choixClasse.bmp",NULL);
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
    if (!choijoueur)
    {
        allegro_message("pas pu trouver perso3Court0.bmp");
        exit(EXIT_FAILURE);
    }


    //affichage des bitmaps sur l'écran
    page=create_bitmap(SCREEN_W,SCREEN_H);  // doublebuffer
    blit(fondlave,page,0,0,0,0,SCREEN_W,SCREEN_H);
    blit(decor,page,0,0,0,0,644,636);
    masked_blit(perso0w, page, 0,0,0,0,SCREEN_W,SCREEN_H);
    masked_blit(perso1w, page, 0,0,0,0,SCREEN_W,SCREEN_H);
    if(nbjoueur == 3)
    {
        //masked_blit(perso1w, page, 0,0,0,0,SCREEN_W,SCREEN_H);
        masked_blit(perso2w, page, 0,0,0,0,SCREEN_W,SCREEN_H);
    }
    else if(nbjoueur == 4)
    {
        //masked_blit(perso1w, page, 0,0,50,350,SCREEN_W,SCREEN_H);
        masked_blit(perso2w, page, 0,0,0,470,SCREEN_W,SCREEN_H);
        masked_blit(perso3w, page, 0,0,130,50,SCREEN_W,SCREEN_H);
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
            initJoueur(joueurs);
        }
      /*
        while(joueurs[jqj].pm >= 1)
        {
            test = 0;
            deplacements(decor,page,persocourt,perso0w,perso1w,perso2w,perso3w,coeur,fondlave,epee,chaussure,joueurSuivant,nomfichier,joueurs,&nbjoueur,jqj,carte, &test);
            if(test == 1)
            {
                joueurs[jqj].pm = joueurs[jqj].pm-1;
            }
       */
            for(int i=0; i<nbjoueurs; i++)
            {
                choiclasse = choixclasse(choclasse,curseur);
                joueurs[i] = cJoueur(joueurs[i],choiclasse);
            }

            avjeu=5;
            //testRecupJoueur(joueurs[1]);
            //Test afin de verifier la classe recupere
            //par le sous-programme
            //testRecupJoueur
        }
        else if(avjeu == 5)
        {
            enJeu(decor,grillage,curseur,&avjeu,choijoueur,credit,coeur,epee,chaussure,perso0w,perso1w,perso2w,perso3w,persocourt,fondlave,joueurSuivant,caseAttaqueAut,joueurs,&nbjoueurs);
        }
    }
    free(joueurs);
    return 0;
}
END_OF_MAIN();
