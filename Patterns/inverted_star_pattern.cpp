#include <iostream>
using namespace std;

int main()
{
    int i,j;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5-i;j++)              
         {                               
             cout<<" * ";                  
         }                               
         cout<<"\n";
     }
    return 0;
}