/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 9*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	int totalChars = (22 * n) / 6;
	int slashCount = 0;
	int exclCount = totalChars;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < slashCount; j++)
			cout << "\\";
		for (int j = 0; j < exclCount; j++)
			cout << "!";
		for (int j = 0; j <slashCount; j++)
			cout << "/";
		cout << endl;
		exclCount -= 4;
		slashCount += 2;
	}
	system("pause");
	return 0;
}