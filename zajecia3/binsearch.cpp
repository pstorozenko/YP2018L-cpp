#include<iostream>

using namespace std;

int main()
{
	int tab[10];
	int szukana;
	for(int i = 0; i < 10; i++)
	{
		cin >> tab[i];
	}
	cin >> szukana;

	int znaleziona = 0;
	int l = 0;
	int p = 10; // indeks o 1 za tablice!

	while(l < p)
	{
		int sr = (l + p) / 2;
		if (tab[sr] == szukana)
		{
			znaleziona = 1;
			break;
		}

		if (tab[sr] < szukana)
		{
			l = sr + 1;
		}
		else
		{
			p = sr;	
		}
	}
	if (znaleziona == 1)
	{
		cout << "JEST" << endl;
	}
	else
	{
		cout << "NIE MA" << endl;
	}
	return 0;
}
