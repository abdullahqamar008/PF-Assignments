//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:8

#include<iostream>
using namespace std;
int main(){
double num; //here i use double.if i use integer it will give zero in integer division hence whole answer will become zero.
int steps=0;
cout<<"enter a number ";
cin>>num;
while(num>=1)
{
num=num/2;
steps++;
}
cout<<"Steps included are "<<steps<<endl;
//i used cout at the end of loop to show only the last maximum number of steps used in it if i put it inside loop it will give every number of steps which is also a way to show the whole behind process in it.
return 0;
}

