#include <iostream>
using namespace std;
class Node
{
public:
      int data;
      Node *prev;
      Node *next;
      Node()
      {
            this->data = 0;
            this->prev = NULL;
            this->next = NULL;
      }
      Node(int data)
      {
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
      }
};
int FindLength(Node* &head){
      int len=0;
      Node *temp = head;
      while(temp!=NULL){
            temp=temp->next;
            len++;
      }
      return len;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
      if (head == NULL)
      {
            Node *newnode = new Node(data);
            head = newnode;
            tail = newnode;
            return;
      }

      // craete node
      Node *newnode = new Node(data);
      // step 2
      newnode->next = head;
      // step 3
      head->prev = newnode;

      // STEP5
      head = newnode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
      if (head == NULL)
      {
            Node *newnode = new Node(data);
            head = newnode;
            tail = newnode;
            return;
      }

      Node * newnode = new Node(data);
      tail->next = newnode;
      newnode->prev=tail;
      tail=newnode;
}
 void insertAtPosition(Node* &head,Node* &tail, int data,int position){
      if(position==0){
            insertAtHead(head,tail,data);
            return;
      }
      int len = FindLength(head);
      if(position>=len){
            insertAtTail(head,tail,data);
            return;
      }

      //inseart in middle
      int i =0;
      Node *prevnode =head;
      while(i<position-1){
            prevnode=prevnode->next;
            i++;
      }
      Node* curr = prevnode->next;

      //create a node 
      Node * newnode = new Node(data);
      curr->prev=newnode;
      newnode->next =curr;

      newnode->prev= prevnode;
      prevnode->next =newnode;


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

int main()
{

      Node *first = new Node(20);
      Node *second = new Node(30);
      Node *third = new Node(40);
      Node *head = first;
      Node *tail = third;
      // doubly linklist

      first->next = second;
      second->prev = first;
      second->next = third;
      third->prev = second;

      // print(first);
      // cout << endl;
      insertAtHead(head, tail, 104);

      // cout << endl;
      // print(head);


      //  print(head);
      // cout << endl;
      insertAtTail(head, tail, 104);

      // cout << endl;
      // print(head);
      print(head);
      cout << endl;
      insertAtPosition(head, tail, 504,3);

      cout << endl;
      print(head);

      return 0;
}