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
	srand(time(NULL));
	
	

	for (int i = 0; i < size(scores); i++) {
		scores[i] = rand() % 100 + 1;
	}

	for (int i = 0; i < size(scores); i++) {
		cout << scores[i] << endl;
	}



	do
	{

		cout << "Enter a score from 0 through 100 (-1 to end): ";
		cin >> searchScore;
		
		for(int i = 0; i < size(scores); i++)
		if (scores[i] == searchScore)
			total += 1;
		//search for score
		
		//end if    
		//end for
		
		//display total
		cout << "Number of students earning a score of "
			<< searchScore << ": "
			<< total << endl << endl;
		total = 0;
	} while (searchScore >= 0);  //end while

	system("pause");
	return 0;
}	//end of main function