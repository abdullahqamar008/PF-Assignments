//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:12

#include<iostream>
using namespace std;
int main(){
int n=4,m=5,temp=0;//here i use temp=0 as counter variable it will store new generated values. we use n for rows and m for columns
for(int i=1;i<=5;i++){//first loop for rows.
if(i%2==1)//okey this is a very interesting logic  i used here parity logic.
for(int j=1;j<=5;j++)
cout<<++temp<<" ";//when i=1 we already know its odd it will go to odd parity check and becomes true and then goes for second loop. J=1 1<=5 condition true so ++temp 1+0=1 and it will run upto 6 times at 6 condition becomes false so we will have output 1 2 3 4 5.
if(i%2==0){//after odd condition check loop will start again i becomes 2 now we know i becomes even so it will go to even parity check condition become true.
temp+=5;//now the temp=0 is changed to temp=5 now here temp use 5 temp=temp+5 5+5=10 now temp becomes 10 here.
for(int j=1;j<=5;j++)//this is same inner loop but it check for even parity first one used to check odd parity.
cout<<temp--<<" ";//here when j=1 1<=5 condition becomes true now the new temp which is 10 now is decrement becomes 9 then again goes to loop j=2 true again goes in this condition now temp becomes 8 and so on and goes upto 5.it will display 10 9 8 7 6.
temp+=5;//now here new temp is 5 and again temp=temp+5 it will become 10. now same pattern repeat i=3 odd parity check it will display 11 12 13 14 15 then i becomes 4 goes to even parity check then it will display 20 19 18 17 16 on so on depends upon user input for n and m.
}
cout<<endl;
}
return 0;
}

