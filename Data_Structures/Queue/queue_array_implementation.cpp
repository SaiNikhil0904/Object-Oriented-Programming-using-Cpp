#include<iostream>
using namespace std;

int queue[5],front=-1,rear=-1,n=5,val;

void Insert(){
  if(rear== n-1){
    cout<<"Overflow"<<endl;
    return;
  }
  else{
    if(front==-1){
      front=0;
    }
  cout<<"Insert element: ";
  cin>>val;
  rear++;
  queue[rear]=val;
}
  }

void Delete(){
  if(front==-1||front>rear){
    cout<<"Queue Underflow"<<endl;
    return;
    }
  else
  {
    cout<<"Element deleted "<<queue[front]<<endl;
    front++;
  }
}

void Display(){
  if(front==-1){
    cout<<"Queue is empty"<<endl;
  }
  else{
    cout<<"Queue element are: ";
    for(int i=front;i<=rear;i++){
      cout<<queue[i]<<" ";
    }
    cout<<endl;
  }
}

int main() 
{
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element from queue"<<endl;
    cout<<"3) Display all the elements of queue"<<endl;
    cout<<"4) Exit"<<endl;
do 
{
    cout<<"Enter your choice : ";
    cin>>ch;
    switch (ch) 
    {
        case 1: Insert();
        break;
        case 2: Delete();
        break;
        case 3: Display();
        break;
        case 4: cout<<"Exit"<<endl;
        break;
        default: cout<<"Invalid choice"<<endl;
    }
} 
while(ch!=4);
return 0;
}