#include "fonctions.h"

void tracerLigneType(char remplissage, int longueur, bool avecEndl)
{
        std::cout <<setfill(remplissage) << setw(longueur) << remplissage ;
        std::cout << (avecEndl ?"\n" : "") << std::endl;
}

void centrerTexte(string texte, char remplissage, int longueur)
{
    //gauche
    std::cout << left << setfill(remplissage)<<setw((longueur-texte.size())/2)<<remplissage ;
    //texte
     std::cout << texte;
     //droite
    std::cout << right << setfill(remplissage)<<setw((longueur-texte.size())/2)<<remplissage ;

}
