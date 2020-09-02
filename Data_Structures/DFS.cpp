/*
DFS:-> Depth First Search
It is depth traversal algo
Use of stack in this
*/

void Graph::DFSUtile(int v,bool visited[]){
	visited[v]=true;
	cout<<v<<" "
	list<int>::iterator i;
	for( i=adj[v].begin();i!=adj[v].end();i++){
		if(!visited[*i])
		  DFSUtile(*i,visited);
	}
}

void Graph::DFS(int v){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
	  visited[i]=false;
	DFSUtile(v,visited[]);
}


