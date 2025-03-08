#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *top = NULL;

bool isempty() {
    return top == NULL;
}

void push(int value) {
    Node *ptr = new Node();
    ptr->data = value;
    ptr->next = top;
    top = ptr;
}

void pop() {
    if (isempty())
        cout << "Stack is Empty";
    else {
        Node *ptr = top;
        top = top->next;
        delete(ptr);
    }
}

void displayStack() {
    if (isempty())
        cout << "Stack is Empty";
    else {
        Node *temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
}

int main() {
    int choice, flag = 1, value;
    while (flag == 1) {
        cout << "1.Push 2.Pop 3.displayStack 4.exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter Value: ";
                cin >> value;
                push(value);
                cout << endl;
                break;
            case 2:
                pop();
                cout << endl;
                break;
            case 3:
                cout << "The values in the Stack are: ";
                displayStack();
                cout << endl;
                break;
            case 4:
                flag = 0;
                cout << "The values in the Stack are: ";
                displayStack();
                cout << endl << "It was Ended";
                break;
        }
    }
    return 0;
}