#include <iostream>

using namespace std;

bool estBissextile(const unsigned int& annee);

int main() {
	cout << boolalpha;
	cout << "1900 est bissextile : " << estBissextile(1900) << endl;
	cout << "2000 est bissextile : " << estBissextile(2000) << endl;
	cout << "2010 est bissextile : " << estBissextile(2010) << endl;
	cout << "2020 est bissextile : " << estBissextile(2020) << endl;
	return 0;
}

bool estBissextile(const unsigned int& annee)
{
	return ((annee % 400) == 0 || ((annee % 4) == 0 && (annee % 100) != 0));
}
