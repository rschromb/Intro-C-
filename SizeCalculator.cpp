#include <iostream>
#include <string>

using namespace std;
//Function declarations
double hatSize(double weight, double height); //Calculates hat size
double jacketSize(double height, double weight, double age); //Calculates chest in inches
double waistInInches(double weight, double age); //Calculates waist size by inches
//precondition: user inputs weight, height and age to calculate jacket size, hat size and waist size.
//postcondition: takes input from user, and applies it to various calculations to determine sizes of various items.
//hat size = (weight / height) * 2.9
//jacket size = (height * weight) / 288 + (1/8 for every 10 years over the age of 30).
//waist size = (weight / 5.7) + (1/10 for every 2 years over the age of 28).

double age(0), height(0), weight(0), sizeOfHat(0), sizeOfJacket(0), sizeOfWaist(0); //Variable declarations
int  jacketMod(0), waistMod(0);
string x;

/*
Ricky Schrombeck
CS 124
Professor Yang
HW3 Question #2
2/16/2019
*/

int main()
{
char repeat; //Variable declaration for repeating process.
   do 
   {
	cout << "Please enter your height in inches. \n";
	cin >> height;

	cout << "Please enter your weight in pounds. \n";
	cin >> weight;

	cout << "Please enter your age in years. \n";
	cin >> age;

	sizeOfHat = hatSize(weight, height); //Calls functions after input of weight, height and age.
	sizeOfJacket = jacketSize(height, weight, age);
	sizeOfWaist = waistInInches(weight, age);

	cout.setf(ios::fixed); //Set decimal point to a max of 2 places.
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Hat size = " << sizeOfHat << " inches." << endl; //Output after sizes have been computed
	cout << "Jacket size = " << sizeOfJacket << " inches." << endl;
	cout << "Waist size = " << sizeOfWaist << " inches." << endl;
	
	cout << "Would you like to try again? (Type 'Y' for yes) \n"; //Input to stop, or continue
	cin >> x;
	repeat = x.at(0);
	repeat = toupper(repeat);
   }while(repeat == 'Y');

   return 0;
}

double hatSize(double weight, double height) //Hat size calculator
	{
	return((weight / height) * 2.9);
	}

double jacketSize(double height, double weight, double age) //Jacket size calculator
{
	if (age >= 40)
	{
		jacketMod = (age - 30) / 10;
		return( ( (height * weight) / 288 ) + (jacketMod * .125) ); //Modification for age
	}
	else
	return( (height * weight) / 288);
}
double waistInInches(double weight, double age) //Waist size calculator
{
	if (age >= 30)
	{
		waistMod = ( (age - 28) / 2 );
		return( ( weight / 5.7 ) + ( waistMod * .1 ) ); //Modification for age
    }
	else
	return(weight / 5.7);
}
