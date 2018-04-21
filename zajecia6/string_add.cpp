#include <iostream>
#include <string>
using namespace std;
// trzeba dodać przy kompilacji flagę std=c++11
// czyli np. g++ string_add.cpp -o string_add -std=c++11
int main()
{
  string n = "Kwiatek";
  cout << n + to_string(1) << endl;
	return 0;
}
