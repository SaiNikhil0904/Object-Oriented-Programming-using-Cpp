#include <iostream>
using namespace std;
int main()
{
    int  marks[6][4],count=0;
   int i,j;
   cout<<"Enter marks:";
   for (i=0;i<6;i++){
       for(int j=0;j<4;j++)
       {
           cin>>marks[i][j];}
   }
   cout<<endl;
   for (i=0;i<6;i++){
       for(int j=0;j<4;j++){
           cout<<marks[i][j]<<" ";}
    cout<<"\n";
   }
   for (i=0;i<6;i++){
       for(int j=0;j<4;j++){
           if(marks[i][j]==marks[i+3][j]){
               count++;}
       }
   }
   if(count<5)
   {
       cout<<"FAIR EXAMINATION"<<endl;}
   else{
       cout<<"COPIED"<<endl;}
    return 0;
}