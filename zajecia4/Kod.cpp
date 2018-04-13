
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1) uzytkownik wprowadza jakis napis

	string napis;

	cout << "Podaj wiadomosc : ";
	getline(cin, napis);
	cout << endl;

	// 2) szyfrujemy napis
	int dlugosc = napis.length(); 	// zapisujemy dlugosc
									// ciagu znakow
	// tworzymy zakodowana wiadomosc
	// nie musi byc to tablica charow - moze byc to string
	// to przyklad jak na rozne sposoby mozna wczytywac
	// napisy

	char* zakodowana = new char[ dlugosc ];

	// dynamicznie tworzymy tablice charow (czyli znakow)
	// o rozmiarze takim, jaka jest dlugosc napisow.
	// char* zakodowana to wskaznik na poczatek tej tablicy

	int KodAscii;
	for (int i = 0; i < dlugosc; i++)
	{
		// iterujemy po wszystkich elementach (znakach)
		// napisu i pobieramy ich kod ASCII
		KodAscii = (int)napis[i];

		// Dodajemy 3 do kodu
		if (KodAscii != 32 && KodAscii != 33)
		{
			if (KodAscii == 120) { KodAscii = 97; } // x -> a
			else if (KodAscii == 121) { KodAscii = 98; } //y -> b
			else if (KodAscii == 122) { KodAscii = 99; }

			else if (KodAscii == 88) { KodAscii = 65; } //X->A
			else if (KodAscii == 89) { KodAscii = 66; } // Y -> B
			else if (KodAscii == 90) { KodAscii = 67; }

			else { KodAscii += 3; }
		}
		// zapisujemy znak w tablicy charow:
		zakodowana[i] = (char)KodAscii;
	}

	cout << "wiadomosc zakodowana: " << endl;
	for (int i =0; i < dlugosc; i++)
	{
		cout << zakodowana[i];
	}
	cout << endl;
	// 3) wypisujemy zaszyfrowana wiadomosc
	// 4) odwracamy proces i wypisujemy odkodowany napis
	// pobawic sie w rozpoznawanie wyrazow:
	//if (s.find("cześć") != string::npos){
	//
	//	cout << "\npowitanie";
	//}
return 0;
}
