#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

int findOccurrence(const string& text, const char character);
int findOccurrenceAlgo(const string& text, const char character);

int main() {
   string text = "Ecrire une fonction qui renvoie combien de fois un caractere donne se trouve dans une chaine\n"
                 "de caracteres (de type string) donnee.";

   cout << findOccurrenceAlgo(text, 'e') << endl;

   return EXIT_SUCCESS;
}

int findOccurrence(const string& text, const char character)
{
   return 0;
}

int findOccurrenceAlgo(const string& text, const char character)
{
   return count_if(text.cbegin(), text.cend(), [&character](const char& current_char) {
      return character == current_char;
   });
}
