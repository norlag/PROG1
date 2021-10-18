#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int nb_1, nb_2, nb_3;
	int minimum;

	cout << "Veuillez saisir 3 entiers : " << endl;
	cin >> nb_1;
	cin >> nb_2;
	cin >> nb_3;

	minimum = nb_1;

	if (minimum > nb_2)
		minimum = nb_2;

	if (minimum > nb_3)
		minimum = nb_3;

	cout << "minimum : " << minimum << endl;
	return 0;
}
