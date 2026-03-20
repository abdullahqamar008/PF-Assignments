/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 11*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < (n - i); j++)
			cout << " ";
		for (int k = 0; k <= i; k++)
			cout << i + 1;
		cout << endl;
	}
	system("pause");
	return 0;
}