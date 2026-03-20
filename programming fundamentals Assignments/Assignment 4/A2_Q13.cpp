//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:13

#include<iostream>
using namespace std;
int main(){
int n=5;
char ch='A';
for(int i=1;i<=n;i++){//this loop prints number of rows
for(int j=1;j<=i;j++){//this loop prints number of columns
cout<<ch;//we use ch because we want to display letters.
ch++;//if i did not use ch++ it will display same ch A in whole pattern so A must be incremented i-e ASCII value of A is 65 should become 66 which is for B then it will become C then D and so on.  
}
cout<<endl;
}
return 0;
}
