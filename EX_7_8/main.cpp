#include <iostream>
#include <cstdlib>

using namespace std;

class Objet {
private:
   int no;
   static int prochainNo;
   static int compteur;
public:
   Objet();
   ~Objet();
   int getNo() const;
   static int getProchainNo();
   static int getCompteur();
};

int main()
{
   cout << Objet::getCompteur() << endl;
   cout << Objet::getProchainNo() << endl << endl;

   {
      Objet obj1;
      Objet obj2;

      for (int i = 0; i < 20; ++i) {
         cout << "Creation objet boucle no " << i << endl;
         Objet obj;
         cout << Objet::getCompteur() << endl;
         cout << Objet::getProchainNo() << endl << endl;
      }
   }

   cout << Objet::getCompteur() << endl;
   cout << Objet::getProchainNo() << endl << endl;

   return EXIT_SUCCESS;
}

Objet::Objet() {
   no = prochainNo;
   ++prochainNo;
   ++compteur;
}

Objet::~Objet() {
   --compteur;
}

int Objet::getNo() const {
   return no;
}

int Objet::getProchainNo() {
   return prochainNo;
}

int Objet::getCompteur() {
   return compteur;
}

int Objet::prochainNo = 1;
int Objet::compteur = 0;