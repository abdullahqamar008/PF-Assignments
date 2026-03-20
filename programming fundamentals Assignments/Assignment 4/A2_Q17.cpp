//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:17

#include<iostream>
using namespace std;
int main(){
int rows;
cout<<"enter number of rows ";
cin>>rows;
for(int i=0;i<rows;i++){//it will print rows
int n=1;
for(int j=0;j<rows-i-1;j++){
cout<<"  ";//it will print spaces first. as number of spaces decreases rows increases. like for example if j becomes 1 then spaces will be 4 then an element and so on.
}
for(int k=0;k<=i;k++){
cout<<n<<"   ";  
n=n*(i-k)/(k+1);//this is the formula for pascal number it will generate next pascal number in triangle pattern. the pattern is like 1 then 11 then 121 then  1331 and so on.
}
cout<<endl;
}
return 0;
}

