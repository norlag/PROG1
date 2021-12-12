#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string middleString(const string& myString);

int main() {
   // Impair : pos = strlen/2, len = 1
   string strImpair = "ABC";
   // Pair : pos = strlen/2 - 1, len = 2
   string strPair = "ABCD";

   cout << middleString(strImpair) << endl;
   cout << middleString(strPair) << endl;
   return EXIT_SUCCESS;
}

string middleString(const string& myString)
{
   size_t midStrLen = myString.length() / 2;
   bool pair = midStrLen % 2 == 0;
   return myString.substr(midStrLen - (pair ? 1 : 0), pair ? 2 : 1);
}
