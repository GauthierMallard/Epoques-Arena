#include "maBiblio.h"


int lFichier(char liste[TL][NBC])
{
    int j = 0;//Variable it�rative
    FILE* f = fopen("fichiers/classes.txt", "r");//On ouvre le fichier de classes que l'on nomme f
    if (f == NULL) {//test d'ouverture du fichier
        printf("Erreur d'ouverture de fichier.");
        return 1;
        }

    for(j=0;j<TL;j++)//Boucle permettant d'ajouter une ligne de lecture dans chacune des TL cases
    {
        fgets(liste[j], NBC, f);//On r�cup�re chaque chaine de caract�re
    }

    affListe(liste);
    return 1;
}
