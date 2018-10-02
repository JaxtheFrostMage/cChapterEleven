// Find Min, Max, and Average of test scores
//Author: Evan J. Raker
//Date: 10/1/2018
#include <iostream>
#include <string>
using namespace std;

int main(){

	double average = 0;
	double highScore = 0;
	double lowScore = 100;
	string result;

	double scoreArray[10] = { 0.0 };

	for (int i = 0; i < size(scoreArray); i++) {
		cout << "Enter test score "<< i + 1 <<": ";
		cin >> scoreArray[i];

		if (scoreArray[i] >= 0 && scoreArray[i] <= 100) {
			if (scoreArray[i] >= highScore) {
				highScore = scoreArray[i];
			}
			else if (scoreArray[i] <= lowScore) {
				lowScore = scoreArray[i];

			}
		}
		else {
			cout << "improper test score, try again" << endl;
			scoreArray[i] = 0;
			i--;
		}
	}

	average = (scoreArray[0] + scoreArray[1] + scoreArray[2] + scoreArray[3] + scoreArray[4] + scoreArray[5] + scoreArray[6] + scoreArray[7] + scoreArray[8] + scoreArray[9]) / 10;

	cout << highScore << endl;
	cout << lowScore << endl;
	cout << average << endl;


	system("pause");
	return 0;
}