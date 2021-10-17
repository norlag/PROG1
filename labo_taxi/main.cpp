/*
  ---------------------------------------------------------------------------
  Fichier     : labo_taxi.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 15.10.21
  But         : Calculer le coût d'un trajet en taxi en fonction du nbr de bagages, de la distance à parcourir et de la vitesse
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>	// cin, cout
#include <limits>		// numeric_limits
#include <iomanip>	// setprecision, setw

using namespace std;

int main() {
	int nombre_de_bagages, heure_de_depart;
	double distance_a_parcourir, vitesse_moyenne;
	double supplement_bagage, prix_course, prix_total, duree_course, tarif_applicable; // Variables de calcul

	constexpr double SURTAXE_BAGAGE = 2.5,
	PRISE_EN_CHARGE = 5.0,
	TARIF_MINUTE_JOUR = 1.0,
	TARIF_MINUTE_NUIT = 1.6;

	constexpr unsigned int DEBUT_TARIF_JOUR = 8,
	FIN_TARIF_JOUR = 20,
	NBRE_MIN_BAGAGES = 0,
	NBRE_MAX_BAGAGES = 4,
	HEURES_MIN = 0,
	HEURES_MAX = 23,
	VITESSE_MIN = 50,
	VITESSE_MAX = 120,
	DISTANCE_MIN_PARCOURS = 0,
	DISTANCE_MAX_PARCOURS = 500,
	MIN_DANS_HEURE = 60;

	cout << fixed << setprecision(2);	// Deux chiffres après la virgule

	const unsigned int ESP_TXT = 35;			// Espacement du texte pour l'affichage

	cout	<< "Bonjour, ce programme a pour but de calculer le coût de votre trajet en taxi" << endl
			<< "Voici les conditions" << endl
			<< "=================================================" << endl
			<< setw(ESP_TXT) << left << "- Prise en charge : " << right << PRISE_EN_CHARGE << endl
			<< setw(ESP_TXT) << left << "- Supplement par bagage : " << right << SURTAXE_BAGAGE << endl
			<< setw(ESP_TXT) << left << "- Tarif/min (jour) : " << right << TARIF_MINUTE_JOUR << endl
			<< setw(ESP_TXT) << left << "- Tarif/min (nuit) : " << right << TARIF_MINUTE_NUIT << endl
			<< setw(ESP_TXT) << left << "- Heures de jour : " << right << "[" << DEBUT_TARIF_JOUR << " - " << FIN_TARIF_JOUR << "]" << endl;

	cout << endl;

	cout	<< "Votre commande" << endl
			<< "=================================================" << endl;

	// Saisie "nombre de bagages"
	cout << setw(ESP_TXT) << left << "- Nombre de bagage" << right << "[" << NBRE_MIN_BAGAGES << " - " << NBRE_MAX_BAGAGES << "] :";
	cin >> nombre_de_bagages;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || nombre_de_bagages < NBRE_MIN_BAGAGES || nombre_de_bagages > NBRE_MAX_BAGAGES)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		cout << "Presser ENTER pour quitter" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 1;
	}

	// Saisie "distance"
	cout << setw(ESP_TXT) << left << "- Distance [km]" << right << "[" << DISTANCE_MIN_PARCOURS << " - " << DISTANCE_MAX_PARCOURS << "] :";
	cin >> distance_a_parcourir;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || distance_a_parcourir < DISTANCE_MIN_PARCOURS || distance_a_parcourir > DISTANCE_MAX_PARCOURS)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		cout << "Presser ENTER pour quitter" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 1;
	}

	// Saisie "vitesse"
	cout << setw(ESP_TXT) << left << "- Vitesse [km/h]" << right << "[" << VITESSE_MIN << " - " << VITESSE_MAX << "] :";
	cin >> vitesse_moyenne;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || vitesse_moyenne < VITESSE_MIN || vitesse_moyenne > VITESSE_MAX)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		cout << "Presser ENTER pour quitter" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 1;
	}

	// Saisie "Heure de depart"
	cout << setw(ESP_TXT) << left << "- Heure de depart" << right << "[" << HEURES_MIN << " - " << HEURES_MAX << "] :";
	cin >> heure_de_depart;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || heure_de_depart < HEURES_MIN || heure_de_depart > HEURES_MAX)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		cout << "Presser ENTER pour quitter" << endl;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return 1;
	}

	cout << endl;

	supplement_bagage = nombre_de_bagages * SURTAXE_BAGAGE;				// Coût des bagages en supplément
	duree_course = distance_a_parcourir / vitesse_moyenne;				// Durée de la course en heures
	tarif_applicable = (heure_de_depart >= DEBUT_TARIF_JOUR && heure_de_depart < FIN_TARIF_JOUR) ?
		TARIF_MINUTE_JOUR : TARIF_MINUTE_NUIT;									// Obtient le tarif à appliquer en fct. de l'heure de départ

	prix_course = duree_course * MIN_DANS_HEURE * tarif_applicable;	// Prix de la course
	prix_total = PRISE_EN_CHARGE + supplement_bagage + prix_course;	// Prix total

	cout << "Votre ticket" << endl
			<< "=================================================" << endl;

	cout << setw(ESP_TXT) << left << "- Prise en charge : " << right << PRISE_EN_CHARGE << endl;

	if (nombre_de_bagages > 0)
		cout << setw(ESP_TXT) << left << "- Supplement bagages : " << right << supplement_bagage << endl;

	cout << setw(ESP_TXT) << left << "- Prix de la course : " << right << prix_course << endl;
	cout << setw(ESP_TXT) << right << "TOTAL : " << prix_total << endl << endl;

	// Fin du programme
	cout << "Presser ENTER pour quitter" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return 0;
}
