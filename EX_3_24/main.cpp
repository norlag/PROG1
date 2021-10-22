/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 22.10.21
  But         : Simuler le comportement d'une balle pour avoir sa hauteur après un nombre donné de rebonds
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	// Constantes
	constexpr double G_TERRE = 9.81;
	constexpr int COEFFICIENT_REBOND_MIN = 0, COEFFICIENT_REBOND_MAX = 1, HAUTEUR_MIN = 0, REBOND_MIN = 0;

	// Variables
	double coefficient_rebond, hauteur_balle, nbr_rebonds;

	cout << "Bonjour, ce programme a pour but de simuler le comportement d'une balle pour avoir sa hauteur après un nombre donné de rebonds" << endl;
	cout << "Merci d'entrer les paramètres suivants : " << endl;

	do {
		cout << "Coefficient de rebond de la balle : ";

		// Demande d'entrée de la part de l'utilisateur
		if (not(cin >> coefficient_rebond))
		{
			// Remise à 0 du bit d'erreur et continue la boucle
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if (coefficient_rebond >= COEFFICIENT_REBOND_MIN && coefficient_rebond < COEFFICIENT_REBOND_MAX)
		{
			// Pas trouvé le moyen de ne pas répéter cette ligne, le cin.clear() doit être fait avant dans la branche d'erreur
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}

		cout << "Erreur, veuillez entrer un nombre réel plus grand ou égal à "
		<< COEFFICIENT_REBOND_MIN << " et strictement plus petit que " << COEFFICIENT_REBOND_MAX << endl;
	} while (true);

	do {
		cout << "Hauteur initiale : ";

		// Demande d'entrée de la part de l'utilisateur
		if (not(cin >> hauteur_balle))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if (hauteur_balle >= HAUTEUR_MIN)
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}

		cout << "Erreur, veuillez entrer un nombre réel plus grand ou égal à " << HAUTEUR_MIN << endl;
	} while (true);

	do {
		cout << "Nombre de rebonds : ";

		// Demande d'entrée de la part de l'utilisateur
		if (not(cin >> nbr_rebonds))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
		}
		else if (nbr_rebonds >= REBOND_MIN && nbr_rebonds == floor(nbr_rebonds))
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}

		cout << "Erreur, veuillez entrer un nombre naturel plus grand ou égal à " << REBOND_MIN << endl;
	} while (true);

	// Simulation
	{
		double vitesse_0, vitesse_1;
		int i = 0;

		// Pour chaque rebond, calcule la hauteur
		for (; i < nbr_rebonds; ++i)
		{
			vitesse_0 = sqrt(2 * G_TERRE * hauteur_balle);
			vitesse_1 = coefficient_rebond * vitesse_0;
			hauteur_balle = pow(vitesse_1, 2) / (2 * G_TERRE);
		}
	}

	cout << endl << "Après " << nbr_rebonds << " rebond" << (nbr_rebonds > 1 ? "s" : "") << ", la balle va se trouver à une hauteur de "
	<< fixed << setprecision(2) << hauteur_balle << " mètres" << endl << endl;

	// Fin du programme
	cout << "Presser ENTER pour quitter" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return EXIT_SUCCESS;
}
