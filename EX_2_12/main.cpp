/*
  ---------------------------------------------------------------------------
  Fichier     : exercice_2_12.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 07.10.21
  But         : Convertit un nombre en mètres entré par l'utilisateur en unités de mesures anglo-saxonnes
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/
#include <iostream> // cout, fixed
#include <iomanip>  // setprecision, setw
#include <cmath>    // log10

using namespace std;

int main() {
	unsigned int metres;
	int spacing;

	cout << "Entrez le nombre de metres a convertir (entier > 0) :" << endl;

	cin >> metres;                         // Saisie du nombre par l'utilisateur
	spacing = 7 + int(log10(metres) + 1);  // Calcul de l'espacement en comptant le nombre de digits du nombre saisi

	cout << fixed << setprecision(2);   // Deux chiffres après la virgule

	cout <<	metres << " [m]" << " = " << metres / 1609.0 << " [mile]" << endl <<   // Conversion en miles
	setw(spacing) << " = " << metres * 3.2808	<< " [ft]" << endl <<                 // Conversion en feet
	setw(spacing) << " = " << metres * 39.37007874 << " [inch]"	<< endl;            // Conversion en inch

	return 0;
}
