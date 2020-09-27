	#include <iostream>
	#include <array>

	using namespace std;

	/*
	Ricky Schrombeck
	CS 124
	Professor Yang
	HW1 Question 3
	1/27/2019
	*/

	int main()
	{
		int N(0); //Declared variables
		double overallScore(0);
		double score(0);
		double totalPoints(0);

		cout << "How many excersizes to input? \n"; //Input for excersizes to evaluate.
		cin >> N;

		for (int x = 1; x <= N; x++) //Input for scores and totals of excersizes.
		{
			cout << "Score recieved for excersize " << x << "? \n";
			int tempScore(0);
			cin >> tempScore;
			score = score + tempScore;
			cout << "How many points were possible? \n";
			int tempTotal;
			cin >> tempTotal;
			totalPoints = totalPoints + tempTotal;
		}

		overallScore = (score / totalPoints) * 100;

		cout << "Your total score is " << score << " out of " << totalPoints << ", or " //Output of total scores and overall percentage.
			<< overallScore << "%.";
			return 0;
	}