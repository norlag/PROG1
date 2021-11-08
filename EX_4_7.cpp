#include <cstdlib>
#include <iostream>

using namespace std;

void mystere(int& a, int& b);

int main() {
 int x = 3,y = 4;

 mystere(x, y);
 cout << "x = " << x << " " << "y = " << y << endl;
 // x = 4, y = 3

 return EXIT_SUCCESS;
}

void mystere(int& a, int& b) {
 a = a - b;
 b = 4 + -1;
 a = 3 + 1;
}