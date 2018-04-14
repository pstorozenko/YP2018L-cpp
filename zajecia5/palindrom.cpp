#include <iostream>

using namespace std;

int czy_palindrom(string napis)
{
  int n = napis.length();
  int pali = 1;
  for (int i = 0 ; i < n ; i++)
  {
    cout << napis[i] << " " << napis[n - i - 1] << endl;
    if(napis[i] != napis[n - i - 1])
    {
      pali = 0;
      break;
    }
  }
  return pali;
}

int main()
{
  string napis = "kajak";
  int pali = czy_palindrom(napis);
  if (pali == 1)
  {
    cout << "Napis " << napis << " jest palindromem" << endl;
  }
  else
  {
    cout << "Napis " << napis << " nie jest palindromem" << endl;
  }
  return 0;
}
