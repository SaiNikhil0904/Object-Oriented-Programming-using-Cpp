#include<iostream>
using namespace std;
int isAutomorphic(int n)
{
    int square = n * n;
    while(n != 0)
    {
        if(n % 10 != square % 10)
        {
            return 0;}
        n /= 10;
        square /= 10;
    }
    return 1;
}
int main ()
{
    int n;
    cout<<"Enter an integer n: ";
    cin>>n;
    int sq = n * n ;
    
    if(isAutomorphic(n))
        cout << "Number: "<< n << ", Square: " << sq << " is Automorphic";
    else
        cout << "Number: "<< n << ", Square: " << sq << " is not Automorphic";
}