#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
		{
			cout << "Liczba parzysta: " << i << endl;
		}
		else 
		{
			cout << "Liczba nieparzysta: " << i << endl;
		}
	}
	return 0;
}