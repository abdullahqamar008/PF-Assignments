/*Name:Abdullah Qamar 
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.3*/

#include<iostream>
using namespace std;
int main()
{
    short num; //16-bit integer
    cout<<"Enter a 16-bit integer";
    cin>>num;
    short result=(num<<6)-num;
    cout<<"Result is"<<" "<<result<<"\n";
    system("pause");
    return 0;
}
