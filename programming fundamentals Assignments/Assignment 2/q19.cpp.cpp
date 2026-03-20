/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 19*/

#include<iostream>
using namespace std;
int main()
{
	int j, a = 8;
	for (int i = 1; i <= 9; i++)
	{
		for (j = 9 - i; j >= 1; j--)
			cout << " ";
		for (int k = 1; k <= i; k++)
			cout << k;
		for (int l = 0; l < (i - 1); l++)
			cout << a - j;
			cout << endl;
	}
	for (int i = 1; i <= 8; i++)
	{
		for (int m = i; m >= 1; m--)
			cout << " ";
		for (int n = 1; n < 9 - i; n++)
			cout << n;
		cout << endl;
	}
	system("pause");
	return 0;
}