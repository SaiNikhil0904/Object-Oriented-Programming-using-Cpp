#include <iostream>
using namespace std; 

int main()
{
 int a,b,sum,r;
 cout<<"Program to add digits of a number:-"<<endl;
 cout<<"Enter a number: ";
 cin>>a;
 for(sum=0, b=a;b;b=b/10)
 {
     r=b%10;
     sum=sum+r;
 }
 cout<<sum;
    return 0;
}