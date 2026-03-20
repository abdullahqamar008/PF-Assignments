//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:6

#include<iostream>
#include<cmath>//i use a different yet very interesting logic i use cmath to calculate square root of a number
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
for(int i=2;i<=sqrt(n);i++){
if(n%i==0){
isPrime=false;
break;
}
}//yes here i use square root logic instead of n-1 logic wheter both are correct i use sqare root because when user enters a bigger number like 36 it will take square root of that 36 and make smaller factors of it 6! and then use each factorial in modulus function in this way whenever user enters a bigger number computer doesnt need to check specificially only that number it will also become complex for dry run as well so i make a standard logic of square root number instead of using n-1 in it.
if(isPrime)
cout<<n<<" is a prime number"<<endl;
else
cout<<n<<" is not a prime number"<<endl;
}
return 0;
}
