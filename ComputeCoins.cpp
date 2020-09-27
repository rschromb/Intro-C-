#include <iostream>

void compute_coin(int coin_value, int& num, int& amount_left);
//precondition: 0<amount_left<100
//post condition num is set to the number of coins of assigned value, and printed 
//to the output screen. amount_left is reduced by the value of assigned coins times the number
//of coins, and then next smallest coin value is then calculated until amount_left is equal to 0.
//Then the loop will ask the user if they wish to calculate another amount.

/*
Ricky Schrombeck
CS 124
Professor Yang
HW3 Question 2
2/16/2019
*/

int main()
{
 using namespace std;

 int amount_left(0), coin_value(0), num(0);//variables
 char repeat('Y');

 do
 {
	 do//input prompt for amount to be calculated.
	 {
		 cout << "Please enter the amount of change you wish to evaluate (A number between 1 and 99) \n";
		 cin >> amount_left;
	 } while (amount_left > 99 || amount_left <= 0);

	 compute_coin(coin_value, num, amount_left);//call to void function.

	 cout << "Would you like to calculate another amount? (Type 'Y' for 'Yes')\n";//Input prompt for repeat.
	 cin >> repeat;
	 repeat = toupper(repeat);

 }while(repeat == 'Y');

 return 0;
}


void compute_coin(int coin_value, int& num, int& amount_left)
{
 using namespace std;

	if(amount_left >= 25)//Computation method for quarters.
	{
	 cout << amount_left << " cents can be given in the amount of: \n";
	 coin_value = 25;
	num = amount_left / coin_value;
	amount_left= amount_left % coin_value;
	 cout << num << " quarters. \n";
	}

	if (amount_left >= 10)//Computation method for dimes.
	{
	 coin_value = 10;
	 num = amount_left / coin_value;
	 amount_left = amount_left % coin_value;
	 cout << num << " dimes. \n";
	}
	
	if (amount_left >= 1)//Computation method for pennies.
	{
	 num = amount_left;
	 amount_left = 0;
	 cout << num << " pennies. \n";
	}

	return;
}
