// You are given a Single Linked list of any length
// Delete a given position Node from it

#include <iostream>

using namespace std;

class Node
{
public:
       int data;
       Node *next;

       Node(int data)
       {
              this->data = data;
              this->next = NULL;
       }
       ~Node()
       {
              cout << "node with value of " << this->data << "is deleted" << endl;

       }
};

// I want to insert a node right at the head of Linked List
void insertAtHead(Node *&head, Node *&tail, int data)
{
       // check for Empty LL
       if (head == NULL)
       {
              Node *newNode = new Node(data);
              head = newNode;
              tail = newNode;
       }
       else
       {
              // step1:
              Node *newNode = new Node(data);
              // step2:
              newNode->next = head;
              // step3:
              head = newNode;
       }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
       if (head == NULL)
       {
              Node *newNode = new Node(data);
              head = newNode;
              tail = newNode;
              return;
       }
       // step1: creatae a node
       Node *newNode = new Node(data);
       // step2: connect woth tail ndoe
       tail->next = newNode;
       // step3: update tail;
       tail = newNode;
}
void print(Node *&head)
{

       Node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << " ";
              temp = temp->next;
       }
}

int findLength(Node *&head)
{
       int len = 0;
       Node *temp = head;
       while (temp != NULL)
       {
              temp = temp->next;
              len++;
       }
       return len;
}

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
       if (head == NULL)
       {
              Node *newNode = new Node(data);
              head = newNode;
              tail = newNode;
              return;
       }
       // step1: find the position: prev & curr;

       if (position == 0)
       {
              insertAtHead(head, tail, data);
              return;
       }

       int len = findLength(head);

       if (position >= len)
       {
              insertAtTail(head, tail, data);
              return;
       }

       // ste1:find prev and curr
       int i = 1;
       Node *prev = head;
       while (i < position)
       {
              prev = prev->next;
              i++;
       }
       Node *curr = prev->next;

       // step2;
       Node *newNode = new Node(data);

       // step3:
       newNode->next = curr;

       // step4:
       prev->next = newNode;
}
void DeleteNode(Node *&head, Node *&tail, int position)
{
       if (head == NULL)
       {
              cout << "linklist is empty" << endl;
              return;
       }

       int len = findLength(head);
       if (position == 1)
       {
              Node *temp = head;
              head = head->next;
              // temp->next = NULL;
              delete temp;
              return;
       }

       if (position > len)
       {
              cout << "please enter valid position" << endl;
       }

       if (position == len)
       {
              // find prev pointer
              int i = 1;
              Node *prenode = head;
              while (i < position-1)
              {

                     prenode = prenode->next;
                     i++;

              }
              Node *temp = tail;
              prenode->next = NULL;
              tail = prenode;
              delete temp;
        return;

       }
       // fing prev and curr
       int i = 1;
       Node *prevnode = head;
       while (i < position-1)
       {
              prevnode = prevnode->next;
              i++;
       }
       Node *curr = prevnode->next;
       //
       prevnode->next = curr->next;
       //
       curr->next = NULL;
       delete curr;
}

int main()
{

       Node *head = NULL;
       Node *tail = NULL;
       insertAtHead(head, tail, 1);
       insertAtTail(head, tail, 5);
       insertAtPosition(2, 1, head, tail);
       insertAtPosition(3, 2, head, tail);
       insertAtPosition(4, 3, head, tail);
       insertAtPosition(8, 1, head, tail);

       print(head);
       cout << endl;

       int pos;
       cout << "enter the position where we want to DELETE new node" << endl;
       cin >> pos;
       cout << "head" << head->data << endl;
       cout << "tail" << tail->data << endl;

       DeleteNode(head, tail, pos);
       cout << "head" << head->data << endl;
       cout << "tail" << tail->data << endl;

       print(head);
       cout << endl;
       return 0;
}