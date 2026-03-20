//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:2

#include<iostream>
using namespace std;
//i already did this in our lab task as well the logic is same here too i have written code that user enter as input inside do loop because question says program should run infinite time user will enter any kind of positive number program will not stop it will stop only when user enter -1
int main(){
do{
int n;
cout<<"enter a number ";
cin>>n;
if(n==0){
cout<<"Please enter a positive number "<<endl;
continue; //here i put this display statement which is not necessary to clarify that when user enter 0 we can know that value entered by user is not positive it is zero
}
if(n==-1){
cout<<"user enter -1 program stops "<<endl;
break;//here i use the logic the question demands as well when user enter -1 program should break
}
}
while(true);
return 0;
}
