#include <iostream>
using namespace std;

double polowa(double x) 
{
	double a;
	a = x / 2;
	return a;
}

int main()
{
	int n;
	double x;
	cin >> n;
	for(int i=0; i<n; i++) 
	{
		cin >> x;
		cout << polowa(x) << endl;
	}
	return 0;
}