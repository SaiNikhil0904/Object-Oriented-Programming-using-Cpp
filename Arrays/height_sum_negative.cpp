#include <iostream>
using namespace std;
int main()
{
    int h[10];
    int sum_pos=0,sum_neg=0;
    int c=0;
    cout<<"Enter the values: ";
    for(int i=0;i<10;i++)
    {
        cin>>h[i];}
    for(int i=0;i<10;i++)
    {
        if(h[i]<0 && c<=5)
        {
            cout<<((-1*h[i])+65)<<" ";
            c++;}
    }
    for(int i=0;i<10;i++)
    {
        if(h[i]<0) sum_neg+=h[i];
        else
        {
            sum_pos+=h[i];}   
    }
    cout<<"\n"<<"+ve Height Sum is = "<<sum_pos<<endl<<"-ve Height Sum is = "<<sum_neg<<"\n";
    return 0;
}
