#include <iostream>

using namespace std;

void wypisz_litery(string napis)
{
  int n = napis.length();
  for (int i = 0; i < n; i++)
  {
    cout << napis[i] << endl;
  }
}

int main()
{
  wypisz_litery("Autobus");
  return 0;
}
