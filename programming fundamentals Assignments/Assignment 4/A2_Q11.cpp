//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:11

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter height ";
cin>>n;
for(int i=1;i<=n;i++){//loop for rows 
for(int j=1;j<=n-i;j++){//loop for spaces
cout<<" ";//here it print spaces before stars.//As value of i increase spaces decreases for example we input n=5 goes in loop i=1 1<=5 spaces become 4 and one star will print this is actually pyramid logic i used here.
}
for(int k=1;k<=(2*i-1);k++){//here i use 2*i because we want odd number of stars 1 then 3 then 5 and so on so this condition will give odd values to print stars.(Pyramid logic)
cout<<"*";
}
cout<<endl;
}
for(int i=1;i<=n;i++){//this is the bottom trunk part this loop is for the rows of the trunk i mean height.
for(int j=1;j<=n-2;j++){//this loop will first create spaces.
cout<<" ";
}
cout<<"***"<<endl;//after required spaces it will display *** three stars together forming the base of trunk and will go upwards as user input different values of height.
}
return 0;
}

