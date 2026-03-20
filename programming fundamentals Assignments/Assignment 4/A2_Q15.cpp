//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:15


#include<iostream>
using namespace std;
int main(){
int n=5;
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){//this is the basic diamond logic it prints upper triangle pyramid.
cout<<" ";
}
for(int j=1;j<=2*i-1;j++){//here i use this condition if there is edge point then it will display stars if not then it will print gaps.but this is for upper triangle only.
if(j==1||j==2*i-1)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
for(int i=n-1;i>=1;i--){//this prints lower inverted triangle pyramid.
for(int j=1;j<=n-i;j++){
cout<<" ";
}
for(int j=1;j<=2*i-1;j++){
if(j==1||j==2*i-1)////here i use the same above condition if there is edge point then it will display stars if not then it will print gaps.but it will be for lower inverted triangle.

cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
return 0;
}
