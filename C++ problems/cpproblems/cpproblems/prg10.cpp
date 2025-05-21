/*
find the eligibility for voting

*/

#include<iostream>

using namespace std;

int main() {

	int candiAge;

	cout << "Candidate age: " << endl;

	cin >> candiAge;

	if (candiAge > 18) {

		cout << "it is eligibilty for voting" << endl;

	}
	else {

		cout << "it is not eligibilty for voting" << endl;
	}


	return 0;


}