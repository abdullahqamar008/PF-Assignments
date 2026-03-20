//Muhammad Abdullah Qamar
//BS SE 1A
//Programming Fundamentals
//Assignment 3
//question 3

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter 5 numbers (each between 1 and 30):" << endl;
	for (int i = 1; i <= 5; i++)
	{
		int num;
		cout << "Enter number " << i << " : ";
		cin >> num;
		if (num < 1 || num > 30)
		{
			cout << "Warning: You entered wrong number!" << endl;
			i--;
			continue;
		}
		for (int j = 0; j < num; j++)
			cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}