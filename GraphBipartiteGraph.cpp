#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isBipartite(int **adj,int color[],int root,int nodes){
    color[root]=1;
    queue<int> q;
    q.push(root);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v=0;v<nodes;v++){
            if(adj[u][v]==1){
                if(color[v]==-1){
                    color[v]=1-color[u];
                    q.push(v);
                }
                else if(color[v]==color[u])
                   return false;
            }
        }
    }

    return true;
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    int *adj[nodes];
    for(int i=0;i<nodes;i++)
        adj[i]= new int [nodes];
    
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    int color[100005];
    memset(color,-1,sizeof color);
    if(isBipartite(adj,color,0,nodes)){
        cout<<"Graph is Bipartite\n";
    }else{
        cout<<"Graph is not Bipartite\n";
    }

return 0;
}