 
#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
int n = 0;

 do {
    if (n % 2 == 0) {
        cout << n << " est pair\n";
        n += 3;
        continue;
    }

    if (n % 3 == 0) {
        cout << n << " est multiple de 3\n";
        n += 5;
    }

    if (n % 5 == 0) {
        cout << n << " est multiple de 5\n";
        break;
    }

    n++;
 } while (true);

 return EXIT_SUCCESS;
}

2 est pair
5 est multiple de 5
fin