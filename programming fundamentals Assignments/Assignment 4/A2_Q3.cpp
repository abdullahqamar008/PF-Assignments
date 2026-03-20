//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:3

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number ";
cin>>n;
bool isPrime=true;
if(n<=1){
cout<<n<<" is not a prime number"<<endl;
}//while this condition is not necessary but i like to add it because sometime user enters 1 it may show 1 is prime but in reality 1 is not prime so i used this condition to make a seperate case whenever user enters 1
else{
for(int i=2;i<n;i++){
if(n%i==0){
isPrime=false;
break;
}
}//yes here i use simple logic. when user enters a bigger number like 36 computer needs to check specificially only that number and have to make so many repeated factors of that number and then it will check each factor in modulus it will also become complex for dry run as well.
if(isPrime)
cout<<n<<" is a prime number"<<endl;
else
cout<<n<<" is not a prime number"<<endl;
}
return 0;
}

