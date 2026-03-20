/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 18*/

#include <iostream>
using namespace std;
int main()
{
	int rows = 20; 
	for (int i = 0; i < rows; i++) 
	{
		int space1, space2;
		int pos = i % 6;
		if (pos == 0) { space1 = 0; space2 = 6; }
		else if (pos == 1) { space1 = 1; space2 = 4; }
		else if (pos == 2) { space1 = 2; space2 = 2; }
		else if (pos == 3) { space1 = 3; space2 = 0; }
		else if (pos == 4) { space1 = 2; space2 = 2; }
		else { space1 = 1; space2 = 4; }
		for (int j = 0; j < space1; j++)
			cout << " ";
		cout << "*";
		for (int j = 0; j < space2; j++)
			cout << " ";
		cout << "*";
		cout << endl;
	}
	system("pause");
	return 0;
}