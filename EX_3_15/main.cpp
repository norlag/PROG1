/*
  ---------------------------------------------------------------------------
  Fichier     : exercice_3_15.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 18.10.21
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
	enum class MOIS { JANVIER = 1, FEVRIER, MARS, AVRIL, MAI, JUIN,
		JUILLET, AOUT, SEPTEMBRE, OCTOBRE, NOVEMBRE, DECEMBRE };

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

	switch (MOIS(numero_du_mois))
	{
		case MOIS::AVRIL:
		case MOIS::JUIN:
		case MOIS::SEPTEMBRE:
		case MOIS::NOVEMBRE:
			nombre_de_jours = "31";
			break;
		case MOIS::FEVRIER:
			nombre_de_jours = "28 ou 29";
			break;
		default:
			nombre_de_jours = "30";
			break;
	}

	// Affiche à l'utilisateur le résultat
	cout << "Ce mois comporte " << nombre_de_jours << " jours" << endl;

	// Fin du programme
	cout << "Appuyez sur enter pour quitter le programme" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}
