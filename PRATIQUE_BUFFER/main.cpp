#include <iostream>
#include <cstdlib> // required for EXIT_SUCCESS
#include <limits> // required for numeric_limits<...>
#include <string>

using namespace std;

int main() {
	double input = 0.0; // set to 0.0 to in case of input error
	string rest; // chars left in the input buffer

	// user input
	cout << "your input : ";
	cin >> input;
	cout << "input : " << input << endl;
	cout << "error : " << boolalpha << cin.fail() << endl;

	// get what's left in the input buffer
	getline(cin, rest);
	cout << "rest : " << rest << endl;

	// end of the program
	cout << "press ENTER to quit" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return EXIT_SUCCESS;
}