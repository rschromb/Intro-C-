#include <iostream>
#include <fstream>



int main()
{
	using namespace std;

	ifstream inFile;
	string fileName;

	cout << "Enter file name to calculate its median. \n";
	cin >> fileName;
	
	inFile.open(fileName);
	if (inFile.fail())
	{
		cout << "Input file failed to open. \n";
		exit(1);
	}

	int total(0), next(0);

	while (inFile >> next)
	{
		total++;
	}

	inFile.close();

	if (total % 2 == 0 && total != 0)
	{
		inFile.open(fileName);
		if (inFile.fail())
		{
			cout << "Input file failed to open. \n";
			exit(1);
		}

		double avg[2]{ 0, 0 }, count(0);

		while (inFile >> next)
		{
			count++;
			if (count == (.5) * total)
			{
				avg[0] = next;
			}

			if (count == (.5) * total + 1)
			{
				avg[1] = next;
			}
		}

		inFile.close();

		double median = (avg[0] + avg[1]) / 2.0;

		cout << "The median average of this integer file is " << median << endl;
	}
	else if(total != 0)
	{
		inFile.open(fileName);
		if (inFile.fail())
		{
			cout << "Input file failed to open. \n";
			exit(1);
		}
		
		int count(0), median(0);
		while (inFile >> next)
		{
			count++;
			if (count == (total / 2) + 1)
			{
				median = next;
			}
		}
		inFile.close();
		cout << "The median element of this integer file is " << median << endl;
	}

	
	return 0;
}