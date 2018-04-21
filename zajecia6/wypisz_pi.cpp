#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<double> v(11);
  for (int i = 0 ; i < v.size() ; i++)
  {
    v[i] = i * 3.14;
  }
  for (int i = 0 ; i < v.size() ; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
	return 0;
}
