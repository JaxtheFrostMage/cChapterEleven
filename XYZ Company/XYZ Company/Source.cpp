//XYZ Comapny. cpp
//Author: Evan J. Raker
//Date: 9/27/2018
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	
	int valuesArray[7] = { 50, 10, 5, 25, 30, 15, 20};
	int total = 0;
	for (int i = 0; i < size(valuesArray); i++){

		cout << valuesArray[i]<< endl;
		total = total + valuesArray[i];
	}
	cout << total << endl;

	system("pause");
	return 0;
}