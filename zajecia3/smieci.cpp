#include <iostream>
using namespace std;
int kwadrat(int z)
{
	return z * z;
}
int main()
{
	int tab[100];
	for(int i=0;i<100;i++)
	{
		cout << kwadrat(tab[i]) << endl;
	}    // wpisac w googla ,,overflow''
	return 0;
}