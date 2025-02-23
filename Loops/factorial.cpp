#include <iostream>
using namespace std;

int main()
{
   int a=1,b;
   cout<<"Program to print factorial of a number:- "<<endl;
   cout<<"Enter a number: ";
   cin>>b;
   cout<<"Factorial of '"<<b<<"' is: ";
   while (b>1)
   {
       a=a*b--;
   }
   cout<<a;
    return 0;
}