#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

int main()
{
	char saisie;
	std::cout << "Merci de saisir un charactere : ";
	std::cin >> saisie;

	std::cout << "Code ASCII de '" << saisie << "'" << ": " << (int)saisie << std::endl; 

	std::cout << "'" << saisie << "' est une lettre de l'alphabet : " << std::boolalpha  << (std::isalpha(saisie) != 0) << std::endl;
	std::cout << "'" << saisie << "' est une lettre minuscule : " << (std::islower(saisie) != 0) << std::endl;
	std::cout << "'" << saisie << "' est un chiffre : " << (std::isdigit(saisie) != 0) << std::endl;
	std::cout << "'" << saisie << "' est un charactere de ponctuation : " << (std::ispunct(saisie) != 0) << std::endl;

	return EXIT_SUCCESS;
}
