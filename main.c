
#include "header.h"
#include "maBiblio.h"

int main()
{
    /* Pour savoir a quelle etape le jeux est, un entier est creee et chaque valeur correspond à un etat d'avancement :
     ex: -0 signifie que le joueur en est au menu
         -1 signifie que le joueur en est aux crédits
         -2 signifie que le joueur en est au parcours des classes
         -3 signifie que le joueur en est au choix du nombre de joueurs
         -4 signifie que le joueur en est au jeux en lui meme
    */
    int avjeu = 0;
    int numD = 1;
    void initialisation();
    // Boucle d'animation pour l'affichage
    while (!key[KEY_ESC])
    {
        if(avjeu>0 || avjeu<4)
        {
            hubmenus(&avjeu);
        }
    }
    /*char liste[TL][NBC];
    lFichier(liste);
    rDonnees(liste,numD);
    */
    return 0;
}
END_OF_MAIN();
