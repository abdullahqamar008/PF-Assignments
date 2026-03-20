/*Name:Abdullah Qamar 
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.5*/

#include<iostream>
using namespace std;
int main() 
{
    int amount;
    cout<<"Enter amount to withdraw";
    cin>>amount;

    if(amount > 50000)
        cout<<"Daily limit is Rs.50,000"<<endl;
    else if (amount % 500 != 0)
        cout<<"Amount must be a multiple of 500"<<endl;
    else if (amount < 500)
        cout<<"Minimum Rs.500 required"<< endl;
    else 
	{
        int note5000 = amount/5000;
        amount %= 5000;

        int note1000 = amount/1000;
        amount %= 1000;

        int note500 = amount/500;
        amount %= 500;

        cout<<"5000 Notes"<<note5000<<endl;
        cout<<"1000 Notes"<<note1000<<endl;
        cout<<"500 Notes"<<note500<<endl;
    }
    system("pause");
    return 0;
}

