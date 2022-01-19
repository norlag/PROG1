#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T, size_t n>
class Array {
    public:
        Array(const T& valeur);
        void afficher() const;
    private:
        T tab[n];
};

template<typename T, size_t n>
void Array<T, n>::afficher() const {
    for (const T &el : tab) {
        cout << el << " ";
    }
    cout << endl;
}

template<typename T, size_t n>
Array<T, n>::Array(const T &valeur) {
    for (T &el : tab) {
        el = valeur;
    }
}

int main() {
    Array<int, 3> a1(1);
    a1.afficher();
    cout << endl;

    Array<double, 4> a2(1.5);
    a2.afficher();
    cout << endl;

    return EXIT_SUCCESS;
}