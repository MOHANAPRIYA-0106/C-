/*
calculate total marks,percentage of student based on three subject

*/

#include<iostream>

using namespace std;

int main() {

	int rollNo;
	int maths, phy, chem;
	int totalMark;
	float percentage;

	string stuName;


	cout << "student roll number: ";
	cin >> rollNo;

	cout << "student name: ";
	cin >> stuName;

	cout << "3 subjects: ";
	cin >> maths >> phy >> chem;
	 
	
	totalMark = maths + phy + chem;
	cout <<"total: " << totalMark << endl;

	percentage = totalMark / 3;
	cout <<"percent: " << percentage << endl;

	if (percentage >= 80) {

		cout << "First mark" << endl;

	}
	else if (percentage < 80 && percentage >= 60) {

		cout << "Second mark " << endl;
	}
	else if (percentage < 60 && percentage >= 45) {

		cout << "third mark " << endl;
	}

	else if (percentage < 45 && percentage >= 35) {

		cout << "Just pass " << endl;

	}
	else {

		cout << "it is fail mark" << endl;
	}

	return 0;

}