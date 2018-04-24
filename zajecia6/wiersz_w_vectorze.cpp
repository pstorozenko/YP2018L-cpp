#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
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

	//////////////
	int n_linijki;
	for (int i = 0 ; i < 3 ; i++)
	{
		cout << "Którą linijkę chcesz żeby powtórzyć?" << endl;
		cin >> n_linijki;
		if (n_linijki >= 0 && n_linijki < v.size()) {
			cout << v[n_linijki] << endl << endl;
		}
		else {
			cout << "Nie ma takiej linijki" << endl << endl;
		}
	}
	/////////////////
	return 0;
}
//https://github.com/pitrosk/YP_cpp_wiosna_2018
