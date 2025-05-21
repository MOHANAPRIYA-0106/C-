/*
without using 3rd variable (swapping 2 numbers)

*/

#include<iostream>

using namespace std;

int main() {

	int a;
	int b;

	// swap(a, b);

	cin >> a >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << a << endl;
	cout << b << endl;
	

	// cout << "a= "<<a <<"b= "<<b << endl;
	return 0;


}