#include <cstdlib>
#include <iostream>

void supprime_entree(int tab[], size_t taille_tab, const int valeur_cible)
{
   int i = 0;
   while(i < taille_tab)
   {
      if(tab[i] == valeur_cible)
      {
         if(i + 1 == taille_tab)
         {
             tab[i] = 0;
         }
         else
         {
             for(int j = i + 1; j < taille_tab; ++j)
             {
                 tab[j - 1] = tab[j];
             }
             tab[taille_tab - 1] = 0;
         }
      }
      else
      {
        ++i;
      }
   }
}

int main()
{
    constexpr size_t TAILLE_TAB = 4;
    constexpr int VAL_CIBLE = 1;
    //int mon_tableau[TAILLE_TAB] = {1, 1, 2, 5, 5, 6, 7, 1, 2};
    int mon_tableau[TAILLE_TAB] = {1, 1, 1, 1};

    for(int val : mon_tableau)
        std::cout << val << " ";
    std::cout << std::endl;

    supprime_entree(mon_tableau, TAILLE_TAB, VAL_CIBLE);

    for(int val : mon_tableau)
        std::cout << val << " ";
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
