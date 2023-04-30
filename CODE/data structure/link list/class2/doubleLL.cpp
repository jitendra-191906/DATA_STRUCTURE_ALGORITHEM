// create a DataType of Double linked list



#include <iostream>
using namespace std;
class Node
{
public:
     int data;
     // POINTER OF NEXT NODE;
     Node* prev;
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

int main()
{

     // CRAETE NODE 1
     Node *first = new Node();
     first->data = 30;

     // CRAETE NODE 1
     Node *second = new Node();
     second->data = 30;
     // make a link between node
     first->next = second;
     first->prev=NULL;
     second->prev=first;
     second->next = NULL;
     // verify using address
     cout << second->next << endl;
     cout << first << endl;

     // verifying using data
     cout << first->data << "  " << first->next->next->data << endl;

     return 0;
}