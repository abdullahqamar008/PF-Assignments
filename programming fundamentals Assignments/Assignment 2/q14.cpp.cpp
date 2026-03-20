/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 14*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	int middleChars = (n * 2) - 2;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n - i - 1); j++)
			cout << "*";
		for (int j = 0; j <= i; j++)
			cout << " ";
		for (int j = 0; j < middleChars - (i * 2); j++)
			cout << "/";
		for (int j = 0; j < (i * 2); j++)
			cout << "\\";
		for (int j = 0; j <= i; j++)
			cout << " ";
		for (int j = 0; j < (n - i - 1); j++)
			cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}