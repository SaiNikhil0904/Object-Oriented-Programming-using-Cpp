#include <iostream>
using namespace std;

int main()
{
int i,n,sum=0;
cout<<"enter a number";
cin>>n;
for(i=1;i<=2*n; i++)
{
    if (i%2==1)
{
    sum=sum+i;
}
}
cout<<sum;
return 0;
}