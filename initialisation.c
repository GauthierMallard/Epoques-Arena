#include "maBiblio.h"

void initialisation(BITMAP *menu,BITMAP *curseur)
{
    // Lancer allegro et le mode graphique
    allegro_init();
    install_keyboard();
    install_mouse();

    //affichage en plein �cran de la fenetre
    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_WINDOWED,800,600,0,0)!=0)
    {
        allegro_message("prb gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    //r�cup�ration de la Bitmap du menu

    menu=load_bitmap("menu.bmp",NULL);
    if (!menu)
    {
        allegro_message("pas pu trouver menu.bmp");
        exit(EXIT_FAILURE);
    }

    //r�cup�ration de la Bitmap du curseur

    menu=load_bitmap("�p�e_1.bmp",NULL);
    if (!menu)
    {
        allegro_message("pas pu trouver �p�e 1.bmp");
        exit(EXIT_FAILURE);
    }
}
