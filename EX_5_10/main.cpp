#include <cstdlib>
#include <iostream>

using namespace std;

bool estCroissant(int tab[], size_t tab_size)
{
    if(tab_size <= 1)
        return true;

    for(int i = 1; i < tab_size; ++i)
    {
        if(tab[i] <= tab[i - 1])
            return false;
    }

    return true;
}

int main()
{
    int tab[] = {1, 2, 3, 4, 3};

    cout << "tab est croissant ? : " << (estCroissant(tab, 5) ? "oui" : "non") << endl;

    return EXIT_SUCCESS;
}
