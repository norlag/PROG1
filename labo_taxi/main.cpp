/*
  ---------------------------------------------------------------------------
  Fichier     : .cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 14.10.21
  But         :
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
#include <iomanip>  // setprecision, setw

using namespace std;

int main() {
	int nombre_de_bagages, heure_de_depart;
	double distance_a_parcourir, vitesse_moyenne;
	double supplement_bagage, prix_course, prix_total, duree_course, tarif; // Variables de calcul

	const double SURTAXE_BAGAGE = 2.5,
	PRISE_EN_CHARGE = 5.0,
	TARIF_MINUTE_JOUR = 1.0,
	VITESSE_MIN = 50,
	VITESSE_MAX = 120,
	DISTANCE_MIN_PARCOURS = 0,
	DISTANCE_MAX_PARCOURS = 500,
	TARIF_MINUTE_NUIT = 1.6;

	const unsigned int DEBUT_TARIF_JOUR = 8,
	FIN_TARIF_JOUR = 20,
	NBRE_MIN_BAGAGES = 0,
	NBRE_MAX_BAGAGES = 4,
	HEURES_MIN = 0,
	HEURES_MAX = 23,
	MIN_DANS_HEURE = 60;

	cout << fixed << setprecision(2); // Deux chiffres après la virgule

	const unsigned int ESP_TXT = 35;

	cout	<< "Bonjour, ce programme a pour but de ..." << endl
			<< "Voici les conditions" << endl
			<< "=======================================" << endl
			<< setw(ESP_TXT) << left << "- Prise en charge : " << right << PRISE_EN_CHARGE << endl
			<< setw(ESP_TXT) << left << "- Supplement par bagage : " << right << SURTAXE_BAGAGE << endl
			<< setw(ESP_TXT) << left << "- Tarif/min (jour) : " << right << TARIF_MINUTE_JOUR << endl
			<< setw(ESP_TXT) << left << "- Tarif/min (nuit) : " << right << TARIF_MINUTE_NUIT << endl
			<< setw(ESP_TXT) << left << "- Heures de jour : " << right << "[" << DEBUT_TARIF_JOUR << " - " << FIN_TARIF_JOUR << "]" << endl;

	cout << endl;

	cout	<< "Votre commande" << endl
			<< "=======================================" << endl;

	// Saisie "nombre de bagages"
	cout	<< "- Nombre de bagage [" << NBRE_MIN_BAGAGES << " - " << NBRE_MAX_BAGAGES << "] :";
	cin >> nombre_de_bagages;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || nombre_de_bagages < NBRE_MIN_BAGAGES || nombre_de_bagages > NBRE_MAX_BAGAGES)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		return 1;
	}

	// Saisie "distance"
	cout	<< "- Distance [km] [" << DISTANCE_MIN_PARCOURS << " - " << DISTANCE_MAX_PARCOURS << "] :";
	cin >> distance_a_parcourir;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || distance_a_parcourir < DISTANCE_MIN_PARCOURS || distance_a_parcourir > DISTANCE_MAX_PARCOURS)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		return 1;
	}

	// Saisie "vitesse"
	cout	<< "- Vitesse [km/h] [" << VITESSE_MIN << " - " << VITESSE_MAX << "] :";
	cin >> vitesse_moyenne;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || vitesse_moyenne < VITESSE_MIN || vitesse_moyenne > VITESSE_MAX)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		return 1;
	}

	// Saisie "Heure de depart"
	cout	<< "- Heure de depart [" << HEURES_MIN << " - " << HEURES_MAX << "] :";
	cin >> heure_de_depart;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Si la valeur est invalide
	if(cin.fail() || heure_de_depart < HEURES_MIN || heure_de_depart > HEURES_MAX)
	{
		cout << "Erreur ! La valeur saisie n'est pas valide" << endl;
		return 1;
	}

	cout << endl;

	// Calculs pour le ticket
	supplement_bagage = nombre_de_bagages * SURTAXE_BAGAGE;

	// Durée de la course en heures
	duree_course = distance_a_parcourir / vitesse_moyenne;

	tarif = heure_de_depart >= DEBUT_TARIF_JOUR && heure_de_depart < FIN_TARIF_JOUR ? TARIF_MINUTE_JOUR : TARIF_MINUTE_NUIT ;

	// Calcul prix de la course
	//prix_course = duree_course * MIN_DANS_HEURE * tarif : duree_course * MIN_DANS_HEURE * tarif; // TODO

	prix_total = PRISE_EN_CHARGE + supplement_bagage + prix_course; // TODO : calcul prix total

	cout	<< "Votre ticket" << endl
			<< "=======================================" << endl;

	if (nombre_de_bagages > 0)
		cout << "- Supplement bagages : " << supplement_bagage << endl;

	cout << "- Prix de la course : " << prix_course << endl;
	cout << "TOTAL : " << prix_total << endl;

	cout << "presser ENTER pour quitter" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return 0;
}
