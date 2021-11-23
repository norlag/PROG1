#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

double somme_tab(const double tab[], const unsigned int& taille_tab);
double moyenne_tab(const double tab[], const unsigned int& taille_tab);
unsigned int saisie_notes(double notes[], const unsigned int& taille_tab);

int main() {
	constexpr unsigned int NBR_NOTES_MAX = 10;
	double notes[NBR_NOTES_MAX];
	unsigned int notes_saisies;

	cout << "Entrez la liste de vos notes (" << NBR_NOTES_MAX << " notes max), 0 pour quitter : " << endl;

	notes_saisies = saisie_notes(notes, NBR_NOTES_MAX);

	cout << "La moyenne des notes saisies : " << setprecision(2) << moyenne_tab(notes, notes_saisies) << endl;

	return EXIT_SUCCESS;
}

unsigned int saisie_notes(double notes[], const unsigned int& taille_tab)
{
	constexpr char EXIT_CHAR = 0;
	unsigned int notes_saisies = 0;

	for (unsigned int i = 0; i < taille_tab; ++i) {
		cin >> notes[i];
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		if (notes[i] == EXIT_CHAR)
			break;

		++notes_saisies;
	}

	return notes_saisies;
}

double somme_tab(const double tab[], const unsigned int& taille_tab)
{
	double valeur_somme = 0;

	for (int i = 0; i < taille_tab; ++i) {
		valeur_somme += tab[i];
	}

	return valeur_somme;
}

double moyenne_tab(const double tab[], const unsigned int& taille_tab)
{
	return (somme_tab(tab, taille_tab) / taille_tab);
}