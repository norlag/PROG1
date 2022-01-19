#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T, size_t n> class Array;

template <typename T, size_t n>
ostream& operator<< (ostream& os, const Array<T, n> &array);

template <typename T, size_t n>
class Array {
    public:
        Array(const T& valeur);
        friend ostream& operator<< <>(ostream& os, const Array<T, n> &array);
    private:
        T tab[n];
};

template <typename T, size_t n>
ostream &operator<< (ostream &os, const Array<T, n> &array) {
    for (int i = 0; i < n; ++i) {
        os << array.tab[i] << " ";
    }
    os << endl;

    return os;
}

template <typename T, size_t n>
Array<T, n>::Array(const T &valeur) {
    for (T &el : tab) {
        el = valeur;
    }
}

int main() {
    Array<int, 3> a1(1);
    cout << a1 << endl;

    Array<double, 4> a2(1.5);
    cout << a2 << endl;

    return EXIT_SUCCESS;
}