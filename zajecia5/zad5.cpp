#include <iostream>

using namespace std;
// co druga litera będzie WIELKA 
void wypisz_litery(string napis)
{
  for (int i = 0; i < napis.length(); i++)
  {
    int a = (int)napis[i];
    if (i % 2 != 0 && a >= 'a' && a <= 'z') {
      cout << (char) (a - 32) << endl;
    }
    else {
      cout << (char) a << endl;
    }
  }
}

int main()
{
  wypisz_litery("autobus");
  return 0;
}
