#include "maBiblio.h"

void chemin(BITMAP* decor,BITMAP* grillage,BITMAP* curseur,BITMAP* page, BITMAP* persocourt,BITMAP* perso0w,BITMAP* perso1w,BITMAP* perso2w,BITMAP* perso3w,BITMAP* coeur,BITMAP* fondlave,BITMAP* epee,BITMAP* chaussure,BITMAP* joueurSuivant,BITMAP *caseAttaquePrint,BITMAP *caseAttaqueEte,BITMAP *caseAttaqueAut,BITMAP *caseAttaqueHiv,char nomfichier[256], t_joueur* joueurs, int* nbjoueur, int jqj, t_cases dest)
{
    if(abs(joueurs[jqj].coordJ.lignes - dest.lignes)<64 || abs(joueurs[jqj].coordJ.colonnes - dest.colonnes)<64)
    {
        animationPersonnageCourt(decor,grillage,curseur, page, persocourt, perso0w, perso1w, perso2w, perso3w, coeur, fondlave, epee, chaussure, joueurSuivant, caseAttaquePrint, caseAttaqueEte, caseAttaqueAut, caseAttaqueHiv, nomfichier, joueurs, nbjoueur, jqj,dest);
    }
}
