//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:16

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number ";
cin>>n;
for(int i=1;i<=n;i++){
for (int j=1;j<=n-i;j++){
cout<<" ";
}
for(int k=1;k<=i;k++){
cout<<"\\";
}//here i used the right triangle logic which prints spaces first then prints \ .
cout<<"|";//i was previously adding a loop to seperate both triangles which is not correct so i simply add cout | and it actually works here but i failed to achieve one | at the top of the pattern.
for(int k=1;k<=i;k++){
cout<<"/";
}
cout<<endl;//this condition is for simple right triangle.
}
int height=2;//now i add height to make bottom tree trunk i used height=2 
for(int i=0;i<height;i++){
for(int j=1;j<=n-1;j++){
cout<<" ";
}
cout<<"|||"<<endl;//it will first print spaces then prints ||| but in two rows. below is the resason why.
}
for(int j=1;j<=n-2;j++){
cout<<" ";
}
cout<<"_|||_"<<endl;//this is the reason because here we are adding _ this bar to make it specific and different from other two bars.
return 0;
}



