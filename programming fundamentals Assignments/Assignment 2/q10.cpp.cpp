/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 10*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows to print pattern: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "#";
		for (int j = 1; j < i; j++)
			cout << " ";
		cout << "#" << endl;
	}
	system("pause");
	return 0;
}