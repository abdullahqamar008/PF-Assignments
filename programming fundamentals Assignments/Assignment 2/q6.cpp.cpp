/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 6*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "How many integers do you want to reverse?" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num, reverse = 0, sum = 0;
		cout << "\nEnter number " << i << ": ";
		cin >> num;
		while (num > 0)
		{
			int reminder = num % 10;
			reverse = (reverse * 10) + reminder;
			sum += reminder;
			num /= 10;
		}
		cout << "Reversed number = " << reverse << endl;
		cout << "Sum of digits = " << sum << endl;
	}
	system("pause");
	return 0;
}