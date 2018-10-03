//Advanced28.cpp - displays the number of students
//earning a specific score
//Created/revised by <your name> on <current date>

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//declare array


	//declare variables
	int searchScore = 0;
	int total = 0;
	int scores[20] = { 0 };
	total = 0;

	
	

	for (int i = 0; i < size(scores); i++) {
		srand(time(NULL));
		scores[i] = rand() % 100 + 1;
		if (scores[i] == searchScore)
			total += 1;
	}
	for (int i = 0; i < size(scores); i++) {
		cout << scores[i] << endl;
	}
	cout << "Enter a score from 0 through 100 (-1 to end): ";
	cin >> searchScore;


	while (searchScore >= 0)
	{
	
		//search for score
		
		//end if    
		//end for
		
		//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
	}  //end while

	   //system("pause");
	return 0;
}	//end of main function