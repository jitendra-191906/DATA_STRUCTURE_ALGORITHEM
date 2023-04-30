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
      while (temp != NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
}
Node* reversenode(Node *&head)
{
      if (head == NULL)
      {
            cout << "linklist is empty" << endl;
            return NULL;
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
      return prev;
}
bool palidromecheck(Node *&head)
{
      if (head == NULL)
      {
            return true;
      }
      if (head->next == NULL)
      {
            return true;
      }
      // find middle nodes
      Node *slow = head;
      Node *fast = head;
      while (fast != NULL)
      {
            fast = fast->next;
            if (fast != NULL)
            {
                  fast = fast->next;
                  slow = slow->next;
            }
      }
      // here is slow node is the middle node
      // slow->next = reversenode(slow->next);

return true;
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

      return 0;
}