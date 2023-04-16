// create a  Circular single Linked list of given Length N.
// take all the data of Linked List from user and print the Linked List.

#include<iostream>
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
void print(Node *head)
{
      Node *temp = head;
      cout << temp->data << " ";
      temp = temp->next;


    while(temp!=head){
                cout << temp->data << " ";
                temp = temp->next;
    }
                
            
}
void takedataformuser(Node* currnode,int n){
      Node * prevnode =NULL;
      for(int i =0 ;i<n;i++){
            int data;
            cout<<"enter the node"<<i+1<<"value is :";
            cin>>data;

            if(i==0){
                  //pahle node ha 
                  currnode->data =data;
                  prevnode =currnode;
                  prevnode->next=currnode;
                

            
            //
            Node * temp =new Node(data);
            prevnode->next=temp;
            temp->next=currnode;
            prevnode =temp;

      }
}

int main(){
      int n;
      cout <<"enter the length of linklist"<<endl;
      cin>>n;
      //
      Node* head = new Node();

      takedataformuser(head,n);
      print(head);



    

      return 0;
}