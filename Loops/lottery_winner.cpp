#include <iostream>
using namespace std;
int main()
{
    int a,b,i=0; 
    cout<<"Enter an integer number: ";
    cin>>a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if(b%2==0)
        {i++;}
    }
    if(i==3) 
    {
        cout<<"Number of Even digits in the given number is: "<<i<<endl;
        cout<<"'Lottery Winner!'"<<endl;
    }
    else if(a<0)
    {
        
    }
    else
    {
        cout<<"'Better luck Next Time!'"<<endl;}
    return 0;
}