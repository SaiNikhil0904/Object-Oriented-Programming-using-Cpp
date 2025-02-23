#include <iostream>
using namespace std;
class A 
{
    public:
        void display()
        {
            cout<<"I am in class A"<<endl;
        }
};
class B: public A
{
    public:
        void display()
        {
            cout<<"I am in class B"<<endl;
        }
};
class C: public B
{

};

int main()
{
    C obj;
    obj.display();
    return 0;
}