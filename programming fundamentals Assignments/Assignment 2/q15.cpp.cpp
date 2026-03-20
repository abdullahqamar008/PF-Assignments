/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 15*/

#include <iostream>
using namespace std;
int main() 
{
	int size = 3;  
	cout << "+";
	for (int i = 0; i < 6; i++)
		cout << "-";
	cout << "+" << endl;
	// Upper part (^) pattern
	for (int row = 0; row < size; row++) 
	{
		cout << "|";
		for (int space = 0; space < size - row - 1; space++)
			cout << " ";
		cout << "^";
		for (int space = 0; space < 2 * row; space++)
			cout << " ";
		cout << "^";
		for (int space = 0; space < size - row - 1; space++)
			cout << " ";
		cout << "|" << endl;
	}
	// Middle divider
	cout << "|";
	for (int i = 0; i < 6; i++)
		cout << "-";
	cout << "|" << endl;
	// Lower part (v) pattern
	for (int row = 0; row < size; row++)
	{
		cout << "|";
		for (int space = 0; space < row; space++)
			cout << " ";
		cout << "v";
		for (int space = 0; space < 2 * (size - row - 1); space++)
			cout << " ";
		cout << "v";
		for (int space = 0; space < row; space++)
			cout << " ";
		cout << "|" << endl;
	}
	// Bottom border
	cout << "+";
	for (int i = 0; i < 6; i++)
		cout << "-";
	cout << "+" << endl;
	system("pause");
	return 0;
}