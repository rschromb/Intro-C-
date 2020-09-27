#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstring>

using namespace std;
const int ARRAY_SIZE = 100;

/*
Ricky Schrombeck
CS 124 HW7
Professor Yang
4/19/2019
*/


string swapChar(char a[]);//Precondition: Takes in a String of characters.
						  //Postcondition: Returns the reversed order of the string.

void newLine();

int main()
{
	char input[ARRAY_SIZE + 1];

	cout << "Please enter a sequence to reverse. (Maximum of " << ARRAY_SIZE << " characters) \n";
	cin.getline(input, ARRAY_SIZE + 2);
	newLine();
	cout << strlen(input) << endl;

	while (strlen(input) == 0 || ARRAY_SIZE < strlen(input))
	{
		cout << "Please enter a sequence to reverse. (Maximum of " << ARRAY_SIZE << " characters) \n";
		cin.getline(input, ARRAY_SIZE + 2);
		newLine();
	}
	
	string correctedInput = swapChar(input);

	correctedInput = swapChar(input);

	cout << correctedInput << endl;

	return 0;
}

string swapChar(char a[])
{
	int length(0);
	string correct = a;
	char* front, * rear;

	length = strlen(a);

	front = new char;
	rear = new char;

	for (int i = 0; i < length; i++)
	{
		*front = a[i];
		*rear = a[length - (i + 1)];
		correct[i] = *rear;
		correct[length - (1 + i)] = *front;
	}

	delete front;
	delete rear;

	return correct;
}

void newLine()//Clear excess characters from cin input
{
	char symbol;
	do
	{
		cin.get(symbol);
	} while (symbol != '\n');
	return;
}