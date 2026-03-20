/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 16*/

#include <iostream>
using namespace std;
int main()
{
	int pkr;
	cout << "Enter amount in PKR: ";
	cin >> pkr;
	bool check = false;
	for (int a = 0; (a * 6 <= pkr); a++)
		for (int b = 0; (a * 6 + b * 9 <= pkr); b++)
			for (int c = 0; (a * 6 + b * 9 + c * 20 <= pkr); c++)
				if (6 * a + 9 * b + 20 * c == pkr)
				{
					check = true;
					cout << "Possible! Combination:" << endl;
					cout << "6 x " << a << " + 9 x " << b << " + 20 x " << c << " = " << pkr << endl;
					break;
				}
	if (!check)
		cout << "Not possible to exchange exactly " << pkr << " PKR." << endl;
	system("pause");
	return 0;
}