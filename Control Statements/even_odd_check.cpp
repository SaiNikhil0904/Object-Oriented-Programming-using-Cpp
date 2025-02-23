#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(x%2==0)
    {
        cout<<"The number '"<<x<<"' is even"<<endl;
    }
    else
    {
        cout<<"The number '"<<x<<"' is odd";
    }    
    return 0;
}