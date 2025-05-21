/*

reverse a string without using array
*/

#include<iostream>
#include<string>
using namespace std;


int main() {

	string str;

	string rev = "";

	cout << "Enter a string " << endl;
	getline(cin, str);

	for (int i = str.length() - 1;i >= 0;i--)
	{
		rev = rev + str[i];

	}
	
	cout << "Reverse string:" << rev << endl;

	return 0;


}