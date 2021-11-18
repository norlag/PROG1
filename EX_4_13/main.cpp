#include <iostream>

void afficher();

int main() {
	for (int i = 0; i < 3; ++i) {
		afficher();
	}
	return EXIT_SUCCESS;
}

void afficher()
{
	static unsigned int compteurAppels = 0;
	std::cout << "Appel numéro " << ++compteurAppels << std::endl;
}