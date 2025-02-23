#include <iostream>
using namespace std;

int main()
{
    int x,y;
    int z;
    cout<<"Enter 1st Number: ";
    cin>>x;
    cout<<"Enter 2nd Number: ";
    cin>>y;
    z=x;
    x=y;
    y=z;
    cout<<"\n"<<"After Swapping the values";
    cout<<"\n"<<"Value of 1st Number(x) is: "<<x<<"\n";
    cout<<"Value of 2nd Number(y) is: "<<y;

    return 0;
}