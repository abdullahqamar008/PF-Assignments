/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 5*/

#include <iostream>
using namespace std;
int main() 
{
	int m, n, r; 
	cout << "Enter two positive integers: ";
	cin >> m >> n;
	cout << "\nSteps of the Euclidean Algorithm:\n";
	while (n != 0)
	{
		r = m % n;          
		cout << "(" << m << ", " << n << ") -> "; 
		m = n;                 
		n = r;              
	}
	cout << "(" << m << ", " << n << ")\n";  
	cout << "\nGreatest Common Divisor (GCD) = " << m << endl;
	system("pause");
	return 0;
}