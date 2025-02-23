#include <iostream>  
using namespace std;  

int main()  
{  
int a,b,sum=0,temp;    
cout<<"Enter the Number:";    
cin>>a;    
temp=a;    
while(a>0)    
{    
b=a%10;    
sum=sum+(b*b*b);    
a=a/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number"<<endl;    
else    
cout<<"Not Armstrong Number"<<endl;   
return 0;  
}