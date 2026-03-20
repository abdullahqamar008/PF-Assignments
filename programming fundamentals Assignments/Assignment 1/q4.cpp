/*Name:Abdullah Qamar 
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.4*/

#include<iostream>
using namespace std;
int main()
{
    unsigned int timeEntry;
    cout<<"Enter a two-byte Time Entry";
    cin>>timeEntry;
    unsigned int hours=(timeEntry>>12)&0xF;
    unsigned int minutes=(timeEntry>>6)&0x3F;
    unsigned int seconds=timeEntry&0x3F;
    cout<<"Time is"<<" "<<hours<<" "<<"hrs"<<" "<<minutes<<" "<<"mins"<<" "<<seconds<<" "<<" "<<"secs"<<" "<<endl;
    system("pause");
    return 0;
}
