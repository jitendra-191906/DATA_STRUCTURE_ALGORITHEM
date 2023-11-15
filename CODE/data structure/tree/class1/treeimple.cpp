#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
      int data;
      Node *left;
      Node *right;
      Node(int data)
      {
            this->data = data;
            left = NULL;
            right = NULL;
      }
};

Node *buildTree()
{
      // /base case
      int data;
      cout << "enter the data" << endl;
      cin >> data;
      if (data == -1)
      {
            return NULL;
      }
      else
      {
            Node *root = new Node(data);
            cout << "enter data for left node " << data << "node" << endl;
            root->left = buildTree();
            cout << "enter data for right node " << data << "node" << endl;

            root->right = buildTree();
            return root;
      }
}
void levelordertrasal(Node *root)
{
      queue<Node *> q;
      q.push(root);
      q.push(NULL);
      while (!q.empty())
      {            Node *temp = q.front();

            if(temp==NULL){
                  cout<<endl;
                  if(!q.empty()){
                        q.push(NULL);
                  }

            }
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                  q.push(temp->left);
            }
            if (temp->right)
            {
                  q.push(temp->right);
            }
      }
}

int main()
{
      Node *root = NULL;

      root = buildTree();
      levelordertrasal(root);
      return 0;
}