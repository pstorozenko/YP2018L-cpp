#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	cout << "Podaj swoją ulubioną liczbę: ";
	cin >> x;
	cout << "sin x: " << sin(x) << endl;
	cout << "cos x: " << cos(x) << endl;
	cout << "x^pi: " << pow(x, 3.1415) << endl;
	cout << "x^(1/3): " << pow(x, 0.3333) << endl;
	cout << "log(x): " << log(x) << endl;
	cout << "log10(x): " << log10(x) << endl;
	return 0;
}