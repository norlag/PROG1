#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
   string userInput;
   cout << "Entrez un nombre entier >= 0 : ";
   getline(cin, userInput);

   cout << "Nombre saisi : " << userInput << endl;
   cout << "Nombre de chiffres : " << userInput.length() << endl;
   cout << "Premier chiffre : " << userInput.front() << endl;
   cout << "Dernier chiffre : " << userInput.back() << endl;

   return EXIT_SUCCESS;
}
