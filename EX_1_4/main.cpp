/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 30.09.21
  But         : Faire l'exercice 1.4 du recueil d'exercices
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
   unsigned const int annee_actuelle = 2021U;
   unsigned int age;
   unsigned int annee_naissance;
   string prenom;

   cout << "Bonjour, comment vous appelez-vous ? : " << endl;
   getline(cin, prenom);                                            // Récupère le prénom de l'utilisateur

   cout << "Quel age avez-vous ? : " << endl;
   cin >> age;                                                    // Récupère l'âge de l'utilisateur

   annee_naissance = annee_actuelle - age;                        // Calcule l'année de naissance
   cout << "Bonjour " << prenom << ",\n" << "Vous avez " << age << " ans et vous etes ne(e) en " << annee_naissance << "." << endl;

   return 0;
}
