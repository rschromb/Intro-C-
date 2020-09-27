#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;

	ifstream input;
	int total(0);

	input.open("TestLineCount.txt");

	if (input.fail())
	{
		cout << "Input line failed. \n";
		exit(1);
	}

	char test[100];

	while (!input.eof())
	{
		input.getline(test, 101);
		
		for (int i = 0; i < strlen(test); i++)
		{
			if (isalnum(test[i]))
			{
				total++;
				break;
			}
		}
	}
	cout << total;
	return 0;
}



