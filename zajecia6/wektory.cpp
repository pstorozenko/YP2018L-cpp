#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v(10);
  for (int i = 0 ; i < v.size() ; i++)
  {
    v[i] = i * 3;
  }
  v[6] = 42;
  for (int i = 0 ; i < v.size() ; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
	return 0;
}
