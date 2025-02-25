#include <iostream> 
using namespace std; 
bool b1 = false, b2 = false, b3 = false; 
bool Age(int age) 
{
    if (age > 18 && age < 25) 
    { 
        b1 = true;
        return b1; 
    } 
}
bool Height(double height) 
{ 
    if (height >= 5.2 && height <= 5.6) 
    { 
        b2 = true; 
        return b2; 
    } 
}
bool Weight(int weight) 
{ 
    if (weight >= 45 && weight <= 60) 
    {
        b3 = true; 
        return b3; 
    } 
}
int main() 
{ 
    int z=0; 
    int a,w,y; 
    double h; 
    cout << "Enter number of People:"; 
    cin >>y; 
    if (y>0 && y<=3) 
    { 
        for (int x = 1; x <= y; x++) 
        { 
            cout << "Enter the age of Person "<<x<<" : "; 
            cin >> a; 
            cout <<"Enter the Height of the person "<<x<<" : "; 
            cin >> h; 
            cout << "Enter the Weight of the person "<<x<<" : "; 
            cin >> w; 
            Age(a); 
            Weight(w); 
            Height(h); 
            if (b1 == true && b2 == true && b3 == true) 
            {z++;} 
        } 
        cout <<z; 
    } 
    else 
    {cout<<"Error"<<endl<<"Try Again"<<endl;} 
    return 0; 

}