#include <iostream>
using namespace std;

class node
{
public:
    int data;

    node *nextNode;

    node(int val)
    {

        data = val;
        nextNode = NULL;
    }
};

void InsertNode(node *&head, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->nextNode != NULL)
    {
        temp = temp->nextNode;
    }
    temp->nextNode = n;
}
void PrintLinkedList(node *&Head)
{

    node *Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->data << endl;

        Temp = Temp->nextNode;
    }
}
void inseartattail(node *&head,int data){
    
}

int main()
{

    //  here 56is a data value

    node *head = NULL;
    InsertNode(head, 2);
    InsertNode(head, 5);
    InsertNode(head, 7);

    PrintLinkedList(head);
}
