#include <iostream>
using namespace std;

class student              
{
  char name [20];   
  float age;        
  public:                
      void getdata();   
      void display();  
};
void student:: getdata()
{
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"\n"<<"age: ";
    cin>>age;
}
void student::display()
{
    cout<<"Student name is: "<<name<<"\n";
        cout<<"age: "<<age<<"\n";
}
int main()
{
   student obj1,obj2;
    obj1.getdata(); 
    obj2.getdata(); 
    obj1.display();
    obj2.display();
    return 0;
}