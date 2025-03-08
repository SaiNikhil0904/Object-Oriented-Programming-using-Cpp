#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    int priority;
    Node *next;
};

Node *front = NULL;

void display() {
    if (front == NULL) {
        cout << "Priority-Queue is empty" << endl;
        return;
    }

    Node *a = front;
    cout << "Priority-Queue elements are: ";
    while (a) {
        cout << a->data << " ";
        a = a->next;
    }
    cout << endl;
}

void insert(int data, int priority) {
    Node *temp = new Node;
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;

    if (front == NULL || priority >= front->priority) {
        temp->next = front;
        front = temp;
    } else {
        Node *a = front;
        Node *b = NULL;
        while (a && priority <= a->priority) {
            b = a;
            a = a->next;
        }
        temp->next = b->next;
        b->next = temp;
    }
}

void Delete() {
    if (front == NULL) {
        cout << "Underflow" << endl;
        return;
    } else {
        Node *temp = front;
        cout << "Deleted Item is: " << temp->data << endl;
        front = temp->next;
        free(temp);
    }
}

int main() {
    insert(2, 3);
    insert(4, 5);
    insert(11, 9);
    insert(9, 7);
    display();
    Delete();
    display();
    Delete();
    display();
    return 0;
}