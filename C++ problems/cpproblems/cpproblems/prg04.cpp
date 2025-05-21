/*

reverse a string with using array

*/

#include<iostream>
#include<cstring>
using namespace std;

int main() {

	// first finding string length

	int len;
	char str[20];
	char rev[20];				// reverse

	cin >> str;

	len = strlen(str);			//finding strlen function

	int j = 0;

	for (int i = len - 1;i >= 0;i--) {	

		rev[j] =str[i];
		j++;

	}
	rev[j] = '\0';

	cout << rev;

	return 0;


}