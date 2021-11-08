/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 28.09.21
  But         : Installer et configurer l’environnement de développement
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 3; ++i) {
		for (int j = 1; j <= 5; ++j) {
			if (j % 2 == 0) {
				cout << "*";
			} else {
				cout << "_";
			}
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 1; i <= 3; ++i) {
		for (int j = 1; j <= 5; ++j) {
			if ( (i + j) % 2 == 0) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}

