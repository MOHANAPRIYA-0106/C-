/*
check alphabets using conditional oprator
*/

#include<iostream>

using namespace std;

int main() {

	char ch;

	cin >> ch;

	//Ternary operator

	string result= (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ?
		"Alphabet" :  "Not alphabet"; 

	// result is string so we can use string 

	cout << result << endl;

		return 0;


}