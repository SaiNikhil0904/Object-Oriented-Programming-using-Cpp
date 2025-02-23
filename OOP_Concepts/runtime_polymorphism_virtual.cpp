#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void print() {
            cout<<"I am in print function of class Base"<<endl; }
        void show() {
            cout<<"I am in show function of class Base"<<endl; } };
class Drived: public Base {
    public:
        void print() {
            cout<<"I am in print function of class Drived"<<endl; }
        void show() {
            cout<<"I am in show function of class Drived"<<endl; } };
int main()
{
    Base *ptr;
    Drived obj;
    ptr=&obj;
    ptr->print();
    ptr->show();
    obj.print();
    obj.show();
    return 0;
}