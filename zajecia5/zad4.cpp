#include <iostream>

using namespace std;

void wypisz_litery(string napis)
{
  for (int i = 0; i < napis.length(); i++)
  {
    cout << napis[i] << endl;
  }
}

int main()
{
  wypisz_litery("Autobus");
  return 0;
}
