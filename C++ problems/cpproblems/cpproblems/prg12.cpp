/*
find  armstrong number betwen 1 to n

153=1^3+5^3+3^3

153=1+125+27

153=153

153/10=15 reminder 3
15/10=1 reminder 5
1/10=0 reminder 1

/ - quotiant
% -reminder




*/

#include<iostream>

using namespace std;

int main() {

	int n;
	int reminder;
	int sum = 0;
	int count = 0;
	int num = 1;

	cin >> n;

	while (count < n) {
		int orgNum = num;

		int temp = orgNum;

		while (temp != 0) {

			reminder = temp % 10;

			sum = sum + pow(reminder, n);

			temp = temp / 10;
			++count;



		}
		while (temp != 0) {

			reminder = temp % 10;

			sum = sum + pow(reminder, n);

			temp = temp / 10;


		}

		if (sum  == num) {

			cout << num << " ";
			count++;


		}
		num++;
	}

	cout << endl;

	return 0;


}
