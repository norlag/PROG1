/*
  ---------------------------------------------------------------------------
  Fichier     : exercice_2_13.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 10.10.21
  But         :
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/
#include <iostream> // cout, fixed
#include <cmath>    // log10

using namespace std;

int main() {
	int number;

	cout << "Entrez un nombre entier > 0 : " << endl;
	cin >> number;

	cout << "Nombre saisi :" << number << endl;
	cout << "Premier chiffre : " << number / (int)pow(10, int(log10(number))) << endl;
	cout << "Dernier chiffre : " << number % 10 << endl;
	cout << "Nombre de chiffres : " << int(log10(number) + 1) << endl;

	return 0;
}
