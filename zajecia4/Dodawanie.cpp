#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int nLiczb;
	int *Liczby;

	string s = "Hello!";
	cout << s << endl;
	cin >> nLiczb;
	Liczby = new int[nLiczb];
	int liczba;
//	char* CiagZnakow;
//	CiagZnakow = new char[nLiczb*2];

	for (int i = 0; i < nLiczb; i++){
		cin >> liczba;//s;
		//liczba = atoi(s.c_str());
//		cout << liczba << endl;
//		cout << s[i];
//		if (s[i] == '1') cout << "jeden!";
//		if (s[i] == ' ') cout << "spacja!";
		Liczby[i] = liczba;
	}
	int suma = 0;

	for (int i = 0; i < nLiczb; i++)
	{
		suma += Liczby[i];
	}

	cout << "\nsuma to: " << suma << endl;

	return 0;
}
