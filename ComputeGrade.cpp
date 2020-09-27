#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

void calculateAverage(ifstream& inFile, ofstream& outFile);
/*precondition: takes data from file opened by ifstream.
  post condition: calculates average based on test score data, copies data from input file to output file
  and adds the average score at the end. 
*/
void newLine( );
//clears data from user input in cin prompt.

/*Ricky Schrombeck
  CS 124
  Prof. Yang
  HW 4
 03-09-2019
*/

int main()
{
	using namespace std;

	char inFileName[16], outFileName[16], repeat;
	ifstream inStream;
	ofstream outStream;

	do
	{
	cout << "Please enter the name of input file. (Max 15 characters) \n";
	cin >> inFileName;
	cout << "You entered " << inFileName << ". Is this correct? (Enter 'Yes' if it is) \n";
	cin >> repeat;
	newLine();
	repeat = toupper(repeat);
	}while(repeat != 'Y');

	repeat = ' ';

	do
	{ 
	cout << "Please enter the name of output file. (Max 15 characters) \n";
	cin >> outFileName;
	cout << "You entered " << outFileName << ". Is this correct? (Enter 'Yes' if it is) \n";
	cin >> repeat;
	newLine();
	repeat = toupper(repeat);
	}while(repeat != 'Y');

	inStream.open(inFileName);
	if (inStream.fail( ))
	{
		cout << "Input file opening failed. \n";
		exit(1);
	}

	outStream.open(outFileName);
	if (outStream.fail( ))
	{
		cout << "Output file opening failed \n";
		exit(1);
	}

	calculateAverage(inStream, outStream);

	inStream.close();
	outStream.close();
	
	cout << "Average calculated. Data transfer complete. \n";
	system("pause");
	return 0;
}

void calculateAverage(ifstream& inFile, ofstream& outFile)
{
		char next;
		int nextInt(0), count(0);
		double avg(0.0), scoreSum(0.0);
	
	while (inFile >> next)
	{
		inFile.putback(next);
	 	count = 0;
		scoreSum = 0;
 		do //Last name
		{
			inFile.get(next);
			outFile << next;
		}while(next != ' ');

		do //First name
		{
			inFile.get(next);
			outFile << next;
		}while(next != ' ');

		while(next != '\n') //Test scores
		{
			inFile >> nextInt;
			scoreSum += nextInt;
			inFile.get(next);
			if (count == 9)
			{
				next = ' ';
			}
			outFile << nextInt << next;
			if (count == 9)
			{				
				next = '\n';
			    avg = scoreSum / (count + 1);
				outFile << "Average: " << avg << next;
			}
			count++;
		}
	}
return;
}
void newLine()//Clear excess characters from cin input
{
	char symbol;
	do
	{
		cin.get(symbol);
	}while (symbol != '\n');
 return;
}