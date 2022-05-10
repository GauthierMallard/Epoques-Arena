#include "maBiblio.h"

void hubmenus(BITMAP* menu,BITMAP* curseur,int* avjeu)
{
    if(*avjeu==0)
    {
        ///lancer menu
        lancermenu(menu,curseur,avjeu);
    }
    else if(*avjeu==1)
    {
        ///lancer crédits
    }

    else if(*avjeu==2)
    {
        ///afficher classes
    }

    else if(*avjeu==3)
    {
        ///choix nb personnages
    }
}
