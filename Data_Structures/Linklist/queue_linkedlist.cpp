#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

struct Queue {
    Node *front, *rear;

    Queue() {
        front = rear = NULL;
    }

    void enQueue(int x) {
        Node* temp = new Node(x);
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deQueue() {
        if (front == NULL)
            return;
        Node* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete(temp);
    }

    void display() {
        Node *temp = front;
        while (temp != NULL) {
            cout << temp->data << "\t";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enQueue(1);
    q.enQueue(6);
    q.deQueue();
    q.deQueue();
    q.enQueue(5);
    q.display();
    q.enQueue(4);
    q.enQueue(2);
    q.deQueue();
    q.display();
    cout << "Front: " << (q.front)->data << endl;
    cout << "Rear: " << (q.rear)->data;
}
