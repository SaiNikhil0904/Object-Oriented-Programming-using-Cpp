#include <iostream>
using namespace std;

int main()
{
    int N1,N2=0;
    cout<<"Please Enter First Number 'N1': ";
    cin>>N1;
    cout<<"Please Enter Second Number 'N2': ";
    cin>>N2;
    if((N1^N2)==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}