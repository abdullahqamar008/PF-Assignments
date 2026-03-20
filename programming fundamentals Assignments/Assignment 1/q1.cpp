/*Name:Abdullah Qamar
BS (SE) 1A
Programming Fundamentals Assignment.2
Question.1*/

#include<iostream>
using namespace std;
int main()
{
	int totalEggs;
	cout<<"Enter total number of eggs";
	cin>>totalEggs;
	//as described in the instructions only positive input should be taken.
	if(totalEggs<=0);
	cout<<"input should be a positive integer"<<endl;
	
	//main code starts from here
	int eggsPack30=totalEggs/30;
	int leftOvereggs30=totalEggs % 30;
	cout<<"Number of 30 eggs packing"<<" "<<eggsPack30<<"\t"<<"Number of leftover eggs"<<" "<<leftOvereggs30<<" "<<endl;
	
	int eggsPack24=totalEggs/24;
	int leftOvereggs24=totalEggs % 24;
	cout<<"Number of 24 eggs packing"<<" "<<eggsPack24<<"\t"<<"Number of leftover eggs"<<" "<<leftOvereggs24<<" "<<endl;
	
	int eggsPack18=totalEggs/18;
    int leftOver18=totalEggs % 18;
    cout<<"Number of 18 eggs packing"<<" "<<eggsPack18<<"\t"<<"Number of leftover eggs"<<" "<<leftOver18<<" "<<endl;
    
    int eggsPack12=totalEggs/12;
    int leftOver12=totalEggs % 12;
    cout<<"Number of 12 eggs packing"<<" "<<eggsPack12<<"\t"<<"Number of leftover eggs"<<" "<<leftOver12<<" "<<endl;
    
    int eggsPack6=totalEggs/6;
    int leftOver6=totalEggs % 6;
    cout<<"Number of 6 eggs packing"<<" "<<eggsPack6<<"\t"<<"Number of leftover eggs"<<" "<<leftOver6<<" "<<endl;
	
	system("pause");
	return 0;	
	
}
