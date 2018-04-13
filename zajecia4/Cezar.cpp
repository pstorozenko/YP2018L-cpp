#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;

	getline(cin, s);
	//while (s != "\n") {cin >>  s;}
	cout << s.length();

	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i] << endl;
		cout << (int)s[i] << endl;
		if ((int)s[i] != 32) cout << (char)((int)s[i]+2) << endl;
	}

	// s.find(cos);
	if (s.find("cześć") != string::npos){
		cout << "\npowitanie";
	}
	return 0;
}
