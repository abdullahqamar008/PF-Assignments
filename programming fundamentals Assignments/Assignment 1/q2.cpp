/*Name:Abdullah Qamar
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.2*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double i, u = 1.234, p = 3.334;
    cout<<"Enter the value of i";//we only have to input positive values
    cin>>i;
    if(i <= 0)
    cout<<"Please enter a positive value for i"<<endl;
    //main code starts
    double numerator=sqrt(u*sqrt(i*i*i)*(i*i-1));
    double denominator=sqrt(p*i-2)+sqrt(p*i-1);
    double result=numerator/denominator;
    cout<<"Result is"<<" "<<result<<endl;
    system("pause");
    return 0;
}

