/*
BFS:-> Breadth First Search
It is a level order traversal of trees.


*/
#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void BFS(vector<int> adj[],int V){
	bool arr[V+1];
	for(int i=0;i<V;i++){
		arr[i]=false;
	}
	queue<int> q;
	int s=1;
	arr[s]=true;
	queue.push(s);
	
	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node<<" ";
		
		for(int i=0;i<adj[node].size();i++){
			if(arr[adj[node][i]]==false){
				arr[adj[node][i]]=true;
				
				q.push(adj[node][i]);
			}
		}
	}
	
	
}
