#include "maBiblio.h"


void affichageSortSurvoleSouris(BITMAP*page)
{
 if (mouse_b&1)
{

   textprintf_ex(page, font, 200, 200, makecol(0, 0, 0),-1,"Ca s'affiche");

}
 else if ((mouse_x>00) &&(mouse_x<200)&& (mouse_y>00)&&(mouse_y<200))
{
   rectfill(page,SCREEN_W-650,SCREEN_H-200,SCREEN_W-300,SCREEN_H-150,makecol(0,0,0));
   textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Premier sort");
   textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point d'attaque %d",mouse_x );
   textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"Point de vie %d",mouse_y );
   textprintf_ex(page,font,SCREEN_W-648,SCREEN_H-198,makecol(255,255,255),-1,"point de dépplacement %d",mouse_x);

}
}
