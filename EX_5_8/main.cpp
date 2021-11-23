#include <cstdlib>
#include <iostream>

using namespace std;

void decalage(int tableau[], size_t taille_tableau)
{
    int temp = tableau[taille_tableau - 1];

    for(int i = 0; i < taille_tableau; ++i)
    {
        tableau[taille_tableau - i] = tableau[(taille_tableau - 1) - i];
    }

    tableau[0] = temp;
}

int main()
{
    const size_t TAILLE_TAB = 5;
    int mon_tab[TAILLE_TAB] = {1, 2, 3, 4, 5};

    for(int i = 0; i < TAILLE_TAB; ++i)
    {
        cout << mon_tab[i] << " ";
    }
    cout << endl;

    decalage(mon_tab, TAILLE_TAB);

    for(int i = 0; i < TAILLE_TAB; ++i)
    {
        cout << mon_tab[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
