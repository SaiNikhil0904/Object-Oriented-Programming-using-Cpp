#include <iostream>
using namespace std;
void mergesort(int a[],int b, int c);
void merge(int a[],int b,int m,int c);
void merge(int a[],int b,int m,int c)
{        
           int n1=m+1-b,n2=c-m;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++)
    {
        x[i]=a[b+i];
    }
    for(int j=0;j<n2;j++)
    {
        y[j]=a[m+1+j];
    }
    int i=0,j=0,k=b;
    while(i<n1 && j<n2)
    {
        if(x[i]<=y[j])
        {
            a[k]=x[i];
            i++;
        }
        else
        {
            a[k] = y[j];
            j++;
        }
        k++;
        }
     while (i < n1)
    {
        a[k] = x[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        x[k] = y[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int b, int c)
{
    if(b>=c)
    {
        return ;
    }
    else
    {
        int m=(b+c)/2;
        mergesort(a,b,m);
        mergesort(a,m+1,c);
        merge(a,b,m,c);
    }
}
int main()
{
    int z, a[z];
    cout<<"Enter the Size of array: ";
    cin>>z;
    cout<<"Enter the Elements in the array: ";
    for(int i=0;i<z;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,z-1);
    cout<<"After sorting: ";
    for(int i=0;i<z;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}