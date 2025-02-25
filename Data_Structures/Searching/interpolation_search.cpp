#include <iostream>
using namespace std;
int interpolationSearch ( int a[] , int l, int s)
{
int start, end , pos;
start= 0;
end = l-1;
 
while( start<=end && s>=a[start] && s<=a[end])
{
 
 pos = start + (((double)(end-start)/(a[end]-a[start]))*(s-a[start]));
 
if (a[pos] == s)
 return pos;
if (s > a[pos])
 start = pos + 1;
else
 end = pos-1;
}
return -1;
 
}
int main()
{
int i,s,l;
int a[16]={3,7,9,10,12,30,90,100, 115,117,190, 210,344,365,434,522};
 l=sizeof a/sizeof a[0];
 cout<<"ENTER THE NUMBER TO FIND : ";
 cin>>s;
int index = interpolationSearch(a, l, s);
if(index != -1)
 cout<<"NUMBER FOUND AT INDEX : "<<index;
else
 cout<<"NUMBER NOT FOUND ";
 
return 0;
}
