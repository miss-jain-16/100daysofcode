/*
Given a Binary Tree and a Key. The task is to 
insert the key into the binary tree at first
position available in level order
*/
Node* newNode(int key) 
{ 
    Node* node = new Node; 
    node->key = key; 
    node->left = node->right = NULL; 
    return node; 
};
void insert(Node *node,int key){
	if(node==NULL)
	 return;
	queue<Node *>q;
	q.push(node);
	while(q.empty()){
		Node* node=q.front();
		q.pop();
		if(!node->left){
			node->left=newNode(key);
			break;
			}
		else
		 q.push(node->left);
		 if(!node->right)
		 {
		 	node->right=newNode(key);
		 	break;
		 }
		 else
		 q.push(node->right);
	}
}
