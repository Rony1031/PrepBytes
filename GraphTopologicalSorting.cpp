#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void topologicalSorting(int **adj,int nodes,int u,int visited[], stack<int> &st){
    visited[u]=true;
    for(int i=0;i<nodes;i++){
        if(adj[u][i]==1 && visited[i]==0){
            topologicalSorting(adj,nodes,i,visited,st);
        }
    }
    st.push(u);
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    int visited[100005];
    memset(visited,0,sizeof visited);
    int *adj[nodes];

    for(int i=0;i<nodes;i++)
       adj[i]= new int[nodes];
    
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
    }

    stack<int> st;
    for(int i=0;i<nodes;i++){
        if(visited[i]==0)
            topologicalSorting(adj,nodes,i,visited,st);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
return 0;
}