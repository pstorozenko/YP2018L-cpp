#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	fstream plik;
	string linia;
	vector <string> v;
	plik.open("wiersz.txt");
	while(!plik.eof())
	{
		getline(plik, linia);
		v.push_back(linia);
	}
	plik.close();
	for (int i = 0 ; i < v.size() ; i++)
  {
    cout << "Linijka " << i << ": " << v[i] << " " << endl;
  }
	// Tutaj ma się pojawić pętla, która wykona się 3 razy
	// Za każdym razem program zapyta się użytkownika o linijkę do powtórzenia
	// i wypisze ją ponownie na ekran
	return 0;
}
//https://github.com/pitrosk/YP_cpp_wiosna_2018
