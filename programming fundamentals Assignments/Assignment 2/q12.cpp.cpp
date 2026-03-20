/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 12*/

#include <iostream>
using namespace std;
int main()
{
	int width = 40;
	// Line 1
	for (int i = 0; i < width; i++)
		cout << "-";
	cout << endl;
	// Line 2 _-^-_
	for (int i = 0; i < width; i++)
	{
		if (i % 5 == 0)
			cout << "_";
		else if (i % 5 == 1)
			cout << "-";
		else if (i % 5 == 2)
			cout << "^";
		else if (i % 5 == 3)
			cout << "-";
		else if (i % 5 == 4)
			cout << "_";
	}
	cout << endl;
	// Line 3
	for (int i = 0; i < width; i++)
	{
		int num = ((i / 2) % 10) + 1;
		if (num == 10)
			num = 0;
		cout << num;
	}
	cout << endl;
	// Line 4
	for (int i = 0; i < width; i++)
		cout << "-";
	cout << endl;
	system("pause");
	return 0;
}