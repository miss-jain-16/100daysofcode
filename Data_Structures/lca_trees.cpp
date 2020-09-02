/*
Given a Binary Tree and the value of two 
nodes n1 and n2. The task is to find the
lowest common ancestor of the nodes n1 and n2
in the given Binary Tree.
*/
//STEP1:==>TO CALCULATE IF THERE IS WAY FROM ROOT NODE TO GIVEN ROOT OF THE TREE
bool findpath(Node* root,vector<int>&path,int k){
	if(rooot==NULL) return false;
	
	path.push_back(root->key);
	if(root->key==key) return true;
	if ((root->left && findPath(root->left, path, k)) || 
        (root->right && findPath(root->right, path, k)))
        return true;
 path.pop_back();
 retun false;
}
// Function to return LCA if node n1, n2 are
// present in the given binary tree, otherwise
// return -1
int findLca(Node *root,int n1,int n2){
	vector<int>p1,p2;
	if(!findpath(root,path1,n1)||!findpath(root,path2,n2))
	  return -1
	for(int i=0;i<path1.size()&&i<path2.size();i++)
	if(path1[i]!=path2[i])
	  break;
	return path[i-1];
}


