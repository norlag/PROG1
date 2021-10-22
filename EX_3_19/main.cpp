/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 19.10.21
  But         :
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
#include <cmath>

using namespace std;

int main() {
	double interet_annuel, montant_initial, montant_calcul;
	unsigned int nb_annees;

	cout << "Montant initial : ";
	cin >> montant_initial;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Interet annuel : ";
	cin >> interet_annuel;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (nb_annees = 0, montant_calcul = montant_initial; montant_calcul < montant_initial * 2.0; ++nb_annees)
		montant_calcul += montant_calcul * interet_annuel / 100.0;

	cout << "Il faudra attendre " << nb_annees << " ans pour doubler le montant initial. (calcule avec une boucle)" << endl;
	cout << "Il faudra attendre " << ceil(log(2) / log(1 + interet_annuel / 100)) << " ans pour doubler le montant initial. (calcule avec des maths)" << endl;

	return EXIT_SUCCESS;
}
/*
 * montant1 = 1000 + 1000 * a
 * montant1 = 1000(1 + a)
 * montant2 = montant1 + montant1 * a
 * montant2 = montant1(1 + a)
 * montant3 = montant2(1 + a)
 * montant3 = montant1(1 + a)(1 + a)
 * montant3 = montant1 * (1 + a)^2
 * montant3 = 1000 * (1 + a)^3
 * montant_initial * (1 + a)^x = montant_initial * 2
 */
