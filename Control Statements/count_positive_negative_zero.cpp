#include <iostream>
using namespace std;

int main()
{
    int input[100],a,i,Negative=0,Positive=0,Zeroes=0;
       
    cout<<"Enter Number of Elements: ";
    cin >> a;
    cout << "Enter " << a << " numbers: "<<endl;

    for(i = 0; i<a; i++)
    {cin >> input[i];}
    for(i = 0; i < a; i++)
    {
        if(input[i] < 0) 
        {Negative++;} 
        else if(input[i] > 0)
        {Positive++;} 
        else {Zeroes++;}
    }
    cout << "Number of Zeroes: " << Zeroes<<endl;
    cout << "Number of Positive Numbers: " <<Positive<<endl;
    cout << "Number of Negative Numbers: " <<Negative<<endl;
    return 0;
}