/*Name:Abdullah Qamar 
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.8*/

#include<iostream>
using namespace std;
int main() 
{
    int month, day, year;
    cout<<"Enter month";
	cin>>month;
    cout<<"Enter day";
	cin>>day;
    cout<<"Enter year";
	cin>>year;

    int lastTwoDigits=year%100;
    (month*day==lastTwoDigits);
    cout<<((month*day==year)
    ? "This date is magic\n"
    : "This date is not magic\n");
    system("pause");
    return 0;
}

