#include "maBiblio.h"

void hubmenus(BITMAP* menu,BITMAP* curseur,BITMAP* cjoueur,BITMAP *credit,int* avjeu,int* nbjoueur)
{
    if(*avjeu==0)
    {
        //lancer menu
        lancermenu(menu,curseur,avjeu);
    }
    else if(*avjeu==1)
    {
        //lancer cr?dits
        credits(credit,curseur,avjeu);
    }

    else if(*avjeu==2)
    {
        ///afficher classes
    }

    else if(*avjeu==3)
    {
        //choix nb personnages
        nombrejoueurs(cjoueur,curseur,avjeu,nbjoueur);
    }
}
