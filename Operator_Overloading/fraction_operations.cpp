#include<iostream>
using namespace std;

class a
{
    int i,numerator,denominator,sn,sd,cond;
    public:
        void getdata()
        {
            cout<<"Enter the Numerator: ";
            cin>>numerator;
            cout<<"Enter the Denominator: ";
            cin>>denominator;
        }
        void operator+(a a1)
        {
            if(a1.denominator!=denominator)
            {
                sn=(a1.numerator*denominator)+(numerator*a1.denominator);
                sd=(a1.denominator)*(denominator);
            }
            else
            {
                sn=a1.numerator+numerator;
                sd=a1.denominator;
            }
            if(sn>sd)
            {
                cond=sd;
            }
            else if(sd>sn)
            {
                cond=sn;
            }
        }
        void sum()
        {
            for(i=2;i<=cond;i++)
            {
                if(sn%i==0 && sd%i==0)
                {
                    sn=sn/i;
                    sd=sd/i;
                }
            }
            cout<<"Sum: "<<sn<<"/"<<sd<<endl;
        }
        a operator-(a a1)
        {
            a a3;
            if(a1.denominator!=denominator)
            {
                a3.sn=(a1.numerator*denominator)-(numerator*a1.denominator);
                a3.sd=(a1.denominator)*(denominator);
            }
            else
            {
                a3.sn=a1.numerator-numerator;
                a3.sd=a1.denominator;
            }
            return a3;
        }
        
        void sub()
        {
            if(sn>sd)
            {
                cond=sd;
            }
            else if(sd>sn)
            {
                cond=sn;
            }
            for(i=2;i<=cond;i++)
            {
                if(sn%i==0 && sd%i==0)
                {
                    sn=sn/i;
                    sd=sd/i;
                }
            }
            cout<<"Subtraction: "<<sn<<"/"<<sd<<endl;
        }
    a operator /(a a1)
    {
        a a4;
        a4.sn=a1.numerator*denominator;
        a4.sd=a1.denominator*numerator;
        return a4;
    }
    
    void div()
    {
         if(sn>sd)
        {
            cond=sd;
        }
        else if(sd>sn)
        {
            cond=sn;
        }
        else if(sn==sd)
        {
            sn=1;
            sd=1;
        }
         for(i=2;i<=cond;i++)
        {

            if(sn%i==0 && sd%i==0)
            {
                sn=sn/i;
                sd=sd/i;
            }

    }
    cout<<"Division: "<<sn<<"/"<<sd<<endl;
    }
    a operator*(a a1)
    {
        a a5;
        a5.sn=a1.numerator*numerator;
        a5.sd=a1.denominator*denominator;
        return a5;
    }
        void mul()
        {
            if(sn>sd)
            {
                cond=sd;
            }
            else if(sd>sn)
            {
                cond=sn;
            }
            for(i=2;i<=cond;i++)
            {
                if(sn%i==0 && sd%i==0)
                {
                    sn=sn/i;
                    sd=sd/i;
                }
            }
            cout<<"Multiplication: "<<sn<<"/"<<sd<<endl;
        }
};
int main()
{
    a a1,a2,a3,a4,a5,a6;
    a1.getdata();
    a2.getdata();

    a2+(a1);
    a2.sum();

    a3=a2-(a1);
    a3.sub();

    a4=a2/(a1);
    a4.div();

    a5=a2*(a1);
    a5.mul();

    return 0;
}