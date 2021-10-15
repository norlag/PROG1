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
	int i = 5, j = 11;
	double x;

	x = (double) j / i;
	cout << x << endl;
	x = double (j / i);
	cout << x << endl;
	x = j / i + .5;
	cout << x << endl;
	x = (double) j / i + .5;
	cout << x << endl;
	x = (int) (j + .5) / i;
	cout << x << endl;

	return EXIT_SUCCESS;
}

