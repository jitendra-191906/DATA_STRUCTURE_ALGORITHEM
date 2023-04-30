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
int findlength(Node *&head)
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

Node *reverseknode(Node *&head, int k)
{
      if (head == NULL)
      {
            cout << "linklist is empty" << endl;
            return NULL;
      }
      int l = findlength(head);
      if (k > l)
      {
            cout << "please enter valide k value" << endl;
            return head;
      }

      // reverse k nodes;
      Node *prev = NULL;
      Node *curr = head;
      Node *forward = curr->next;
     int  count = 0;
      while (count < k)
      {
            forward = curr->next;
            curr->next = prev;
            curr = prev;
            forward = curr;
            count++;
      }

      if(forward!=NULL){
            head->next=reverseknode(forward,k);
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
      head = reverseknode(head,3);
      print(head);
      cout << endl;
      return 0;
} 