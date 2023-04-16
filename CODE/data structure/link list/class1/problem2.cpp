// create a Single Linked List for size n.
// take data from user and insert it into nodes.
// You have to insert in this a way, take the first Input from user and put it into last Empty Node

// eg: n=4,
// input: 1  2  3  4
// output : 4  3  2  1
// explanation: i.e each new node added in left side
#include <iostream>
using namespace std;

class Node
{
public:
      int data;
      // POINTER OF NEXT NODE;
      Node *next;
      Node()
      {
            this->data = 0;
            this->next = NULL;
      }
      Node(int data)
      {
            this->data = data;
            this->next = NULL;
      }
};

void InputUser(Node *currNode, int n)
{
      // make a node for store previous pointer address
      Node *prevNode = NULL;
      for (int i = 0; i < n; i++)
      {
            int data_value;
            cout << "enter the data value for Node " << i + 1 << ":" << endl;
            cin >> data_value;

            // AGE FIRST NODE HO TO
            if (i == 0)
            {
                  currNode->data = data_value;
                  prevNode = currNode;
            }
            else
            {
                  // create anew node
                  Node *temp = new Node(data_value);
                  //

                  prevNode->next = temp;
                  prevNode = temp;
            }
      }
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
      int n;
      cout << "please enter a length of LL" << endl;
      cin >> n;

      // empty node
      Node *head = new Node();

      // Input node valur form user
      InputUser(head, n);

      // print linklist
      print(head);

      return 0;
}