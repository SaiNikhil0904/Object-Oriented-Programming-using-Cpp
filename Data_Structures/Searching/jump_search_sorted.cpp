#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
int Input[]={10,30,90,115,117,210,344,365,434,522},i,Search,jump,j,t=0;
int n=sizeof(Input)/sizeof(Input[0]);
jump=sqrt(n);
cout<<"Enter the value: ";
cin>>Search;
sort(Input,Input+n);
cout<<"sorted array ";
for(i=0;i<n;i++)
{
  cout<<Input[i]<<" ";
}
for(i=0;i<10;i=i+jump){
  if(Input[i]==Search){
    t++;
    j=i;
  }
  else if(Input[i]>Search)
  {
    for(i=i-jump;i<n;i++)
    {
      if(Input[i]==Search)
      {
        t++;
        j=i;
      }}}
}
cout<<"\n";
if(t!=0)
{
  cout<<"Found: "<<j;
}
else
{
  cout<<"Not found";
}
}
