#include <iostream>
#include <limits>

using namespace std;

bool calcule(const double& valeur1, const double& valeur2, double& valSortie, char operation);

int main() {
	double val_calcule, input_1, input_2;

	cout << "Merci d'entrer deux valeurs : ";
	cin >> input_1 >> input_2;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	calcule(input_1, input_2, val_calcule, '+');
	cout << input_1 << " + " << input_2 << " = " << val_calcule << endl;

	calcule(input_1, input_2, val_calcule, '-');
	cout << input_1 << " - " << input_2 << " = " << val_calcule << endl;

	calcule(input_1, input_2, val_calcule, '*');
	cout << input_1 << " * " << input_2 << " = " << val_calcule << endl;

	calcule(input_1, input_2, val_calcule, '/');
	cout << input_1 << " / " << input_2 << " = " << val_calcule << endl;

	return 0;
}

bool calcule(const double& valeur1, const double& valeur2, double& valSortie, char operation)
{
	switch(operation)
	{
		case '+':
			valSortie = valeur1 + valeur2;
			break;
		case '-':
			valSortie = valeur1 - valeur2;
			break;
		case '*':
			valSortie = valeur1 * valeur2;
			break;
		case '/':
			valSortie = valeur1 / valeur2;
			break;
		default:
			return false;
	}

	return true;
}