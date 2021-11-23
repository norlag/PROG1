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

using namespace std;

int main() {
   int t[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
   //for (int i = 1; i < 10; ++i) { t[i] = t[i - 1]; } // 1 1 1 1 1 1 1 1 1 1

   //for (int i = 9; i > 0; --i) { t[i] = t[i - 1]; } // 1 1 2 3 4 5 4 3 2 1

   //for (int i = 0; i < 9; ++i) { t[i] = t[i + 1]; } // 2 3 4 5 4 3 2 1 0 0

   //for (int i = 8; i >= 0; --i) { t[i] = t[i + 1]; } // 0 0 0 0 0 0 0 0 0 0

   //for (int i = 1; i < 10; ++i) { t[i] = t[i] + t[i - 1]; } // 1 3 6 10 15 19 22 24 25 25

   //for (int i = 1; i < 10; i = i + 2) { t[i] = 0; } // 1 0 3 0 5 0 3 0 1 0

   //for (int i = 0; i < 5; ++i) { t[i + 5] = t[i]; } // 1 2 3 4 5 1 2 3 4 5

   for (int i = 1; i < 5; ++i) { t[i] = t[9 - i]; } // 1 1 2 3 4 4 3 2 1 0

   for (int i = 0; i < 10; ++i) {
      cout << t[i] << " ";
   }
   cout << endl;

	return EXIT_SUCCESS;
}

