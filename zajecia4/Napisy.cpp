#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

	char znak;
	char napis[50]; // zamiast tablicy znakow mozemy uzywac typu string
/*
	znak = 'k';
	cout << znak << endl;
	znak = '8';
	cout << znak << endl;
	cin >> znak;
	cout << znak << endl;
*/

	string s = "Hello, World!!!";
	cout << s << endl;
	cout << s[5] << endl; // wypisz znak nna 6-tym miejscu ciagu s
	s[5] = '!'; // zmien ten znak na wykrzynik
	cout << s << endl;

	cout << s.length() << endl;  // length() zwraca dlugosc ciagu znakow

	int ASCII = (int)s[1]; // przypisz do zmiennej ASCII kod znaku o indeksie 1
	cout << endl << ASCII << endl;
	ASCII += 3; // dodaj trzy do kodu ASCII
	cout << (char)ASCII << endl; // rzutuj kod na znak (czyli zamien cyfre na symbol)
	cout << " \nwpisz napis: ";
	getline(cin, s);  	// getline(co_wczytac, gdzie_wpisac) pozwala na wczytanie
						// calego ciagu znakow, nie tylko do pierwszej spacji
	cout << s << endl;	// wypisz s

	string ZnakiMale = "abcdefghijklmnopqrstuwxyz";
	string ZnakiDuze = "ABCDEFGHIJKLMNOPQRSTUWXYZ";
	string ZnakiInne = "!?.,;() ";
	cout << "## TABELA KODOW ASCII ZNAKOW MALYCH:" << endl;
	for (int i = 0; i < ZnakiMale.length(); i++){
		// od indeksu 0 az do ostatniego (czyli az do dlugosc_stringa)
		// wypisz po kolei symbole i ich kody ASCII

		cout << ZnakiMale[i] << " : " << (int)ZnakiMale[i] << endl;
	}
	// to samo dla znakow duzych i innych:
	cout << "## TABELA KODOW ASCII ZNAKOW WIELKICH:" << endl;
	for (int i = 0; i < ZnakiDuze.length(); i++){
		cout << ZnakiDuze[i] << " : " << (int)ZnakiDuze[i] << endl;
	}
	cout << "## TABELA KODOW ASCII ZNAKOW INNYCH:" << endl;

	for (int i = 0; i < ZnakiInne.length(); i++){
		cout << ZnakiInne[i] << " : " << (int)ZnakiInne[i] << endl;
	}	
	return 0;
}


	// Wskazowka: Mozecie wypisac sobie w petli wszystkie kody ASCII
	// dla liter małych i wielkich, oraz znakow takich jak spacja, przecinek
	// kropka, wykrzynik itp. itd....




	//getline(cin, s);

	//cout << s.length();
	//s[i];
	//(int)s[i];
	// s.find(cos);


	//if (s.find("cześć") != string::npos){
	//
	//	cout << "\npowitanie";
	//}
