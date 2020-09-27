#include <iostream>
#include <cstdlib>
#include <string>
#include <cctype>


using namespace std;

string fixString(string a, int n);
//Precondition: Takes in string and size of the string variable to be corrected.
//Postcondition: Capitializes first letter, corrects spacing and returns corrected string variable to
//be output to monitor.

const int array_size = 100;

/*
Ricky Schrombeck
CS 124
Professor Yang
HW6
04/06/2019
*/

int main()
{
	using namespace std;
	int size(0);
	string inputLine;
	char input[array_size];

	cout << "Please input string to correct. \n";//Input from user, converted into string variable
	cin.getline(input, array_size + 1);
	inputLine = input;
	size = inputLine.length();

	cout << "Original text = " << inputLine << endl;

	inputLine = fixString(inputLine, size);

	cout << "Corrected text = " << inputLine << endl;

	system("pause");
	return 0;
}

string fixString(string a, int length)
{
	using namespace std;

	string temp;
	int first(0), last(0);

	while (first < length)
	{
		while(isspace(a[first]))//Finds first index not occupied by a space.
		first++;

		last = first;

		while(isalnum(a[last])||ispunct(a[last]))//Finds index of space after char and punctuation.
		last++;

		temp += a.substr(first, (last - first));

		temp += " ";

		first = last;
	}

	temp[0] = toupper(temp[0]);
	length = temp.length();

	for (int i = 1; i < length; i++)//Checks for uppercase letters after the 0 index, and changes them to lowercase.
	{
		if (isupper(temp[i]))
		{
			temp[i] = tolower(temp[i]);
		}
	}

	return(temp);
}