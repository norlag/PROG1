/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 06.10.21
  But         :
  Remarque(s) :
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double rayon_1, rayon_2;
	double hauteur_1, hauteur_2, hauteur_3;

	// Entrée de l'utilisateur ici
	cout << "Entrer le rayon 1" << endl;
	cin >> rayon_1;
	cout << "Entrer le rayon 2" << endl;
	cin >> rayon_2;
	cout << "Entrer la hauteur 1" << endl;
	cin >> hauteur_1;
	cout << "Entrer la hauteur 2" << endl;
	cin >> hauteur_2;
	cout << "Entrer la hauteur 3" << endl;
	cin >> hauteur_3;

	// Calcul du cylindre du haut :
	double surface_cercle_haut = M_PI * pow(rayon_2, 2);
	double volume_cylindre_haut = surface_cercle_haut * hauteur_2;

	// Calcul du cône :
	double volume_cone = M_PI / 3 * (pow(rayon_1, 2) + pow(rayon_2, 2) + rayon_1 * rayon_2) * hauteur_3;

	// Calcul du cylindre du bas :
	double surface_cercle_bas = M_PI * pow(rayon_1, 2);
	double volume_cylindre_bas = surface_cercle_bas * hauteur_1;

	//Affichage du volume total càd : volume_cylindre_haut + volume_cone + volume_cylindre_bas / 1000
	cout << (volume_cylindre_haut + volume_cone + volume_cylindre_bas) / 1000 << endl;

	return 0;
}
