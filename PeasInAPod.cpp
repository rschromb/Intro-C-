#include <iostream>
using namespace std;
int main()
{
	int numberOfPods(0), peasPerPod(0), totalPeas(0);
	cout << "Press return after entering a number. \n";
	cout << "Enter the number of pods. \n";
	cin >> numberOfPods;
	cout << "Enter the number of peas in a pod. \n";
	cin >> peasPerPod;
	totalPeas = numberOfPods * peasPerPod;
	cout << "If you have " << numberOfPods << " pea pods \n";
	cout << "and " << peasPerPod << " peas in each pod, then \n";
	cout << "you have " << totalPeas << " peas in all the pods. \n";
	system("pause");
	return 0;
}