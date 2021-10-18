#include <iostream>
#include <limits>

using namespace std;

int main() {
	int number;
	cout << "Merci de saisir une valeur n plus grande ou égale à 0 : ";
	cin >> number;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (number % 3 == 0 && number % 5 == 0)
		cout << number << " est un multiple de 3 et de 5" << endl;
	else if (number % 3 == 0)
		cout << number << " est un multiple de 3" << endl;
	else if (number % 5 == 0)
		cout << number << " est un multiple de 5" << endl;
	else
		cout << number << " n'est ni un multiple de 3 ni un multiple de 5" << endl;

	return 0;
}
