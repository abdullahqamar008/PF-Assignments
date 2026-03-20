//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:7

#include<iostream>
using namespace std;
int main(){
int num,reverse=0,digit;//we write reverse=0 to avoid having any garbage value.
cout<<"enter a number ";
cin>>num;
while(num!=0)
{
digit=num%10;//we use mode because it will return last digit which user enters like if user enters 54 it will return 4. This is the main area where revese of number occurs.
reverse=reverse*10+digit;//this will shift the digits.
num=num/10;//it will remove the last digit.
}
cout<<"Reverse number are "<<reverse;
return 0;
}

