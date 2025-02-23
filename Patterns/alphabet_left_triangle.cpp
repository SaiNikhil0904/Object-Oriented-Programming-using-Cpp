#include <iostream>
using namespace std;

int main()
{
   int i,j;
   char ch;
for(i=1;i<=5;i++)
{
    for(ch='A',j=1;j<=i;ch++,j++)                 
    {
     cout<<" "<<ch<<" ";
    }
    cout<<endl;
}
return 0;
}