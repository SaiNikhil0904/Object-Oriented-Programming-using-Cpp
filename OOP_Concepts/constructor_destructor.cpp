#include <iostream>
using namespace std;

class vol
{
  int side,v;
  public:
    vol() 
    {
        cout<<"Constructor for Side = 10"<<endl;
        side=10;    
    }
void assign()
{
  cout<<"\n Enter the value for side of cube: ";
  cin>>side;
}
void show()
{
    v=side*side*side;
    cout<<"Volume of cube: "<<v;
}
~vol()
{
    cout << "\nDestructor function"<<" "<<side;
}
};

int main()
{
  vol v,v1,v2;
  v.show();
  v1.assign();
  v1.show();
  v2.assign();
  v2.show();
}