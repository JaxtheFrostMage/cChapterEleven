//Twelve Ints Ascend and Descend
//Author: Evan J. Raker
//Date: 9/28/2018
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool wayToSort(int i, int j) {
	return i > j;
}

int main()
{

	int ints[12] = { 0.0 };

	for (int i = 0; i < size(ints); i++) {
		cout << "integer number " << i + 1 << " of 12"<< endl;
		cin >> ints[i];

	}

	sort(ints, ints + size(ints));
	cout << "\ndecrease" << endl;
	for (int i = 0; i < size(ints); i++) {
		cout << ints[i] << endl;
	}

	sort(ints, ints + size(ints), wayToSort);
	cout << "\nincrease" << endl;
	for (int i = 0; i < size(ints); i++) {
		cout << ints[i] << endl;
	}


	system("pause");
	return 0;
}