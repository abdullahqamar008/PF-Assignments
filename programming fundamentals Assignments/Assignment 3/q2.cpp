//Abdullah Qamar
//BS SE 1A
// pf assignent 4 
//question 2
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int size;
	int K;
	cout<<"enter size of array ";
	cin>>size;
	cout<<"enter elements of array ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"enter K";
	cin>>K;
	//shifting 
	for(int j=0;j<K;j++)
	{
		int lastElement=arr[size-1];//it will store last element.  
		for(int l=size-1;l>0;l--)//it will shift elements of original array with last elements.
		{
			arr[l]=arr[l-1];
		}
		arr[0]=lastElement;//to give 1 index of array we will give last element to it. 
	}
	cout<<"shifted elements of array are ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
