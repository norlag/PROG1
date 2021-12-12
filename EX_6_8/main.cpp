#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

enum class CHIFFRES_ROMAINS { I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000 };

int romanToValue(char numeral);
int numeralToValue(const string& romanNumeral);

int main() {
   cout << numeralToValue("XIV") << endl;
   cout << numeralToValue("CCLIII") << endl;
   cout << numeralToValue("MMDLVIII") << endl;
   cout << numeralToValue("MMCMXXXVI") << endl;
   return EXIT_SUCCESS;
}

int numeralToValue(const string& romanNumeral)
{
   int result = 0;
   int lastVal, currentVal;
   for (string::const_reverse_iterator i = romanNumeral.crbegin(); i != romanNumeral.crend(); ++i) {
      currentVal = romanToValue(*i);

      if(i == romanNumeral.crbegin() || lastVal <= currentVal)
         result += currentVal;
      else
         result -= currentVal;

      lastVal = currentVal;
   }
   return result;
}

int romanToValue(const char numeral)
{
   switch(numeral)
   {
      case 'I': return (int)CHIFFRES_ROMAINS::I;
      case 'V': return (int)CHIFFRES_ROMAINS::V;
      case 'X': return (int)CHIFFRES_ROMAINS::X;
      case 'L': return (int)CHIFFRES_ROMAINS::L;
      case 'C': return (int)CHIFFRES_ROMAINS::C;
      case 'D': return (int)CHIFFRES_ROMAINS::D;
      case 'M': return (int)CHIFFRES_ROMAINS::M;
      default: return 0;
   }
}
