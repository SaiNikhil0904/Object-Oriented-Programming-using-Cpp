#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c;
    float Root1,Root2,i;
    float Delta;
    cout<<"Program to find all Roots of a Quadratic equation:-"<<endl;
    cout<<"Enter the value of 'a': ";
    cin>>a;
    cout<<"Enter the value of 'b': ";
    cin>>b;
    cout<<"Enter the value of 'c': ";
    cin>>c;
    cout<<"The Values of 'a','b','c' are "<<" "<<a<<" , "<<b<<" , "<<c<<endl;
    Delta = (b*b)-(4*a*c);
    cout<<"The value of Delta is: "<<Delta<<endl;
    switch(Delta>0)
    {
    case 1:
        Root1 = (-b+sqrt(Delta))/(2*a);
        Root2 = (-b-sqrt(Delta))/(2*a);
        cout <<"The two Real distinct Roots are: "<<Root1<< " & "<<Root2<<endl;
        cout<<"Root1 value is: "<<Root1<<endl;
        cout<<"Root2 value is: "<<Root2<<endl;
        break;
    case 0:
        switch(Delta<0)
        {
        case 1:
            Root1=Root2=-b/(2*a);
            i=sqrt(-Delta)/(2*a);
            cout<<"The two distinct complex roots are:- "<<endl;
            cout << "complex roots: "<< Root1 << " & "<< Root2;
            cout << "complex root: " << " + " << i << Root2 << " and " << i;
            break;
        case 0:
            Root1=Root2=-b/(2*a);
            cout << "The roots are equal and real Roots are: " << Root1 << " & " << Root2;
            break;
        }
    }
    return 0;
}