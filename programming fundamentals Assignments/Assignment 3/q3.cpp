//Abdullah Qamar
//BS SE 1A 
// pf assignent 4 
//question.3
#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,11,5,1,4,7};
	int n=6;
	int totalSum=0;
	//total sum
	for(int i=0;i<n;i++)
	{
		totalSum+=arr[i];
	}
	bool odd=false;
	if(totalSum%2!=0)
	{
		cout<<"element do not exist"<<endl;
		return false;
	}
	bool even=true;
	int evenSum=totalSum/2;
	 for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == evenSum)
            {
                cout << "Elements are " << arr[i] << "and " << arr[j] << endl;
                return true;
            }
        }
    }
    cout << "Elements do not exist" << endl;
    return 0;
}

