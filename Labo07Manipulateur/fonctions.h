#pragma once
//listes des includes 
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


//listes constantes seulement dans le .h

//Déclarations des constantes
	const int LARGEUR_COL1=10;
	const int LARGEUR_COL2=25;




//listes des prototypes de fonctions

 void tracerLigneType(char remplissage,int longueur,bool avecEndl);
 void centrerTexte(string texte,char remplissage,int longueur);