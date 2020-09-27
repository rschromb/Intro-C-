#include <iostream>;
using namespace std;

/*
Ricky Schrombeck
CS 123
Professor Yang
HW2
02/08/2019
*/
int main()
{
	    char repeat;
	do
	{
		int startTime(0), startTimeHours(0), startTimeMins(0), callLength(0), day(0); //Declare variables and constants.
		const int MINS_IN_DAY(1440), EIGHT_AM(480), SIX_PM(1080); //Constants converted to minute format.
		double totalCost(0);
		char x, startDay1, startDay2;

		while (day == 0) //Boolean to ensure date was in correct format.
		{
			cout << "Please enter a weekday by using the first two letters. (Example: Friday = Fr) \n"; //Input characters to determine weekday
			cin >> startDay1 >> startDay2;
        
			startDay1 = toupper(startDay1); //Make characters uppercase to be easier to handle.
			startDay2 = toupper(startDay2);
        
			if (startDay1 == 'S' && startDay2 == 'U') //Test for accurate input of weekday, and assign int for related switch statement.
				day = 1;
			if (startDay1 == 'M' && startDay2 == 'O')
				day = 2;
			if (startDay1 == 'T' && startDay2 == 'U')
				day = 3;
			if (startDay1 == 'W' && startDay2 == 'E')
				day = 4;
			if (startDay1 == 'T' && startDay2 == 'H')
				day = 5;
			if (startDay1 == 'F' && startDay2 == 'R')
				day = 6;
			if (startDay1 == 'S' && startDay2 == 'A')
				day = 7;
		}

		do //Loop to take input for time call starts, and tests to ensure it exists.
		{
			cout << "What time does the call start? (Be sure to enter in 24 hour format. Ex: 6:00pm = 18:00, minutes cannot exceed :59) \n";
			cin >> startTimeHours >> x >> startTimeMins;
			startTime = (startTimeHours * 60) + startTimeMins; //Converts hours to minutes, and adds them together with minute entry.

		} while (startTime > MINS_IN_DAY || startTime < 0 || startTimeMins > 59 || startTimeMins < 0); //Boolean test to ensure starting time exists.
		
		cout << "How many minutes did the call last? (Example: 12000. Do not seperate with comma's.) \n";
		cin >> callLength;
		
		if (day == 1 || day == 7)
		{
		totalCost =  callLength * .15;
		}

		if (day >= 2 && day <= 7)
		{
		if (startTime < EIGHT_AM || startTime > SIX_PM)
		totalCost = callLength * .25;
		
		if (startTime >= EIGHT_AM && startTime <= SIX_PM)
		totalCost = callLength *.4;
		}

		cout << "The total cost of this call was $" << totalCost << endl;

		cout << "Would you like to calculate another call? (Enter 'Y' for yes) \n";
		cin >> repeat;

	}while (repeat == 'y' || repeat == 'Y'); //Checks to see if user wants to calculate another call.

 return 0;
}