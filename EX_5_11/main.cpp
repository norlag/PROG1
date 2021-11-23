#include <iostream>
#include <cstdlib>

using namespace std;

int somme_alternee(const int tab[], size_t tab_size)
{
    int resultat = 0;

    if(!tab_size)
        return 0;

    for(int i = 0; i < tab_size; ++i)
        resultat += (i % 2 ? -tab[i] : tab[i]);

    return resultat;
}

int main()
{
    const size_t TAB_SIZE = 4;
    int tab[4] = {1, 2, 3, 4};

    cout << "Somme alternee : " << somme_alternee(tab, TAB_SIZE) << endl;

    return EXIT_SUCCESS;
}
