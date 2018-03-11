#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	cout << "WIELKIE ODLICZANIE" << endl;
	while(n >= 0)
	{
		if (n != 0)
		{
			cout << n;
		}
		else
		{
			cout << "BOOM";
		}
		
		if (n < 4)
		{
			cout << " !!!";
		}
		cout << endl;
		n = n - 1;
	}
	return 0;
}