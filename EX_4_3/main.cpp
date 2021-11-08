/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 04.11.21
  But         :
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

using namespace std;

double getPyramideVolume(double longueur, double largeur, double hauteur);

int main() {
	cout << fixed << setprecision(1);

	cout << "Pyramide 1: " << getPyramideVolume(10, 3.5, 12) << endl;
	cout << "Pyramide 2: " << getPyramideVolume(3.6, 2.4, 2.7) << endl;
	return 0;
}

double getPyramideVolume(double longueur, double largeur, double hauteur)
{
	double base = longueur * largeur;
	return ((base * base * hauteur) / 3);
}