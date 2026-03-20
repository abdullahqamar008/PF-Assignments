/*Name:Abdullah Qamar
 BS(SE) 1A
Programming Fundamentals  Assignment #2
Question #10*/

#include <iostream>
using namespace std;
int main() 
{
    int choice;
    char user, again;
    int num1, num2, num3;
    int guess1, guess2, guess3;
    int matches=0;//to remove garbage value

    cout<<"Guessing Games"<<endl;
    cout<<"1.Higher or Lower"<<endl;
    cout<<"2.Paper,Scissors,Rock"<<endl;
    cout<<"3.Guess the Number"<<endl;
    cout<<"4.Quit"<<endl;
    cout<<"Enter your choice";
    cin>>choice;

    // Asking user Higher or Lower
    if (choice==1) 
	{
        cout<<"Enter first number (1 to 20)";
        cin>>num1;
        cout<<"Enter second number (1 to 20)";
        cin>>num2;

        cout<<"Will the second number be Higher or Lower?";
        cin>>user;

        if (user=='H'||user=='h') 
		{
            if (num2>num1)
                cout<<"Correct.The second number is higher"<<endl;
            else
                cout<<"Wrong.The second number is lower"<<endl;
        }
        else if (user=='L'||user=='l') 
		{
            if(num2<num1)
                cout<<"Correct.The second number is lower"<<endl;
            else
                cout<<"Wrong.The second number is higher"<<endl;
        }
    }
    //Paper,Scissors,Rock.It is case sensitive and only valid for upper case letters. if we input lower case letters it will not show correct statement
    else if (choice==2) 
	{
        int computerChoice;
        cout<<"Enter number for computer(1=Paper,2=Scissors,3=Rock)";
        cin>>computerChoice;

        cout<<"Enter user choice(P for Paper,S for Scissors,R for Rock)";
        cin>>user;

        if(computerChoice==1)
            cout<<"Computer chose Paper"<<endl;
        else if (computerChoice==2)
            cout<<"Computer chose Scissors"<<endl;
        else if (computerChoice==3)
            cout<<"Computer chose Rock"<<endl;

        if ((user=='P'&&computerChoice==3)||(user=='S'&&computerChoice==1)||(user=='R'&&computerChoice==2)) 
		{
            cout<<"You win"<<endl;
        }
        else if ((user=='P'&&computerChoice==1)||(user=='S'&&computerChoice==2)||(user=='R'&&computerChoice==3)) 
		{
            cout<<"It's a tie"<<endl;
        }
        else 
		{
            cout<<"You lose"<<endl;
        }
    }
    //Guessing the Numbers
    else if (choice==3) 
	{
        cout<<"Enter three secret numbers(0 to 9)";
        cin>>num1>>num2>>num3;
        cout<<"Now guess three numbers";
        cin>>guess1>>guess2>>guess3;
        if (guess1==num1||guess1==num2||guess1==num3)
            matches++;
        if(guess2==num1||guess2==num2||guess2==num3)
            matches++;
        if (guess3==num1||guess3==num2||guess3==num3)
            matches++;
        if (guess1==num1&&guess2==num2&&guess3==num3)
            cout<<"Three matching in exact order"<<endl;
        else if (matches==3)
            cout<<"Three matching not in order"<<endl;
        else if (matches==2)
            cout<<"Two numbers match"<<endl;
        else if (matches==1)
            cout<<"One number match"<<endl;
        else
            cout<<"No matches"<<endl;
        cout<<"Correct numbers were"<<" "<<num1<<" "<<num2<<" "<<num3<<endl;
    }

    else if (choice==4) 
	{
        cout<<"Goodbye"<<endl;
    }
    else 
	{
        cout<<"Invalid choice"<<endl;
    }
    system("pause");
    return 0;
}
