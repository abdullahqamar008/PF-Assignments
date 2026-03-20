/*Name:Abdullah Qamar
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.7*/

#include <iostream>
#include<string.h>
using namespace std;
int main() 
{
    int n1, n2;
    cout<<"Enter first square number(1-81)";
    cin>>n1;
    cout<<"Enter second square number(1-81)";
    cin>>n2;

    if (n1<1 || n1>81 || n2<1 || n2>81) 
        cout<<"Input is not correct.Please enter numbers between 1 and 81"<<endl;
        
   int row1=(n1-1)/9+1;
    int column1=(n1-1)%9+1;
    int sum1=(row1+column1)%3;
    string color1;

    if (sum1==0)
        color1="Blue";
    else if (sum1==1)
        color1="Red";
    else
        color1="Gray";

    int row2 = (n2-1)/9+1;
    int column2 = (n2-1)%9+1;
    int sum2 = (row2+column2)%3;
    string color2;

    if (sum2==0)
        color2 ="Blue";
    else if (sum2==1)
        color2 ="Red";
    else
        color2 ="Gray";
    cout<<"Square is"<<" "<<n1<<"and colour is"<<" "<<color1<<endl;
    cout<<"Square is"<<" "<<n2<<"and colour is"<<" "<<color2<<endl;

    if (color1==color2)
        cout<<"Both squares have the same color"<<" "<<color1<<endl;
    else
        cout<<"Both squares have different colors"<<" "<<endl;
    return 0;
}

