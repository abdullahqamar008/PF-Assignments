/*Abdullah Qamar
BS SE 1A
PROGRAMMING FUNDAMENTALS ASSIGNMENT 3
QUESTION 1*/
#include <iostream>
using namespace std;
int main() 
{
	double x = -2.0, y = -1.0;
	double minX = x, minY = y;
	double minVal = (1 - x) * (1 - x) + 100 * (y - x * x) * (y - x * x);
	while (x <= 2.0)
	{
		y = -1.0;
		while (y <= 3.0)
		{
			double f = (1 - x) * (1 - x) + 100 * (y - x * x) * (y - x * x);
			if (f < minVal)
			{
				minVal = f;
				minX = x;
				minY = y;
			}
			y = y + 0.01; 
		}
		x = x + 0.01; 
	}
	cout << "Minimum value is f(" << minX << ", " << minY << ") = " << minVal << endl;
	system("pause");
	return 0;
}