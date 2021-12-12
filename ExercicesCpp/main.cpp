#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;
void afficherTableau(vector<int> v);

int main() {
  
  srand(unsigned(time(nullptr)));
  vector<int> v;
  v.resize(100);
  generate(v.begin(), v.end(), rand);
  afficherTableau(v);
  
  bool sorted = false;
  auto rng = default_random_engine {};
  size_t essais = 0;
  
  
  while(not(sorted)) {
    //cout << "Essai " << ++essais << endl;
    shuffle(v.begin(), v.end(), rng);
    for(size_t i = 0 ; i < v.size() - 1 ; ++i) {
      if (v[i] < v[i+1]) {
        sorted = true;
      } else {
        sorted = false;
        break;
      }
    }
  }
  
  cout << "Reussi !" << endl;
  afficherTableau(v);
  
  return EXIT_SUCCESS;
}

void afficherTableau(vector<int> v) {
  cout << "[";
  for(size_t i = 0; i < v.size() ; i++){
    if(i != 0) {
     cout << ", ";
    }
    cout << v[i];
  }
  cout << "]";
}
