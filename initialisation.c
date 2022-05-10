#include "maBiblio.h"

void initialisation()
{
    // Lancer allegro et le mode graphique
    allegro_init();
    install_keyboard();
    install_mouse();

    set_color_depth(desktop_color_depth());
    if (set_gfx_mode(GFX_AUTODETECT_FULLSCREEN,800,600,0,0)!=0)
    {
        allegro_message("prb gfx mode");
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    BITMAP *menu;
    menu=load_bitmap("menu.bmp",NULL);
    if (!menu)
    {
        allegro_message("pas pu trouver reticules.bmp");
        exit(EXIT_FAILURE);
    }
}
