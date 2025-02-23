#include<iostream>
using namespace std;

void sales()
{
double sales[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
for(int i=0;i<20;i++)
{ cout<<"Sale number"<<i+1<<"-"<<sales[i]<<endl;}
}
void allow(){
   double allowance[75];
  for(int i=0;i<75;i++){
    allowance[i]=i+1;
  }
  for(int i=0;i<75;i++){
    allowance[i]=1000+allowance[i];
    cout<<allowance[i]<<" ";
  }
}

void number(){
  int number[50];
  for(int i=0;i<50;i++){
    number[i]=0;
    cout<<number[i];
  }
}

void gpa(){
float GPA[10]={3.2,3.4,2.3,3.5,4.0,2.3,3.1,1,2,2};
cout<<endl<<"GPA"<<endl;
  for(int i=0;i<10;i++){
    cout<<GPA[i]<<endl;
  }
}

int main()
{
sales();
allow();
number();
gpa();
}