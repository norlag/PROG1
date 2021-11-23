#include <iostream>

/*
	Ecrire un programme C++ mettant à disposition une fonction permettant d'afficher n'importe
	quel tableau classique unidimensionnel d'entiers (type int) sous la forme :
	[valeur_1, valeur_2, ..., valeur_n].
	NB  L'affichage d'un tableau vide doit donner : []
	Tester votre fonction avec les tableaux suivants :
	1) t0 = tableau vide
	2) t1 = [1]
	3) t2 = [1, 2]
 */

using namespace std;

void affiche_tableau(const int tab[], const unsigned int& taille_tab);

int main() {
	const unsigned int TAILLE_T0 = 0, TAILLE_T1 = 1, TAILLE_T2 = 2;

	const int t0[TAILLE_T0] = {};
	const int t1[TAILLE_T1] = {1};
	const int t2[TAILLE_T2] = {1, 2};

	affiche_tableau(t0, TAILLE_T0);
	affiche_tableau(t1, TAILLE_T1);
	affiche_tableau(t2, TAILLE_T2);

	return EXIT_SUCCESS;
}

void affiche_tableau(const int tab[], const unsigned int& taille_tab)
{
	cout << "[";
	for (int i = 0; i < taille_tab; ++i) {
		cout << tab[i];

		if ((i + 1) < taille_tab)
			cout << ", ";
	}
	cout << "]" << endl;
}