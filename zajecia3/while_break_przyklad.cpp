#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while(i < 10)
	{
		cout << i << endl;
		if (i == 5)
		{
			break;
		}
		i++;
	}    
	return 0;
}