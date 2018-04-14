#include <iostream>
using namespace std;

int kwadrat(int x)
{
	int a;
	a = x*x;
	return a;
}

int main()
{
	cout << kwadrat(10) << endl;
	cout << kwadrat(42) << endl;
	cout << kwadrat(12) << endl;

	for(int i = 0 ; i < 5 ; i++)
	{
		cout << kwadrat(i) << endl;
	}
	return 0;
}
