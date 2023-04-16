// You are Given a Double Linked List of any length.
// Find length of Double Linked List

// You are Given a Single Linked List of any length.
// Find length of Single Linked List

#include <iostream>
using namespace std;
class Node
{
public:
      int data;
      Node* prev;
      Node *next;
      Node()
      {
            this->data = 0;
            this->prev=NULL;
            this->next = NULL;
      }
      Node(int data)
      {
            this->data = data;
            this->prev=NULL;
            this->next = NULL;
      }
};
void Getlength(Node *head, int &len)
{
      Node *temp = head;
      while (temp != NULL)
      {
            temp = temp->next;
            len++;
      }
}
void print(Node *head)
{
      Node *temp = head;
      while (temp != NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
}
void InputUser(Node *currNode, int n)
{
      Node *preNode = NULL;

      for (int i = 0; i < n; i++)
      {
            int data;
            cout << "enter the value of Node " << i + 1 << ":";
            cin >> data;
            if (i == 0)
            {
                  currNode->data = data;
                  preNode = currNode;
            }
            else
            {
                  Node *temp = new Node(data);
                  preNode->next = temp;
                  preNode = temp;
            }
      }
}

int main()
{
      int n;
      cout << "enter the langth os LL" << endl;
      cin >> n;
      // create simple empty node
      Node *head = new Node();
      //
      InputUser(head, n);
      int len = 0;
      Getlength(head, len);
      cout << "size of linklist is" << len << endl;
      print(head);

      return 0;
}