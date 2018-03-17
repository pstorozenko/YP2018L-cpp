#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << "Wpisano liczbę rolowania: " << n << endl;
	int tab[10];
	for(int i = 0 ; i < 10 ; i++)
	{
		cin >> tab[i];
	}
	cout << "Wpisano następujące liczby: " << endl;
	for(int i = 0; i < n ; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl << "Zrolowano liczby: ";
	for(int i = n ; i < 10 ; i++)
	{
		cout << tab[i] << " ";
	}
	for(int i = 0 ; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
}
