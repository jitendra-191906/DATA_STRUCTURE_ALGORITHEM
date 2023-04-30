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
void circularlinklistornot(Node *&head)
{
      if (head == NULL)
      {
            return;
      }
      if (head->next == NULL)
      {
            return;
      }

      
      Node *slow = head;
      Node *fast = head->next;
      while (fast != slow)
      {
            fast = fast->next;
}
      if(fast==slow){
            cout<<"linlist is circular"<<endl;
      }
      else{
            cout<<"linkilist is not circular"<<endl;
      }
     
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
      eight->next = head;
      circularlinklistornot(head);
      

      // print(head);

      return 0;
}