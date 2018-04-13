#include <iostream>

using namespace std;

int main()
{
	int StoZl = 100;
	int & Stowa = StoZl; // Tworze referencje doo zmiennej StoZl

//	Stowa = StoZl;

	Stowa += 50;
	cout << endl << Stowa << " , " << StoZl << endl;
	int * Wskaznik = & StoZl;  // Tworzę wskaźnik do adresu zmiennej StoZl
	cout << endl << Wskaznik << endl; // Wypisuje adres
	cout << * Wskaznik << endl << endl;
	int RozmiarTablicy;

	cout << "Podaj rozmiar tablicy: ";
	cin >> RozmiarTablicy;

	int* Tablica = new int[RozmiarTablicy]; // operator new :
											// Tworzy zmienna pod adresem wskazywaynym przez wskaznik

	for (int i = 0; i < RozmiarTablicy; i++){
		Tablica[i] = i + 1;
		cout << Tablica[i] << endl;
	}

	// Wskazowka:
	//     - najpierw napisz program, ktory bedzie wykonwyal sie 1 raz
	//    - Gdy użytkownik poda ile liczb chce zsumowac, to
	//       możesz utworzyć tablicę do której wpiszesz te liczby
	//     - gdy masz juz tablice wypelniona liczbami, mozesz
	//       je w petli zsumowac


	// Podwpowiedź:
	// cin >> zmienna;     bedzie wczytywał z klawiatury wszystko
	//						aż dp pierwszej spacji. Więc trzeba będzie
	//						zrobić wczytywanie w pętli
	return 0;
}
