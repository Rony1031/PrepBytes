#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

bool isCycliConnected(vector<int> adj[],int s,int n,vector<bool> &visited){
    vector<int> parent(n,-1);
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v: adj[u]){
            if(!visited[v]){
                visited[v]=true;
                q.push(v);
                parent[v]=u;
            }
            else if(parent[u]!=v)
               return true;
        }

    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        addEdge(adj,u,v);
    }
    bool flag=false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i] && isCycliConnected(adj,i,n,visited)){
            flag=true;
            break;
        }
    }

    if(flag)
       cout<<"Yes"<<endl;
    else 
       cout<<"No"<<endl;
return 0;
}