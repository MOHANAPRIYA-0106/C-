
/*

check leap year using conditional operator

*/

#include<iostream>

using namespace std;

int main() {

	int year;

	cin >> year;

	// ternary operator

	string result = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 
		"It is a leap year" : "it is not a leap year";

	cout << result;
	return 0;











}