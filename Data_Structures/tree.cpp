/*
1.	DIAMETER OF BINARY TREE
*/
int max(int a,int b){
	return (a>b)?a:b;
}
int height(Node *root){
	if(root==NULL) return 0;
	
	return 1+max(height(root->left),height(root->right));
}
int diameter(Node *root){
	if(root==NULL) return 0;
	int lheight=height(root->left);
	int rheight=height(root->right);
	
	int ld=diameter(root->left);
	int rd=diameter(root->right);
	
	return max(lheight+rheight+1,max(ld,rd));
	
}

/*
2. Convert a Binary Tree into its Mirror Tree
*/

void mirror(Node *node){
	if(node==NULL) return node;
	else{
	
	mirror(node->left);
	mirror(node->right);
	
	Node* temp;
	temp=node->left;
	node->left=node->right;
	node->right=temp;
}
}

/*
3. sum tree
*/
int sum(Node *root){
	if(root==NULL) return 0;
	return sum(root->left)+root->data+sum(root->right);
}
bool isSumtree(Node *root){
	if(root==NULL ||(root->left==NULL && root->right==NULL))
	return 1;
	int ls=sum(root->left);
	int rs=sum(root->right);
	if(root->data==ls+rs)&&isSumTree(root->left)&&isSum Tree(root->right)
   return 1;
	return 0;	
}

/*
4. Checking is two bst's contain same set of elements
*/
void Inorder(Node* root,vector<int> v){
	if(!root) return;
	Inorder(root->left,v);
	v.push_back(root->data);
	Inorder(root->right,v);
}
bool sameElement(Node* root1,Node* root2){
	if(root1==NULL&&root2==NULL) return 1;
	if(root1==NULL||root2==NULL) return 0;
	vector<int>v1,v2;
	Inorder(root1,v1);
	Inorder(root1,v2);
	return (v1==v2);
}

/*
5. check if two trees are identical
*/

bool isIdentical(Node* root1,Node* root2){
	if(root1==NULL&&root2==NULL) return 1;
	if(root1==NULL||root2==NULL) return 0;
	return (roo1->data==root2->data&&isIdentical(root1->left,root2->right)&&isIdentical(root1->right,root2->left));
	
}

/*
6. Find a pair with given sum in BST
*/
Node* insert(Node* root, int key) 
{ 
    if (root == NULL) 
        return NewNode(key); 
    if (key < root->data) 
        root->left = insert(root->left, key); 
    else
        root->right = insert(root->right, key); 
    return root; 
}
bool findPairUtil(Node *root,int sum,unordered_set<int>&set){
	if(root==NULL) return false;
	if(findPairUtil(root->left,sum,set));
	if(set.find(sum-root->data)!=set.end()){
		cout << "Pair is found ("
             << sum - root->data << ", "
             << root->data << ")" << endl; 
        return true; 
	}
	else{
		set.insert(root->data);
	}
	return findPairUtile(root->right,sum,set);
}
/*
7.Node remove half nodes
*/
Node *removehalf(Node* root){
	if(root==NULL) return;
	root->left=removehalf(root->left);
	root->right=removehalf(root->right);
	if(root->left&&!root->right) 
	  return root->left;
	if(!root->left&&root->right) 
	  return root->right;
return root;
}

/*
8.Check for bst
*/
int isBST(node *root){
	return(isBSTUtil(root,INT_MIN,INT_MAX));
}
int isBSTUtil(node *root,int min,int max){
	if(root==NULL)return 1;
	if(root->data<min||root->data>max) return 0;
	return isBSTUtil(root->left,min,node->data-1)&&isBSTUtil(root->right,node->data+1,max);
}


/*
9.SUM OF ALL NODES IN BINARY TREE
*/

long int sumBT(Node* root)
{
if(root==NULL) return 0;
return sumBT(root->left)+root->key+sumBT(root->right);
}

/*
10. Sum of all the parent nodes having child node x
*/

void sumOfParentOfX(Node* root, int& sum, int x) {
	if(!root) return;
	if((root->left && root->left->data==x)||(root->right&&root->right->data==x))
	sum+=root->data;
	sumOfParentOfX(root->left,sum,x);
	sumOfParentOfX(root->right,sum,x);
}

/*
11. Find sum of all left leaves in a given Binary Tree
*/
void leftLeafSum(Node *root, int *sum){
    if(!root)  
        return; 
  
    // check if the right child of root  
    // is leaf node 
    if(root->left) 
        if(!root->left->left  &&   
                     !root->left->right) 
            *sum += root->left->data; 
  
    leftLeafSum(root->left, sum); 
    leftLeafSum(root->right, sum); 
}
int leftLeavesSum(Node *root){ 
    int sum=0;
    leftLeafSum(root,&sum);
    return sum;
} 

/*
12. 
