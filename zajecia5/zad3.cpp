#include <iostream>

using namespace std;

void wypiszn(string napis, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << napis << endl;
  }
}

int main()
{
  wypiszn("Piotr", 7);
  return 0;
}
