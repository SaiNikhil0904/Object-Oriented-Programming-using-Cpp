#include <iostream>
using namespace std;

int main()
{
    int hh,mm,ss;
    cout<<"Enter the values:- "<<endl;
    cout<<"Enter the Number of Hours (0-23): ";
    cin>>hh;
    cout<<"Enter the Number of Minutes (0-59): ";
    cin>>mm;
    cout<<"Enter the Number of Seconds (0-59): ";
    cin>>ss;
    if (hh >= 0 and hh <= 23)
    {
        if (mm >= 0 and mm <= 59)
        {
            if (ss >= 0 and ss <= 56)
            {
                cout<<"Time: "<<hh<<":"<< mm << ":" << ss;
            }
            else
            {cout << "Wrong input";}
        }
        else
        {cout << "Wrong input";} 
    }
    else
    {cout << "Wrong input";}

    return 0;
}