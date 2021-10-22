#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int n = 20;
	while(n > 0)
	{
		cout << setw(2) << n << " ";
		if(n-- % 3 == 0) cout << endl;
	}

	cout << endl << "FOR LOOP : " << endl;

	for (int i = 20; i > 0 ; i--) {
		cout << setw(2) << i << " ";
		if(i % 3 == 0)
			cout << endl;
	}

	return 0;
}