#include "maBiblio.h"

t_joueur* nbmJoueurs()
{
    t_joueur joueur;//Allocation d'une structure de type t_joueur
    int choixNbm;//Entree du choix des joueurs quant a leur nombre = a recuperer depuis le menu. POSSIBLE PASSAGE PAR PARAMETRE
    int i;//Variable iterative

    t_joueur* tabJoueurs = NULL;//On fait d'abord pointer tabJoueurs vers NULL (Permet de verifier alloc par la suite)

    tabJoueurs = malloc(choixNbm * sizeof(t_joueur));//Allocation dynamique d'un tableau du meme nombre de case que de joueurs
    //Chaque case a la taille d'une structure t_joueur
    if (tabJoueurs == NULL) // Si l'allocation a échoué
    {
        printf("\nERREUR ALLOCATION DYNAMIQUE\n");//Test au cas ou alloc dynamique ne fonctionne pas
        //On peut rajouter exit(0); si l'on veut directement quitter le programme en cas d'erreur d'alloc
    }
    else
    {
        printf("\nREUSSITE ALLOCATION DYNAMIQUE\n");//Verification reussite allocation dynamique du tableau
    }

    for(i = 0; i<choixNbm; i++)//Boucle permettant de remplir chaque case du tableau
    {
        tabJoueurs[i] = cJoueur(joueur);//Entree en fonction du nombre de joueurs de structures t_joueur dans le tableau
    }

    printf("%d", tabJoueurs[0].pa);//Verification entree de la premiere structure t_joueur dans le tableau

    return tabJoueurs;
    ///    /!\ TROUVER L'ENDROIT OU FAIRE FREE(TabJoueurs)
}
