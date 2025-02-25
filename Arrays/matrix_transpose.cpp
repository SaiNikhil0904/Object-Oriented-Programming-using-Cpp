#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int a[10][10];
    int b[10][10];
    cout<<"Enter the values: "<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];}
    }
    cout<<"BEFORE TRANSPOSE: "<<endl;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            cout<<" "<<a[i][j];}
        cout<<endl;
    }   
    cout<<"AFTER TRANSPOSE: "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            b[i][j]=a[j][i];}
    }  
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cout<<" "<<b[i][j];
        }cout<<endl;
    } 
    return 0;
}