//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:14

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number ";
cin>>n;
int num=1;
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){
cout<<" ";
}
for(int k=1;k<=i;k++){
cout<<num;
num++;//same logic but it prints spaces first then numbers numbers are incremented means same number 1 is not repeated here it will become 2 then 3 then 4 and so on.
}
cout<<endl;
}
return 0;
}
