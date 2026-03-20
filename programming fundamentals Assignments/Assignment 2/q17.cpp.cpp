/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 17*/

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number of terms: ";
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		int num = (1 << i) - 1; 
		int den = (1 << i); 
		cout << num << " / " << den;
		if (i < n)
			cout << " , ";
		i++;
	}
	system("pause");
	return 0;
}