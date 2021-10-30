#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
 const int N = 5;
 int compteur = 0;

 for (int i = 0; i < N; ++i) {
    for (int j = i; j < N; ++j) {
        compteur++;
    }
 }
 
 cout << "compteur = " << compteur << endl;

 return EXIT_SUCCESS;
}

i=0
    j=0
    ++
    j=1
    ++
    j=2
    ++
    j=3
    ++
    j=4
    ++
i=1
    j=1
    ++
    j=2
    ++
    j=3
    ++
    j=4
    ++
i=2
    j=2
    ++
    j=3
    ++
    j=4
    ++
i=3
    j=3
    ++
    j=4
    ++
i=4
    j=4
    ++

affiche 15 !

compteur = 3*N plus simple ? pas clair