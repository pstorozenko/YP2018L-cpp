
#include <iostream>

using namespace std;

int main(){
	// na samym poczatku uzytkownik ma podac ile razy bedzie
	// dodawal do siebie liczby:

	int IloscPowtorzen;
	cout << "Ile razy bedziesz sumowal liczby?: ";
	cin >> IloscPowtorzen;

	int IleLiczb; // tworzymy zmienna
//	int zmienna;
	int Suma = 0;   // Tworzymy zmienna do ktorej wpiszemy sume
					//liczb - pamietamy o inicjalizacji na 0

	int *Tablica;


	for (int n = 0; n < IloscPowtorzen; n++){

		// najpierw uzytkownik podaje ile liczb chce dodac

		cout << "Podaj ile liczb chcesz zsumowac: ";
		cin >> IleLiczb; //wczytujemy wartosc z klawiatury
		cout << endl; // dodajemy linie odstepu

		// teraz uzytkownik ma podac ciag tych liczb
		// oddzielony spacjami


		Tablica = new int[IleLiczb]; // tworzymy
			// dynamicznie tablice, o rozmiarze IleLiczb
		cout << "\nPodaj liczby do zsumowania, oddzielajac je spacja: ";
		for (int i = 0; i < IleLiczb; i++){
			//cin >> zmienna; // wczytujemy pierwsza liczbe
							// do zmiennej tymczasowej

			//Tablica[i] = zmienna; // przepisujemy wartosc
								// zmiennej do i-tego
								// elementu Tablicy

			cin >> Tablica[i]; // to zastepuje dwie linie
								// w tej petli

		}
		Suma = 0; // pamietamy o zerowaniu
		for (int i = 0; i < IleLiczb; i++){
			Suma += Tablica[i];
			// to samo co Suma = Suma + Tablica[i];
		}


		cout << "Suma liczb to: " << Suma << endl;
		delete[] Tablica;
	}
return 0;
}
