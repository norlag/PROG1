#include <iostream>

using namespace std;

void permute(double& val1, double& val2, double& val3);

int main() {
	double x = 1, y = 2, z = 3;
	cout << "x : " << x << " y : " << y << " z : " << z << endl;
	permute(x, y, z);
	cout << "x : " << x << " y : " << y << " z : " << z << endl;
	permute(x, y, z);
	cout << "x : " << x << " y : " << y << " z : " << z << endl;
	permute(x, y, z);
	cout << "x : " << x << " y : " << y << " z : " << z << endl;
	return 0;
}

void permute(double& val1, double& val2, double& val3)
{
	double valTemp = val3;
	val3 = val2;
	val2 = val1;
	val1 = valTemp;
}