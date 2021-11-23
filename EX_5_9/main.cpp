#include <cstdlib>
#include <iostream>

using namespace std;

void supprime_median(int tab[], size_t tab_size)
{
    int middle_index;

    // Impaire
    if(tab_size % 2)
    {
        middle_index = (tab_size + 1) / 2;

        for(int i = middle_index; i < tab_size; ++i)
        {
            tab[i - 1] = tab[i];
            tab[i] = 0;
        }
    }
    else // paire
    {
        middle_index = (tab_size / 2) + 1;

        for(int i = middle_index; i < tab_size; ++i)
        {
            tab[i - 2] = tab[i];
            tab[i] = 0;
        }
    }
}

int main()
{
    const size_t TAILLE_IMPAIRE = 5;
    const size_t TAILLE_PAIRE = 8;
    int tab_impaire[TAILLE_IMPAIRE] = {1, 2, 3, 4, 5};
    int tab_paire[TAILLE_PAIRE] = {1, 2, 3, 4, 5, 6, 7, 8};

    for(int i = 0; i < TAILLE_IMPAIRE; ++i)
    {
        cout << tab_impaire[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < TAILLE_PAIRE; ++i)
    {
        cout << tab_paire[i] << " ";
    }
    cout << endl;

    supprime_median(tab_impaire, TAILLE_IMPAIRE);
    supprime_median(tab_paire, TAILLE_PAIRE);

    for(int i = 0; i < TAILLE_IMPAIRE; ++i)
    {
        cout << tab_impaire[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < TAILLE_PAIRE; ++i)
    {
        cout << tab_paire[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
