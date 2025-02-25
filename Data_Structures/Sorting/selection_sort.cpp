#include<iostream>
using namespace std;

int main()
{
    int i,j,temp,n,ctr=0;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        int small,pos;
        for(i=0;i<n-1;i++)
        {
            small=arr[i];
            pos=i;
            for(j=i+1;j<n;j++)
            {
                if(arr[j]<small)
                {
                    small = arr[j];
                    pos=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[pos]; 
            arr[pos]=temp;
            cout<<"Iteration: "<<++ctr<<" :";
            for(j=0;j<n;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
