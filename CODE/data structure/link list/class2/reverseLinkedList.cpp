// You are given a Linked List of any length
// Reverse the given linked list
// eg:  LL = 1 2 3 4 5 6
// output:  6 5 4 3 2 1
// You have given a Linked List
// Check that given Linked List is Palindrome or Not
// eg:  LL = 10  20  30  20  10
// output : Yes, it is a Palindrome
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
};
void print(Node *head)
{
      Node *temp = head;
      while (temp !=NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
}
void reversenode(Node *&head)
{
      if (head == NULL)
      {
            cout << "linklist is empty" << endl;
            return;
      }
      Node *prev = NULL;
      Node *curr = head;
      Node *frw = curr->next;
      while (frw != NULL)
      {
            frw = curr->next;
            curr->next = prev;
            curr = prev;
            frw = curr;
      }
}
Node* reverse(Node *&head)
{
      if (head == NULL)
      {
            return head;
      }
      if (head->next == NULL)
      {
            return head;
      }
     

     Node* prev=NULL;
     Node* curr=head;
     Node* frw=curr->next;
     while(frw!=NULL){
         frw=curr->next;
         curr->next=prev;
         curr=prev;
         frw=curr;
     }
     return prev;
}
int main()
{
      Node *head = new Node(10);
      Node *first = new Node(20);
      Node *second = new Node(30);
      Node *third = new Node(40);
      Node *fourth = new Node(50);
      Node *fifth = new Node(60);

      head->next = first;
      first->next = second;
      second->next = third;
      third->next = fourth;
      fourth->next = fifth;
      fifth->next = NULL;

      print(head);
      cout << endl;
      cout<<"reverse linkilist is:"<<endl;
      reverse(head);
      head =print(head);
      cout<<endl;

      return 0;
}