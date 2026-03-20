//Muhammad Abdullah Qamar
//BS SE 1A
//Programming Fundamentals
//Assignment 3
//QUESTION 2
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of students: ";
	cin >> n;
	if (n <= 0)
	{
		cout << "Error: Number of students must be greater than 0!" << endl;
		return 1;
	}
	double score, sum = 0.0;
	for (int i = 1; i <= n; i++)
	{
		cout << "Enter Student " << i << " score(Out of 100): ";
		cin >> score;
		if (score < 0 || score > 100)
		{
			cout << "Warning: Invalid score entered!" << endl;
			continue;
		}
		sum += score;
	}
	cout << "\nTotal Score = " << sum << endl;
	cout << "Mean = " << sum / n << endl;
	cout << "Average = " << sum / n << endl;
	system("pause");
	return 0;
}