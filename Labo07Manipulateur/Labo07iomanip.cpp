#include "fonctions.h"

int main()
{
	
	setlocale(LC_ALL, "");
	int a=11;
	int b = 123;
	int c =1023;
	int d=10512;
	int nb;
	string titre;

	//Déclarations des constantes
	const int LARGEUR_COL1=10;
	const int LARGEUR_COL2=25;



//		Ici on souhaite avoir deux colonnes :une pour la description du texte
	std::cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur a" << " : " << right <<setfill('.') << setw(LARGEUR_COL2) << a << std::endl;
	std::cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur b" << " : " << right <<setfill('.') << setw(LARGEUR_COL2) << b << std::endl;
	std::cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur c" << " : " << right <<setfill('.') << setw(LARGEUR_COL2) << c << std::endl;
	std::cout << left << setfill(' ') << setw(LARGEUR_COL1) << "valeur d" << " : " << right <<setfill('.') << setw(LARGEUR_COL2) << d << std::endl;
	std::cout << setfill('-') << setw(LARGEUR_COL1+3+LARGEUR_COL2)<<"-"<<"\n";
	std::cout << left <<setfill(' ') << setw(LARGEUR_COL1) << "somme" << " : " << right <<setfill('.') << setw(LARGEUR_COL2) << a+b+c+d << std::endl;
	
	// Demander a l'utilsateur un nombre
	std::cout << "veuillez entrez un nombre plus petit que 80" << std::endl;
	cin>> nb;
	cin.ignore();

	//afficher une ligner de tirets

	/* std::cout << setfill('-') << setw(nb) <<"\n"; */

	tracerLigneType('-',nb,true);


	//Demander a l'utilisateur un titre a centre
	std::cout << "veilleuz entrer le titre a centrer" << std::endl;
	getline(cin,titre,'\n');

	//On veut centrer le titre dans une ligne de tirets

	centrerTexte(titre,'-',nb);


}