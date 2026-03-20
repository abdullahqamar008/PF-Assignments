/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 20*/

#include <iostream>
using namespace std;
int main()
{
	int n;       
	int height;  
	cout << "Enter number of pyramids: ";
	cin >> n;
	cout << "Enter height of each pyramid: ";
	cin >> height;
	for (int i = 1; i <= height; i++) 
	{
		for (int p = 1; p <= n; p++)
		{
			for (int j = i; j < height; j++)
				cout << " ";
			for (int k = 1; k <= (2 * i - 1); k++)
				cout << "*";
			cout << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}