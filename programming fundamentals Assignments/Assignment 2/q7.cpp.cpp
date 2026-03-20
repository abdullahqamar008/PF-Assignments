/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 7*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "How many positive binary numbers you want to convert in decimal?" << endl;
	cin >> n;
	if (n <= 0)
	{
		cout << "Error: You entered wrong amount of numbers!" << endl;
		return 1;
	}
	for (int i = 1; i <= n; i++)
	{
		long int bin;
		cout << "Enter Positive Binary number: ";
		cin >> bin;
		int dec = 0, base = 1;
		while (bin > 0)
		{
			int LastDigit = bin % 10;
			dec += (LastDigit * base);
			bin /= 10;
			base *= 2;
		}
		cout << "Decimal Number: " << dec << endl;
	}
	system("pause");
	return 0;
}