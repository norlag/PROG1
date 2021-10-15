#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int nb_1, nb_2, nb_3;
	int tempo;

	cout << "Veuillez saisir 3 entiers : " << endl;
	cin >> nb_1;
	cin >> nb_2;
	cin >> nb_3;

	if (nb_2 < nb_3)
	{
		nb_2 ^= nb_3;
		nb_3 ^= nb_2;
		nb_2 ^= nb_3;
	}

	if (nb_1 < nb_2)
	{
		nb_1 ^= nb_2;
		nb_2 ^= nb_1;
		nb_1 ^= nb_2;
	}

	cout << nb_1 << " " << nb_2 << " " << nb_3 << endl;
	return 0;
}
