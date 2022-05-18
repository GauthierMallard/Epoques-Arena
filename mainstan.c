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
    int nbjoueur =4;
    // Lancer allegro
    initallegro();
    // Chargement de l'image (l'allocation a lieu en même temps)
    decor=load_bitmap("carte2.bmp",NULL);

    // Vérification que l'image est bien chargée (dans le cas contraire image vaut NULL)
    // TOUJOURS LE FAIRE CAR ON N'EST JAMAIS CERTAIN DE BIEN TROUVER L'IMAGE

    if (!decor)
    {
        allegro_message("pas pu trouver carte2.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    coeur =load_bitmap("coeur.bmp",NULL);

    if (!coeur)
    {
        allegro_message("pas pu trouver coeur.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    caseAttaque =load_bitmap("caseAttaque.bmp",NULL);

    if (!caseAttaque)
    {
        allegro_message("pas pu trouver caseAttaque.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }
    epee = load_bitmap("epee.bmp",NULL);

    if (!epee)
    {
        allegro_message("pas pu trouver epee.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    chaussure =load_bitmap("chaussure.bmp",NULL);
    if (!chaussure)
    {
        allegro_message("pas pu trouver chaussure.bmp");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    // test affichage du joueur
    perso0w=load_bitmap("perso0court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso0w)
    {
        allegro_message("pas pu trouver perso0Court0.bmp");
        exit(EXIT_FAILURE);
    }
        perso1w=load_bitmap("perso1court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso1w)
    {
        allegro_message("pas pu trouver perso1court0.bmp");
        exit(EXIT_FAILURE);
    }
        perso2w=load_bitmap("perso2court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso2w)
    {
        allegro_message("pas pu trouver perso2Couyrt0.bmp");
        exit(EXIT_FAILURE);
    }
        perso3w=load_bitmap("perso3court0.bmp",NULL);
    // void clear_bitmap(BITMAP*personnage1);
    if (!perso1w)
    {
        allegro_message("pas pu trouver perso3Court0.bmp");
        exit(EXIT_FAILURE);
    }
    fondlave=load_bitmap("fondEcran.bmp",NULL);
        if (!fondlave)
    {
        allegro_message("pas pu trouver fondlave.bmp");
        exit(EXIT_FAILURE);
    }
    joueurSuivant=load_bitmap("joueurSuivant.bmp",NULL);
        if (!joueurSuivant)
    {
        allegro_message("pas pu trouver joueurSuivant.bmp");
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


    masked_blit(epee,page,0,0,710,470,SCREEN_W,SCREEN_H);
    textprintf_ex(page, font, 750, 575, makecol(0, 0, 0),-1,"%d",nbjoueur); // changer pour afficher ptd'attaque et non nbjoueur
    masked_blit(caseAttaque,page,0,0,200,640,SCREEN_W,SCREEN_H);
    masked_blit(chaussure, page,0,0,700,370,SCREEN_W,SCREEN_H);
    textprintf_ex(page, font, 740, 405, makecol(255, 255, 255),-1,"%d",nbjoueur);  // changer nb joueur avec pt de deplacement
    masked_blit(coeur,page,0,0,650,450,SCREEN_W,SCREEN_H);
    textprintf_ex(page, font, 692, 485, makecol(0, 0, 0),-1,"%d",nbjoueur);
    masked_blit(joueurSuivant, page,0,0,615,640,SCREEN_W,SCREEN_H);
    blit(page,screen,0,0,0,0,SCREEN_W,SCREEN_H);


    //draw_sprite(coeur,screen,SCREEN_W,SCREEN_H);
    //textprintf_ex(coeur,font,SCREEN_W,SCREEN_H,makecol(255,255,255),-1,"%d", i);
    //textprintf_ex(coeur,screen,SCREEN_W-74,SCREEN_H-585,makecol(0,0,0),-1,"PV: %d", i);

    // Boucle interactive
   while (!key[KEY_ESC])
    {
        animationPersonnageCourt(decor, page,persocourt,perso0w,perso1w,perso2w,perso3w, nomfichier,coeur,fondlave,epee,chaussure,joueurSuivant);
        //affichageSortSurvoleSouris(page);
        lancerSort(lanceur,choixSort);
    }

    return 0;
}
END_OF_MAIN();
