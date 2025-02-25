#include<iostream>
#include <stdio.h>
using namespace std;
#define SIZE 6

int array[5];

int front = -1, rear = -1;

int isFull(){
if ((front == rear + 1) || (front == 0 && rear == 5 - 1)){
return 1;
}
return 0;
}

int isEmpty(){
if (front == -1)
{
return 1;
}
return 0;
}

void enqueue(int value)
{
if (isFull())
cout<<"Can't add the queue is full"<<endl<<"Overflow"<<endl;
else
{
if (front == -1)
front = 0;
rear = (rear + 1) % 5;
array[rear] = value;
cout<<value<<" was added"<<endl;
}
}

int dequeue() {
int element;
if (isEmpty()) {
cout<<"Can't add the queue is empty"<<endl;
return (-1);
} 
else {
element = array[front];
if (front == rear) {
front = -1;
rear = -1;
}

else {
front = (front + 1) % 5;
}
cout<<"dequeued "<<element<<endl;
return (1);
}
}

void print(){
int i;
if (isEmpty())
cout<<"Empty Queue"<<endl;
else
{
cout<<"\nThe queue looks like: "<<endl;

for (i = front; i != rear; i = (i + 1) % 5)
{
cout<<array[i]<<" ";
}
cout<<array[i]<<endl;
}
}
int main() {
dequeue();
enqueue(3);
enqueue(6);
enqueue(5);
enqueue(2);
print();
dequeue();
dequeue();
print();
enqueue(7);
enqueue(8);
enqueue(9);
enqueue(5);
print();
return 0;

}