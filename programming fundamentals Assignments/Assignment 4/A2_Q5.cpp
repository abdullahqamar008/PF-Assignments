//Abdullah Qamar
//M25 3064 BS SE 2A
//Programming fundamentals assignment 2 
//question no:5

#include<iostream>
#include<string>//i use string here because if i use character it will only check letter not sentence which is required in question.
using namespace std;
int main(){
string clause;//clause and sentence basically same thing. Clause may be one line only. Sentence can be of multiple lines.
int count=0;
cout<<"enter a clause ";
getline(cin, clause);//this is the format of cin in string if we want to add spaces with the sentence if i dont use it the display will only be one word or merged words basically not correct by using this it will include spaces in the memory.
for(int i=0;i<clause.length();i++)
{
if(clause[i]=='e'){//here it will check each character in the input sentence and check how many times letter e is used in a sentence.
count++;
}
}
cout<<"Letter e appears "<<count<<" times";
return 0;
}

