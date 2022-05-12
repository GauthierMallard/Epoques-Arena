#include "maBiblio.h"
int main()
{
    t_joueur joueur;//Creation de joueur, structure de type t_joueur
    joueur = cJoueur(joueur);//On affecte a joueur les donnees recup par la fonction
    ///LA LIGNE PRECEDENTE EST VOUEE A DISPARAITRE POUR ETRE REMPLACEE PAR LA SUIVANTE
    //nbmJoueurs();
    ///      /!\       NE PAS TESTER nbmJoueurs() AVANT D'AVOIR PLACE UN FREE
    testRecupJoueur(joueur);//Procedure permettant d'afficher les donnees stockees dans t_joueur et de verifier le bon fonctionnement de cJoueur
    return 0;
}
