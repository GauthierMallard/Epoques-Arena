#include <time.h>
#include <math.h>
#include <string.h>


///Prototypes des fonctions
int lFichier(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la premiere classe
int lFichier1(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la 2eme classe
int lFichier2(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la 3eme classe
int lFichier3(char liste[TL][NBC]);//Lecture du fichier ou sont contenus les sorts de la 4eme classe
void affListe(char liste[TL][NBC]);//Affiche la liste dans laquelle on recupere le fichier
t_sort rDonnees(char liste[TL][NBC], int numS, t_sort sort1);//Copie des donnees dans une structure de type t_sort
t_classes cClasses(t_classes classe1);//Fonction appellee lors de la creation d'une classe.
t_classes cClasses1(t_classes classe1);
t_classes cClasses2(t_classes classe1);
t_classes cClasses3(t_classes classe1);
t_joueur cJoueur(t_joueur joueur);
void testRecupJoueur(t_joueur joueur);//Procédure permettant d'afficher les donnees stockees pour verifier bonne recuperation
//Il faudra recuperer ce ss programme et l'associer a un personnage par la suite -> Pour celui qui s'en occupe.

#endif // MABIBLIO_H_INCLUDED
