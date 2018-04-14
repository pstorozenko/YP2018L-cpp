#include <iostream>
#include <cmath>
using namespace std;

double srednia_geo(double a, double b)
{
	return sqrt(a * b);
}

int main()
{
	cout << srednia_geo(1, 2) << endl;
	cout << srednia_geo(10, 10) << endl;

	cout << srednia_geo(4, 2) << endl;
	return 0;
}
