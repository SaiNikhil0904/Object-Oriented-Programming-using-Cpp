#include <iostream>
using namespace std;
class Node
{
    public:
        int Data;
        Node* Link;
};

void insertAfter(Node* Prev_Node, int New_Data)
{
    if (Prev_Node == NULL) 
    {
        cout << "The given previous node cannot be NULL";
        return;
    }
    Node* New_Node = new Node();
    New_Node->Data = New_Data;
    New_Node->Link = Prev_Node->Link;
    Prev_Node->Link = New_Node;
}

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
    
    insertAfter(head,11);
    
    printList(head);
    return 0;
}
