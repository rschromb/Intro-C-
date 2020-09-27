#include <iostream>
using namespace std;
/*
Ricky Schrombeck
CS 124
Professor Yang
HW1 Question 1 
1/26/2019
*/
int main()
{
	char repeat = 'Y'; //Variables to be taken in
	const double METRIC_TONS_IN_OUNCES(35273.92);
	double boxOfCereal(0), percentOfMetricTon(0), boxesNeededForMetricTon(0);
	while (repeat == 'y' || repeat == 'Y')
	{
		cout << "How many ounces in your box of cereal? \n";

		cin >> boxOfCereal;

		percentOfMetricTon = boxOfCereal / METRIC_TONS_IN_OUNCES; //Convert to percentage

		cout << "This box weighs in at " << percentOfMetricTon << " metric tons. \n";

		boxesNeededForMetricTon = METRIC_TONS_IN_OUNCES / boxOfCereal; //Test for how many boxes needed for metric ton

		cout << "You need " << boxesNeededForMetricTon << " boxes of this cereal to equal a metric ton. \n";

		cout << "Do you want to test another box of cereal? \n" << "If so, please type Y for 'yes'. \n"; //Ask user if they want run again

		cin >> repeat; 
	}
	cout << "Thanks for using the Cereal program, have a nice day!";

	return 0;
}