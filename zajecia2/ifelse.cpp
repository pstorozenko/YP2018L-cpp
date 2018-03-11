#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Podaj liczbę 42: ";
	cin >> x;
	/*
		Dostępne:
		==
		<=
		>=
		<
		>
	*/
	if (x == 42)
	{
		cout << "Wszyscy lubią 42" << endl;
	}
	else if (x == 34)
	{
		cout << "No 34 jeszcze przejdzie..." << endl;
	} 
	else {
		cout << "Och Ty niegrzeczny!" << endl;
	}
	return 0;
}