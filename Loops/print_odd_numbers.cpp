#include <iostream>
using namespace std;

int main()
{
    int a,b,count=0;
    cout<<"Program to print old numbers:- "<<"\n";
    cout<<"Enter a number: ";
    cin>>a;
    for(b=1; b<a; b++)
    {
        if(b%2==1)
        {
            cout<<b<<" ";
        }
    }
    return 0;
}