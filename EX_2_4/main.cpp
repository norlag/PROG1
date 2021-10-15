/*
  ---------------------------------------------------------------------------
  Fichier     : main.cpp
  Nom du labo : PROG1
  Auteur(s)   : Sebastian Schneider
  Date        : 01.09.21
  But         : Ce programme a pour but d'afficher les tailles et limites min,max des différents types en c++
  Remarque(s) : Le signed char ne peut pas directement être affiché car il est considéré comme une charactère, il faut effectuer un cast pour l'afficher correctement
  Compilateur : MinGW-W64 8.1.0
  ---------------------------------------------------------------------------
*/

#include <limits>
#include <iostream>

using namespace std;

int main() {
	cout << "signed char (" 	<< sizeof(signed char) * 8 << " bits) : " 	<< static_cast<int>(numeric_limits<signed char>::min()) 	<<  " .. " << static_cast<int>(numeric_limits<signed char>::max()) 	<< endl;
	cout << "short (" 			<< sizeof(short) * 8 << " bits) : " 			<< numeric_limits<short>::min() 									<<  " .. " << numeric_limits<short>::max() 									<< endl;
	cout << "int (" 				<< sizeof(int) * 8 << " bits) : " 				<< numeric_limits<int>::min() 									<<  " .. " << numeric_limits<int>::max() 										<< endl;
	cout << "long (" 			<< sizeof(long) * 8 << " bits) : " 				<< numeric_limits<long>::min() 									<<  " .. " << numeric_limits<long>::max() 										<< endl;
	cout << "long long (" 		<< sizeof(long long) * 8 << " bits) : " 		<< numeric_limits<long long>::min() 							<<  " .. " << numeric_limits<long long>::max()								<< endl;

	return 0;
}
