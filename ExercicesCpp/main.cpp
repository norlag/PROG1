#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>

using namespace std;

int main() {
   std::random_device rd;
   std::mt19937 generator(rd());
   std::uniform_int_distribution<unsigned int> distribution(0,1);

   typedef vector<int> colonne;
   typedef vector<colonne> ligne;

   const int HAUTEUR = 10;
   ligne lignes (HAUTEUR, colonne ());

   for (size_t i = 0; i < HAUTEUR; i++)
      lignes.at(i).resize(i+1, 0);

   const int BILLES = 500;
   size_t j;

   for (size_t run = 0; run < BILLES; run++)
   {
      ++lignes.at(0).at(0);

      j = 0;

      for (size_t i = 1; i < 10; i++)
      {
         j += distribution(generator);
         ++lignes.at(i).at(j);
      }
   }

   /*
   for (int i = 0; i < SIZE; i++)
    {
    for (int j = 0; j <= i; j++)
       {
         cout << setw(4) << counts[i][j];
       }
    cout << endl;
    }
   */

   for (size_t j = 0; j < HAUTEUR; j++)
   {
      cout << setw(4) << lignes[HAUTEUR - 1][j];
   }
   cout << endl;

   return 0;
}