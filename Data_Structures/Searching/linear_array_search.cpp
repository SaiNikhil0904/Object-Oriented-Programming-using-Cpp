#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"Enter the elements: ";
    int i, number;
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout << "Enter a number to serach in the Array"<<endl;
    cin >> number;
    
    for(i = 0; i <10; i++)
    {
        if(arr[i] == number)
        {
            cout<<"Element found at index "<<i;
            break;
        }
    }
    if(i==10)
    {
        cout<<"Element not found in the Array"<<endl;
    }
    return 0;
}