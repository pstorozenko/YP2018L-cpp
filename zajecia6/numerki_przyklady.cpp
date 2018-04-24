#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	fstream plik;
	int liczba;
	vector<int> v;
	plik.open("numerki.txt");
	while(plik >> liczba)
	{
    v.push_back(liczba);
	}
	plik.close();

	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	sort(v.begin(), v.end());

	for (int i = 0 ; i < v.size() ; i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	// warto zauważyć, że można też sortować wektory napisów!
	return 0;
}
