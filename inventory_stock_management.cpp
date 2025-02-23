#include <iostream>
using namespace std;
class Inventory
{
    string description;
    int balance,p,s,m;
    public:
    Inventory()
    {
        cout<<"Enter the Description of the product:  ";
        cin>>description;
        cout<<"Product: "<<description<<endl;
        cout<<"Enter the initial stock: ";
        cin>>balance;
        Inven();
    }
    void Inven()
    {
        if(balance<20)
        {
        cout<<"Error MIN STOCK REACHED";
        exit(0);
        } 
    }
    void Purchase()
    {
        cout<<"No of Stock to Purchase: ";
        cin>>p;
        balance=balance+p;
    }
    void Sale()
    {
        cout<<"No of Stock to Sale: ";
        cin>>s;
        balance=balance-s;
        if(balance<20)
        {
            cout<<"Min stock reached"<<endl;
            balance=balance+s;
            min();
        }
    }
    void min()
    {
        cout<<"No of Stock to Sale: ";
        cin>>m;
        balance=balance-m;
    }
    void Getstock()
    {
        cout<<description<<" Current Stock: "<<balance<<endl;
    } };
int main()
{
    Inventory I,E;
    I.Getstock();
    I.Purchase();
    I.Getstock();
    I.Sale();
    I.Getstock();
    E.Getstock();
    E.Purchase();
    E.Getstock();
    E.Sale();
    E.Getstock();
}