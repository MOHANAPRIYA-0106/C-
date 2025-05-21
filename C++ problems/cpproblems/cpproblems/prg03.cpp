/* 
to check whether a character is alphabet or not,digit or spl char

*/

#include<iostream>

using namespace std;

int main()

{
	char ch;
	
	cin >> ch;

	//Alphabet checking condition

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))

	{
		cout << "it is a alphabets" << endl;


	}

	else if (ch >= '0' && ch <= '9') {

		cout << "it is a digits" << endl;
	}

	else {

		cout << "it is a spl characters" << endl;


	}

	return 0;


}