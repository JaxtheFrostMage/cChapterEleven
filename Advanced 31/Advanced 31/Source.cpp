//Advanced31.cpp - displays a grade based 
//on the total points entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	//declare variables
	int mins[5] = {450, 400, 350, 300, 1};   //keeps track of subscripts
	char grades[5] = { 'A', 'B', 'C', 'D', 'F'};
	int points = 0;

	//declare arrays and fill with data

	//get total points
	do {
		cout << "Enter points earned (negative number to stop program): ";
		cin >> points;
		for (int i = 0; i < size(mins); i++) {
			if (points >= mins[i])
				cout << grades[i] << endl;
			points = 0;
		}
	} while (points >= 0);


	system("pause");
	return 0;
}	//end of main function