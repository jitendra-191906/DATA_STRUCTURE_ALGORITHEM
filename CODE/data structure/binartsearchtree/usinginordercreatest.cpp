#include<iostream>
#include<queue>
using namespace std;
class Node{
      public:
      int data;
      Node* left;
      Node* right;
      Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;      }
};
Node* inseartintoBST(Node * root,int data){
      if(root==NULL){
            //create first nde
            root=new Node(data);
            return root;
      }
      if(root->data<data){
            //go to left
            root->left=inseartintoBST(root->left,data);
      }
      else{
            root->right=inseartintoBST(root->right,data);
      }
      return root;
}

void Takeinput(Node* root){
      int data;
      cin>>data;
      while(data!=-1){
            root=inseartintoBST(root,data);
            cin>>data;
      }
}

void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}
int main(){

   Node* root =NULL;
   cout<<"enter the data for node"<<endl;
   Takeinput(root);

   cout<<"printing the tree"<<endl;

   levelOrderTraversal(root);


      return 0;
}