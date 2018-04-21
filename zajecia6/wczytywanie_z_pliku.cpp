#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream plik;
	int liczba;
  int suma = 0;
	plik.open("numerki.txt");
	while(plik >> liczba)
	{
    suma += liczba; // x += y to to samo co x = x + y
		cout << liczba << endl;
	}
	plik.close();

  cout << suma << endl;

	return 0;
}
