/*

Reverse a number

*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n;
	cin >> n;

	int rev = 0;
	int reminder = 0;

	while (n != 0) {

		reminder = n % 10;

		rev = rev * 10 + reminder;

		n = n / 10;

		cout << rev << endl;
		// cout << reminder << endl;
		
	}

	return 0;


}