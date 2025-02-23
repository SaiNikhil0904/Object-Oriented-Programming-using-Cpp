#include <iostream>
using namespace std;
class Base
{
    
};
class Drived: public Base
{
    
};
int main()
{
    Base *ptr;
    Drived obj;
    ptr=&obj; //we can give the address of drived class object to the base class pointer.
    
    /*Drived *ptr;
    Base obj1;
    ptr1=&obj1;  //we can't assign the address of base class object to the Drived class pointer. */
    return 0;
}