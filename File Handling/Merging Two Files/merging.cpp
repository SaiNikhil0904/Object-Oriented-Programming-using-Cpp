#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  fstream f1,f2,f3; 
  string str1,str2;
  
  f1.open("input1.txt",ios::in);
  f2.open("input2.txt",ios::in);
  f3.open("input3.txt",ios::out);

   while(getline(f1, str1))
   { 
         f3<<str1; 
         f3<<endl;
    }

   while(getline(f2, str2))
   {
         f3<<str2;
         f3<<endl;
    }
  f1.close();
  f2.close();
  f2.close();
}