#include "maBiblio.h"

t_joueur cJoueur(t_joueur joueur,int choix)
{
    t_classes classe1;

        //Recuperer choix sur l'ecran du joueur pour sa classe et stocker dans choix. Remplacer Les 2 prochaines lignes de code
        //printf("Entrer choix\n");
        //scanf("%d", &choix);

        if(choix == 0)
        {
            joueur.classeJ = cClasses(classe1);
            joueur.classe = choix;
            joueur.pa = 5;
            joueur.pm = 3;
            joueur.pv = 20;
        }
       /* else if(choix == 1)
        {
            joueur->classeJ = cClasses1(classe1);
            joueur->classe = choix;
            joueur->pa = 5;
            joueur->pm = 3;
            joueur->pv = 20;
        }
        else if(choix == 2)
        {
            joueur->classeJ = cClasses2(classe1);
            joueur->classe = choix;
            joueur->pa = 5;
            joueur->pm = 3;
            joueur->pv = 20;
        }
        else if(choix == 3)
        {
            joueur->classeJ = cClasses3(classe1);
            joueur->classe = choix;
            joueur->pa = 5;
            joueur->pm = 3;
            joueur->pv = 20;
        }*/

    return joueur;
}
