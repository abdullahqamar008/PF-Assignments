//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:9

#include<iostream>
using namespace std;
int main(){
int a=0,b=1,c;//Fibonacci series is 0 1 1 2 3 5 8 13 on so on i first initialize a=0 as its first element and b=1 as its next element 
int count=1;//i use count =1 so that it will start counting from 1 and when value change it will store in it.
cout<<"Fibonacci series is ";
while(count<=15){
cout<<a<<" ";
c=a+b;//here is the main logic of fibonacci series here i use c=a+b it means c will store sum value of a+b like 0+1 is 1 c will have 1.
a=b;//now new value of a becomes 1 instead of 0 
b=c;//now b has new value which is c =1 we calculate above.
count++;
}
return 0;
}


