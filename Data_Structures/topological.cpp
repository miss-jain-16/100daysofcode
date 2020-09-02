//TOPOLOGICAL SORT

void Graph::topologicalSortUtil(int v, bool visited[], stack<int>& Stack) 
{
	visited[v]=true;
	for(int i=adj[v].begin();i<adj[v].end();i++){
		if(!visited[*i]){
			topologicalSortUtil(i,visited,stack);
		}
	}
	stack.push(v);
	
}
																

void Graph::topologicalSort(){
	stack<int>Stack;
	bool *visited=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	for(int i=0;i<V;i++){
		if(visited[i]==false)
		 totologicalSortUtil(i,visited,stack);
		 
	}
	while(stack.empty()==false){
		cout<<stack.top()<<"";
		stack.pop();
	}
}
