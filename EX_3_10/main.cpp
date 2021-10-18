#include <iostream>
#include <limits>

using namespace std;

int main() {
	int num1, num2, num3;
	int temp;

	cout << "Merci d'entrer 3 valeurs séparées par un espace : ";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	if (num1 < num3)
	{
		temp = num1;
		num1 = num3;
		num3 = temp;
	}

	if (num2 < num3)
	{
		temp = num2;
		num2 = num3;
		num3 = temp;
	}

	cout << "Valeurs dans l'ordre croissant : " << num3 << " " << num2 << " " << num1 << endl;

	return 0;
}
