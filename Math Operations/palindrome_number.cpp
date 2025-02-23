#include <iostream>
using namespace std;

int main()
{
    int a,b,digits,rev=0;
    cout<<"Enter a positive number: ";
    cin>>b;
    a=b;
    do
    {
        digits=b%10;
        rev=(rev*10)+digits;
        b=b/10;
    }
    while(b!=0);
    cout<<"The reverse of '"<<a<<"' is: "<<rev<<endl;
    
    if(a==rev)
        cout<<"The number '"<<a<<"' is a palindrome";
    else
        cout<<"The number '"<<a<<"' is not a palindrome";

    return 0;
}