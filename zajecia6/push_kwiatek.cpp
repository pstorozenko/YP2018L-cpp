#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<string> v;
  string kw = "Kwiatek";
  for (int i = 0 ; i < 5 ; i++)
  {
    v.push_back(kw + to_string(i));
  }
  
  for (int i = 0 ; i < v.size() ; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
	return 0;
}
