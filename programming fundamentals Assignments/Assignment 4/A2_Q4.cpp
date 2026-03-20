//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:4

#include<iostream>
using namespace std;
int main(){
int n;
int factorial=1;//if we put zero here then every factorial will become zero
cout<<"enter a number ";
cin>>n;
for(int i=1;i<=n;i++){
factorial*=i;
cout<<factorial<<endl;//it will display all factorials of the input number.
}
return 0;
}

