#include<bits/stdc++.h>
using namespace std;


//Function to add edge
void addEdge(vector<int> adj[],int u,int v){
	adj[v].push_back(u);
	adj[u].push_back(v);
	
}



// print the graph
void printGraph(vector<int> adj[],int V){
	for(int v=0;v<V;v++){
	cout << "\n Adjacency list of vertex "
             << v << "\n head ";
	for(auto x:adj[v])
	  cout>>"->"<<x;
	printf("\n");
}




