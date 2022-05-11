#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void printList(vector<int> adj[],int nodes){
    for(int i=0;i<nodes;i++){
        cout<<"Adjacency list of node: "<<i<<" is: "<<"\n";
        for(auto ele: adj[i]){
            cout<<"-> "<<ele<<"\n";
        }
    }
}

void DFSRecur(vector<int> adj[],vector<bool> &visited,int u){
    visited[u]=true;
    cout<<u<<" ";
    for(int i=0;i<adj[u].size();i++){
        if(visited[adj[u][i]]==false)
            DFSRecur(adj,visited,adj[u][i]);
    }
}
void DFS(vector<int> adj[],int n){
    vector<bool> visited(n,false);
    int count=0;
    for(int i=0;i<n;i++){
         if(visited[i]==false){
         DFSRecur(adj,visited,i);
            count++;
            cout<<"\n";
    }
           
    }
    
    cout<<"The number of connected components = "<<count<<endl;
    if(count>1)
       cout<<"Disconnected Graph\n"<<endl;
    else
       cout<<"Connected Graph\n"<<endl;

}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;

    vector<int> adj[nodes];
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        addEdge(adj,u,v);
    }

    DFS(adj,nodes);
return 0;
}