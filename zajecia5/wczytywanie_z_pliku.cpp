#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream plik;
	string linia;
	plik.open("wiersz.txt");
	while(!plik.eof())
	{
		getline(plik, linia);
		cout << linia << endl;
	}
	plik.close();
	
	return 0;
}