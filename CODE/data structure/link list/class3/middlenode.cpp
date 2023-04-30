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
Node *middlenodes(Node *head)
{
      if (head == NULL)
      {
            cout << "LL is empty" << endl;
            return head;
      }
      if (head->next == NULL)
      {

            return head;
      }
      //
      Node *slow = head;
      Node *fast = head->next;
      while (fast != NULL)
      {
            fast = fast->next;
            if (fast != NULL)
            {
                  fast = fast->next;
                  slow = slow->next;
            }
      }

      return slow;
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

      cout << "the middle node of ll is : " << middlenodes(head)->data << endl;

      return 0;
}