#include "maBiblio.h"
int main()
{
    t_joueur joueur;//Creation de joueur, structure de type t_joueur
    joueur = cJoueur(joueur);//On affecte a joueur les donnees recup par la fonction
    testRecupJoueur(joueur);//Procedure permettant d'afficher les donnees stockees dans t_joueur et de verifier le bon fonctionnement de cJoueur
    return 0;
}
