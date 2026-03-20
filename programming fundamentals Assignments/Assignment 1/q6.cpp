/*Name:Abdullah Qamar
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.6*/

#include <iostream>
using namespace std;
int main() 
{
    int days;
    cout<<"Enter number of working days";
    cin>>days;

    double rate,tax;
    if(days>=25 && days<=30) 
	{
        rate=900; 
		tax=0.05;
        cout<<"Employee Type Full time\n";
    } 
	else if (days>=15 && days<25) 
	{
        rate=850; 
		tax=0.07;
        cout<<"Employee Type Part time\n";
    } 
	else if (days<15 && days>0) 
	{
        rate=600; 
		tax=0.10;
        cout<<"Employee Type Adhoc\n";
    } 
	else 
	{
        cout<<"Number of days is not valid"<<endl;
        return 0;
    }

    double expectedSalary=days*8*rate;
    double deduction=expectedSalary*tax;
    double payment=expectedSalary-deduction;

    cout << "total expected salary before any tax deductions"<<" "<<expectedSalary<<endl;
    cout << "Tax Deduction"<<" "<<deduction<<endl;
    cout << "Payment rate after tax is"<<" "<<payment<<endl;
    system("pause");
    return 0;
}

