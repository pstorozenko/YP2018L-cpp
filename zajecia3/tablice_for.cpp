#include <iostream>
using namespace std;
int main()
{
	int tab[10];
	for(int i = 0; i < 10 ; i++)
	{
		tab[i] = i;
	}
	for(int i = 0; i < 10 ; i++)
	{
		cout << i << "-a liczba z tab:" << tab[i] << endl; 
	}
	cout << endl;
	for(int i = 0; i < 10 ; i++)
	{
		tab[i] = tab[i] * tab[i];
	}
	for(int i = 0; i < 10 ; i++)
	{
		cout << i << "-a liczba z tab:" << tab[i] << endl; 
	}
	return 0;
}