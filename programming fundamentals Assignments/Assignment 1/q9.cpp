/*Name:Abdullah Qamar 
BS (SE) 1A
Programming Fundamentals Assignment 2
Question 9*/

#include <iostream>s
using namespace std;
int main()
{
    char operation;
    int maximumValue;
    char allowNegative;
    int num1, num2;
    double answer, userAnswer;

    cout<<"Choose operation";
    cin>>operation;

    cout<<"Enter maximum value";
    cin>>maximumValue;

    cout<<"Are negative values allowed in the exercise?";
    cin>>allowNegative;

    int base =(maximumValue*7+3)%10;
    num1 =(maximumValue+base*2)%(maximumValue+1);
    num2 =(maximumValue+base*3)%(maximumValue+1);

    if (allowNegative=='Y')
    {
        num1=num1-maximumValue/2;
        num2=num2-maximumValue/2;
    }
    else
    {
        if(operation=='-'&&num2>num1)//If the operation is subtraction and the second number is greater than the first one we can swap them.
        {
            int temporaryValue=num1;
            num1=num2;
            num2=temporaryValue;
        }
    }
    switch (operation)
    {
        case '+':
            answer=num1+num2;
            break;
        case '-':
            answer=num1-num2;
            break;
        case '*':
            answer=num1*num2;
            break;
        case '/':
            if (num2==0)
                cout<<"Division by zero is not allowed"<<endl;           
            answer=(double)num1/num2;
            break;
        default:
            cout<<"Operation selected is not correct"<<endl;
    }
    
    cout<<"Enter answer"<<num1<<operation<<num2<<"=";
    cin>>userAnswer;

    if (userAnswer==answer)
        cout<<"Answer is correct Well done"<<endl;
    else
        cout<<"Answer is incorrect.The correct answer is"<<answer<<endl;
    system("pause");
    return 0;
}


