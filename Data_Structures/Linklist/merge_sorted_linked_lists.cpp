#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insert(Node *&head, int val) {
    Node *n = new Node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

Node *merge(Node *&head1, Node *&head2) {
    Node *p1 = head1;
    Node *p2 = head2;
    Node *dummyNode = new Node(-1);
    Node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL) {
        if (p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
        } else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL) {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL) {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

void display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node *head1 = NULL;
    Node *head2 = NULL;

    int arr1[] = {1, 4, 6, 8};
    int arr2[] = {3, 5, 9};

    for (int i = 0; i < 4; i++) {
        insert(head1, arr1[i]);
    }
    cout << "The First array is: ";
    display(head1);

    for (int i = 0; i < 3; i++) {
        insert(head2, arr2[i]);
    }
    cout << "The Second array is: ";
    display(head2);

    Node *newhead = merge(head1, head2);
    cout << "Final array is: ";
    display(newhead);

    return 0;
}