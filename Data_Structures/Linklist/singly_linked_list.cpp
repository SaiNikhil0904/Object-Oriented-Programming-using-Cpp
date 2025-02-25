#include <iostream>
using namespace std;
class Node
{
    public:
        int Data;
        Node* Link;
};

void printList(Node* n)
{
    while (n != NULL) 
    {
        cout << "Data inside linked list is: "<<n->Data << " "<<endl;
        n = n->Link;
    }
}
int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    head->Data = 10;
    head->Link = second;
    second->Data = 12;
    second->Link = third;
    third->Data = 15;
    third->Link = NULL;
    
    printList(head);
    return 0;
}
