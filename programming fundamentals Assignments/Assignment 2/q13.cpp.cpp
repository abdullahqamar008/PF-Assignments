/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 13*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	int i = 0, width = 60;
	while (i < n)
	{
		int j = 1;
		while (j <= width)
		{
			if (j % 10 == 0)
				cout << "|";
			else
				cout << " ";
			j++;
		}
		cout << endl;
		int k = 0;
		while (k < width)
		{
			cout << (k + 1) % 10;
			k++;
		}
		cout << endl;
		i++;
	}
	system("pause");
	return 0;
}