#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
	using namespace std;

	ifstream input;

	input.open("TestNumbers.txt");
	if (input.fail())
	{
		cout << "Input file failed to open. \n";
		exit(1);
	}
	
	int min(0), max(0), nextInt(0), count(0);

	while (input >> nextInt)
	{
		//cout << "Next Int = " << nextInt << endl;
		
		if (nextInt > max)
		{
			max = nextInt;
		}
		if (nextInt < min)
		{
			min = nextInt;
		}
	}
	input.close();

	for (int i = min; i <= max; i++)
	{
		input.open("TestNumbers.txt");
		if (input.fail())
		{
			cout << "Input file failed to open. \n";
			exit(1);
		}

		while (input >> nextInt)
		{
			if (i == nextInt)
				count++;
		}

		if (count > 0)
		{
			cout << "The number " << i << " appears " << count << " number of times in this file. \n";
			count = 0;
		}
		input.close();
	}
	return 0;
}