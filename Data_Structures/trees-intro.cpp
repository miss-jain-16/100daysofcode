/*
TREE TRAVERSAL
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *left,*right;
	Node(int data){
		this->data=data;
		left=right=NULL;
	}
};
void inorder(Node* node){
	if(node==NULL)
	 return;
	 //for left
	inorder(node->left);
//	for root
	cout<<node->data<<" ";
// for right
 inorder(node->right);
}


void postorder(Node* node){
	if(node==NULL)
	 return;
//	 for left
postorder(node->left);
//for RIGHT
postorder(node->right);
//for root
cout<<node->data<<" ";
}

void levelorder(Node* root){
	if(root==NULL)
	  return;
	queue<Node *>q;
	q.push(root);
	while(q.empty()==false){
		Node *node=q.front();
		cout<<node->data<< " ";
		q.pop();
		if(node->left!=NULL)
		 q.push(node->left);
		if(node->right!=NULL)
		q.push(node->right);
	}
}

int main(){
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right = new Node(5); 
	cout<<"Inorder traversal\n";
	inorder(root);
	cout<<"levelorder\n";
	levelorder(root);
	
   
}
