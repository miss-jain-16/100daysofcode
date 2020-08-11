/*
The diameter of a tree (sometimes called the width)
is the number of nodes on the longest
path between two end nodes. 
 */
 
 int height(Node *node){
 	if(node==NULL){
 		return 0;
	 }
	 return 1+max(height(node->left),height(node->right));
 }
int diameter(Node *node){
	if(node==NULL) return 0;
	int lh=height(node->left);
	int rh=height(node->right);
	
	int ld=diameter(node->left);
	int rd=diameter(node->right);
	
	return max(1+lh+rh,max(ld,rd));
}
 
