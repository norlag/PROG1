/*
  ---------------------------------------------------------------------------
  Fichier     : triangle_etoile.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 29.10.21
  But         : Afficher un triangle d'étoiles avec une hauteur définie par l'utilisateur
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Variables
	bool erreur;
	int h_pyramide;

	cout << "Bonjour, ce programme a pour but de ..." << endl;

	do {
		cout << "Merci d'entrer la hauteur de la pyramide (n > 0) : ";
		cin >> h_pyramide;

		// vérification
		erreur = cin.fail() || h_pyramide < 0;

		if (erreur) {
			cout << "Erreur, la hauteur de la pyramide doit être un nombre entier plus grand ou égal à 0" << endl;
			cin.clear();
		}

		// vider buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	} while(erreur);

	for (int h = 1; h <= h_pyramide; ++h) {
		for (int s = 0; s < h_pyramide - h; ++s) {
			cout << " ";
		}
		for (int e = 1; e <= h * 2 - 1; ++e) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
