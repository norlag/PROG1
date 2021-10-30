/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 29.10.21
  But         : Calculer la somme des n premiers termes de la série harmonique
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
	bool erreur;
	int n;
	double somme;

	do {
		cout << "Combien de termes voulez-vous ? ";
		cin >> n;

		// vérification
		erreur = cin.fail() || n <= 0;

		if (erreur) {
			cout << "Erreur, la valeur saisie doit etre > 0" << endl;
			cin.clear();
		}

		// vider buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	} while(erreur);

	somme = 0;
	for (int i = 1; i <= n; ++i) {
		somme += 1.0/i;
	}

	cout << "La somme des " << n << " premiers termes de la serie vaut " << somme << endl;

	return EXIT_SUCCESS;
}
