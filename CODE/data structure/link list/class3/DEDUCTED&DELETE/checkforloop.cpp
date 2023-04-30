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
void print(Node *&head)
{
      Node *temp = head;
      while (temp != NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
}
// void insertathead(Node* &head,Node* &tail,int data){
//       if(head==NULL){
//             Node* newnode =new Node(data);
//             head=newnode;
//             tail=newnode;
//             return;
//       }
//       Node* newnode=new Node(data);
//       newnode->next=head;
//       head=newnode;

// }
bool checkForloop(Node *&head)
{
      if (head == NULL)
      {
            return false;
      }
      if (head->next == NULL)
      {
            return false;
      }

      //
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
            if(fast==slow){
                  return true;
            }
      }
      return false;
}
int main()
{
     
      Node *head = new Node(10);
      Node *first = new Node(20);
      Node *second = new Node(30);
      Node *third = new Node(40);
      Node *fourth = new Node(50);
      Node *fifth = new Node(60);
      Node *sixth = new Node(70);
      Node *seventh = new Node(80);
      Node *eight = new Node(90);
      head->next = first;
      first->next = second;
      second->next = third;
      third->next = fourth;
      fourth->next = fifth;
      fifth->next = sixth;
      sixth->next = seventh;
      seventh->next = eight;
      eight->next = third;
      cout<<"loop is present or not?? "<<checkForloop(head);
      

      // print(head);

      return 0;
}