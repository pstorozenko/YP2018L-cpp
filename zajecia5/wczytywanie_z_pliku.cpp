#include <iostream>
#include <fstream>
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
    cout << v[i] << " ";
  }
	return 0;
}
//https://github.com/pitrosk/YP_cpp_wiosna_2018
