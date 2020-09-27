//Rearranges intergers from two dimensional array, and copies them to the screen from least to greatest.
#include <iostream>
#include <cstdlib>

void sortNumbers(int [][10]);
//Precondition: Takes in an two dimensional int array with a blank dimension and unsorted dimension.
//Postcondition: Rearranges the integers from the first dimension in order of least to greatest in the
//second dimension.

/*
Ricky Schrombeck
CS 124
Professor Yang
03/23/2019
*/

int main()
{
	using namespace std;

	int numbers[2][10];

	cout << "Please enter 10 whole numbers to be reordered, then press enter";
	for (int x = 0; x < 10; x++)
	{
		cin >> numbers[0][x];
	}

	sortNumbers(numbers);
	cout << "The numbers in order from least to greatest are: \n";

	for (int x = 0; x < 10; x++)
	{
		cout << numbers[1][x] << " ";
	}
	cout << endl;
	system("pause");

	return 0;
}
void sortNumbers(int a[][10])
{
	using namespace std;
	int temp(0);

	for (int x = 0; x < 10; x++)
	{
	 a[1][x] = a[0][x];
		for (int y = x; y > 0; y--)
		{
			if(a[1][y] < a[1][y - 1])//Swap if necessary.
			{
			 temp = a[1][y];
			 a[1][y]= a[1][y-1];
			 a[1][y-1] = temp;
		    }
	    }

	}
return;
}