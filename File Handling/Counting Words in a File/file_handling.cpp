#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ifstream fin("input.txt"); 
 int word=1; 
 char ch;
 fin.seekg(0,ios::beg); 
 
 while(fin)
 {
  fin.get(ch);
  if(ch==' '||ch=='\n')
   word++;
 } 
 
 cout<<"\nNumber of Words="<<word<<"\n";
 fin.close(); 
 
 return 0;
}