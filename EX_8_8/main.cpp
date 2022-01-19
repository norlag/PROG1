#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T, size_t n> class Array {
   friend ostream& operator << (std::ostream& os, Array<T, n> &a);
public:
   Array(const T& valeur);
private:
   T tab[n];
};

template<typename T, size_t n>
Array<T, n>::Array(const T &valeur) {
   for (T &el : tab) {
      el = valeur;
   }
}

template<typename T, size_t n>
ostream &operator<<(ostream &os, Array<T, n> &a) {
   for (T el : a) {
      os << a << " ";
   }
   os << endl;

   return os;
}

int main() {
   Array<int, 3> a1(1);
   cout << a1 << endl; // [1, 1, 1]

   Array<double, 4> a2(1.5);
   cout << a2 << endl; // [1.5, 1.5, 1.5, 1.5]

   Array<bool, 5> a3(true);
   cout << a3 << endl; // [vrai, vrai, vrai, vrai, vrai]

   return EXIT_SUCCESS;
}