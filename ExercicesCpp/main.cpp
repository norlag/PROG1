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
	int i, j;

	i = 0;
	while (i <= 5) i++;
	cout << "A : i = " << i << endl;

	i = j = 0;
	while (i <= 5) i += j++;
	cout << "B : i = " << i << " j = " << j << endl;

	i = j = 0;
	while (i <= 5) i += ++j;
	cout << "C : i = " << i << " j = " << j << endl;

	i = j = 0;
	while (j <= 5) i += j++;
	cout << "D : i = " << i << " j = " << j << endl;

	i = j = 0;
	while (j <= 5) i += ++j;
	cout << "E : i = " << i << " j = " << j << endl;

	i = j = 0;
	while (i <= 5) i += 2; j++;
	cout << "F : i = " << i << " j = " << j << endl;


	return EXIT_SUCCESS;
}

