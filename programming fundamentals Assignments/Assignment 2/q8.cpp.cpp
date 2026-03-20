/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 8*/

#include <iostream>
using namespace std;
int main()
{
	int lines, cheers;
	cout << "Enter number of lines: ";
	cin >> lines;
	cout << "Enter number of cheers: ";
	cin >> cheers;
	for (int i = 0; i < lines; i++)
	{
		for (int space = 0; space < i; space++)
			cout << "   "; // 3 Spaces

		for (int j = 0; j < cheers; j++)
		{
			cout << "Go";
			if (j < (cheers - 1))
				cout << " Buddy ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}