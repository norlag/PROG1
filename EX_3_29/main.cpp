/*
  ---------------------------------------------------------------------------
  Fichier     : ppmc.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 29.10.21
  But         :
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
	// Variables
	int n, m;
	bool erreur;

	do {
		cout << "Veuillez entrer 2 nombres entiers, ex \"12 8\" : ";
		cin >> n >> m;

		// vérification
		erreur = cin.fail();

		if (erreur) {
			cout << "Erreur" << endl;
			cin.clear();
		}

		// vider buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	} while(erreur);

	while(n != m)
	{
		if(n > m)
			n -= m;
		else
			m -= n;
	}

	cout << "Le ppmc vaut " << n << endl;

	return EXIT_SUCCESS;
}
