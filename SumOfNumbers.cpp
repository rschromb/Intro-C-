#include <iostream>;
using namespace std;
/*
Ricky Schrombeck
CS 124
Professor Yang
HW1 Question 2
1/26/2019
*/

//Declared variables and arrays
int tenNumbers[10];
int sumOfPositiveNumbers(0);
int sumOfNegativeNumbers(0);
int sumOfAllNumbers(0);
int variant(0);

int main() {

	cout << "Please enter ten whole numbers, seperated by spaces, and then press enter. \n";

	do{
		cin >> tenNumbers[variant]; //Numbers from user input into array

		sumOfAllNumbers = sumOfAllNumbers + tenNumbers[variant];//All numbers combined totaled.

		if (tenNumbers[variant] > 0) //Positive numbers added together
			sumOfPositiveNumbers = sumOfPositiveNumbers + tenNumbers[variant];

		if (tenNumbers[variant] < 0)//Negative numbers added together
			sumOfNegativeNumbers = sumOfNegativeNumbers + tenNumbers[variant];

		variant++;

	} while (variant < 10);

	cout << "The sum of the positive numbers is " << sumOfPositiveNumbers << ". \n"; //Output of results
	cout << "The sum of the negative numbers is " << sumOfNegativeNumbers << ". \n";
	cout << "The sum of all the numbers combined is " << sumOfAllNumbers << ". \n";

	return 0;
}