#include <iostream>
using namespace std;

class A 
{
    public:
        int a=100, b=200;  
        A(int a, int b)
        {
            cout<<a<<" "<<this->a+this->b<<endl; 
        }
};
int main()
{
    A obj1(10, 20);
    A obj2=A(50,60);
    return 0;
}