#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
   string user_input;
   cout << "Entrez votre prenom et votre nom :";
   getline(cin, user_input);
   string prenom = user_input.substr(0, user_input.find(' '));
   string nom = user_input.substr(user_input.find(' ')+1);
   string acro = string(1, toupper(prenom.front())) + string(1, toupper(nom.front())) + string(1, toupper(nom.back()));

   cout << "Votre prenom est : " << prenom << endl;
   cout << "Votre nom est : " << nom << endl;
   cout << "Votre acronyme est : " <<  acro << endl;

   return EXIT_SUCCESS;
}
