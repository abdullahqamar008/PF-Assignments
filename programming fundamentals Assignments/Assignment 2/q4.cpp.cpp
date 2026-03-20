//Abdullah Qamar
//BS SE 1A
//Programming fundamentals
//assignment 3
//question 4

#include <iostream>
using namespace std;
int main() {
	double pi = 0.0;
	double term;
	int n = 0;       
	int sign = 1;    
	cout << "Term\tApproximation of Pi" << endl;
	cout << "-----------------------------" << endl;
	while (pi < 3.14)
	{  
		term = 4.0 / (2 * n + 1);  
		pi = pi + sign * term;     
		sign = -sign;              
		n++;
		cout << n << "\t" << pi << endl; 
	}
	cout << "\nPi first reaches 3.14 at term number: " << n << endl;
	system("pause");
	return 0;
}