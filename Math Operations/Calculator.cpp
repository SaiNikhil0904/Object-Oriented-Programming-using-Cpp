#include <iostream>
using namespace std;

int main()
{
   float x;
   float y;
   float sum,sub,mul,divn;
   
   cout<<"Enter 1st Number: ";
   cin>> x;
   cout<<"Enter 2nd Number: ";
   cin>> y;
   
   sum=x+y;
   sub=x-y;
   mul=x*y;
   divn=x/y;
   cout<<"The sum is: "<<sum<<"\n";
   cout<<"The sub is: "<<sub<<"\n";
   cout<<"The mul is: "<<mul<<"\n";
   cout<<"The divn is: "<<divn<<"\n";
   cout<<" Thank You ";
    return 0;
}