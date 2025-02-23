#include <iostream>
using namespace std;  

int main()  
{  
  int a,b,c,count=0;  
  cout<<"Program to check a number is prime or not:- "<<endl;
  cout<<"Enter a positive number: ";  
  cin>>a;  
  b=a/2;  
  for(c=2; c<=b; c++)  
  {  
      if(a%c== 0)  
      {  
          cout<<a<<" is not Prime number"<<endl;  
          count=1;  
          break;  
      }  
  }  
  if (count==0)  
      cout<<a<< " is Prime number"<<endl;  
  return 0;  
}