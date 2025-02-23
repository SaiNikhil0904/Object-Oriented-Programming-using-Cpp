#include <iostream>
using namespace std;

class Rectangle
{
    float width, length, area, perimeter; 
    public:
        Rectangle() 
        {
          width=1;
          length=1;
          area=0;
        }
    void setwidth()
    {
        cout<<"Enter width of rectangle: ";
        cin>>width;
        if(width<0 || width>20)
        {
            cout<<"You cannot enter width greater than 20 and less than 0"<<endl;
        }
    }
    void setlength() 
    {
        cout<<"Enter length of rectangle: ";
        cin>>length;
        if(length<0 || length>20)
        {
            cout<<"You cannot enter length greater than 20 and less than 0"<<endl;
        }
    }
    void calculation() 
    {
        area=width*length; 
        perimeter=2*(length+width);
    }
    void display() 
    {
        cout<<"Area of rectangle: "<<area<<endl;
        cout<<"Perimeter of rectangle: "<<perimeter<<endl;
    }
};
int main()
{
    Rectangle c; 
    char ask;
    c.setwidth();
    c.setlength();
    c.calculation();
    c.display();
    return 0;
}