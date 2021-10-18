#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
	double note1, note2, note3, note4;
	double moyenne;
	string appreciation;

	cout << "Entrez 4 notes : ";
	cin >> note1;
	cin >> note2;
	cin >> note3;
	cin >> note4;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << fixed << setprecision(1);	// Un chiffre après la virgule

	moyenne = (note1 + note2 + note3 + note4) / 4;

	if (moyenne < 4)
		appreciation = "Insuffisant";
	else if (moyenne <= 4.5)
		appreciation = "Moyen";
	else if (moyenne <= 5.0)
		appreciation = "Bien";
	else if (moyenne <= 5.5)
		appreciation = "Très bien";
	else
		appreciation = "Excellent";

	cout << "Moyenne des notes : " << moyenne << " - " << appreciation << endl;

	return 0;
}
