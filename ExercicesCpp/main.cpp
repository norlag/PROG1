/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 28.09.21
  But         : Installer et configurer l’environnement de développement
  Remarque(s) : Aucune
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void afficher(const vector<int>& v) {
   cout << "[ ";
   for (auto i = v.begin(); i != v.end(); ++i) {
      if (i != v.begin()) cout << ", ";
      cout << *i;
   }
   cout << " ]";
}

void comparer(const vector<int>& v1, const vector<int>& v2) {
   afficher(v1);
   cout << (v1 == v2 ? " = " : v1 < v2 ? " < " : " > ");
   afficher(v2);
   cout << endl;
}

int main() {
   comparer({1, 2, 3}, {1, 2, 3});
   comparer({1, 1, 3}, {1, 2, 3});
   comparer({1, 3, 1}, {1, 2, 3});
   comparer({1, 2, 3, 4}, {1, 2, 3});
   comparer({1, 2, 2, 4}, {1, 2, 3});
   comparer({1, 2, 4, 4}, {1, 2, 3});
}
