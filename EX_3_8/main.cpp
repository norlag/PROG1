/*
  ---------------------------------------------------------------------------
  Fichier     : exercice_3_8.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 12.10.21
  But         : Demander à l'utilisateur d'entrer le numéro d'un mois pour le donner le nombre de jours dans celui-ci
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
	int numero_du_mois;
	string nombre_de_jours;

	// Demande à l'utilisateur d'entrer le numéro du mois
	cout << "Entrez un no de mois (1-12) :" << endl;
	cin >> numero_du_mois;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || numero_du_mois < 1 || numero_du_mois > 12)
	{
		cout << "Erreur ! Le numero du mois n'est pas valide";
		return 1;
	}

	// Calcul du nombre de jours avec un opérateur ternaire
	nombre_de_jours =
			  numero_du_mois == 4 ||
			  numero_du_mois == 6 ||
			  numero_du_mois == 9 ||
			  numero_du_mois == 11 ? "31" : (numero_du_mois == 2 ? "28 ou 29" : "30");

	// Affiche à l'utilisateur le résultat
	cout << "Ce mois comporte " << nombre_de_jours << " jours" << endl;

	// Fin du programme
	cout << "Appuyez sur enter pour quitter le programme" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}
