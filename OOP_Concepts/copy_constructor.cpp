#include<iostream>
using namespace std;

class A 
{
  private: 
    int x, y;
  public:
  A()
  {                    
    x=20; y=50;
  }  
   A(A &obj)
    {
        cout<<"I am a copy constructor"<<endl;
        x=obj.x;
        y=obj.y;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    A a1; 
    a1.display();
    A a2 (a1); 
    a2.display();
    return 0;
}