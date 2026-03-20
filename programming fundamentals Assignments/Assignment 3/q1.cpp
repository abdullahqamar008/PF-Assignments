//Abdullah Qamar
//BS SE 1A
// pf assignent 4 
//question 1
#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int count = 0; //for checking unique numbers
    cout << "enter 20 numbers between 10 and 100\n";
    for (int i = 0; i < 20; i++)
    {
        int num;
        cin >> num;
        if (num < 10 || num > 100)
        {
            cout << "value entered is not correct\n";
            i--;
            continue;
        }
        bool duplicate = false; //checking for duplicate numbers
        for (int j = 0; j < count; j++)
        {
            if (arr[j] == num)
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            arr[count] = num;
            count++;
        }
    }
    cout << "unique numbers user entered are: ";
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

