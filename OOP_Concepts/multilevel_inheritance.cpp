#include <iostream>
using namespace std;

class Base
{
    protected: int a,b;
    public:
        Base(int x=3, int y=4) {
            a=x;
            b=y; } };
class Drived: public Base {
    public:
        void show() {
            cout<<"value of a: "<<a<<endl;
            cout<<"value of b: "<<b<<endl; } };
class Drived2: public Drived {
    public:
        void show1()
        {
            cout<<"value of a: "<<a<<endl;
            cout<<"value of b: "<<b<<endl; } };
int main()
{
    Drived obj;
    obj.show();
    Drived2 obj2;
    obj2.show();
    return 0;
}