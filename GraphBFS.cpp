#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Graph{
   int v;  //number of nodes
   list<int> *adj; //Pointer to an array containing adjacency lists
public:
   Graph(int v){
       this->v=v;
       adj= new list<int> [v];
   }

   void addEdge(int u, int v);
   void printList(int nodes);
   
   void BFS(int v);
};

void Graph::addEdge(int u,int v){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void Graph::printList(int nodes){
    for(int i=0;i<nodes;i++){
        cout<<"Adjacency list of node: "<<i<<" is: "<<"\n";
        for(auto ele: adj[i]){
            cout<<"-> "<<ele<<"\n";
        }
    }
}

void Graph::BFS(int v){
    bool *visited= new bool[v];
    for(int i=0;i<v;i++)
        visited[i]=false;
    
    list<int> queue;
    visited[v]=true;
    queue.push_back(v);
    while(!queue.empty()){
        v=queue.front();
        cout<<v<<" ";
        queue.pop_front();
        for(auto ele: adj[v]){
            if(!visited[ele]){
                visited[ele]=true;
                queue.push_back(ele);
            }
        }
    }
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    Graph graph(nodes);

    for(int i=0;i<nodes;i++){
        int u,v;
        cin>>u>>v;
        graph.addEdge(u,v);
    }
    graph.BFS(0);
return 0;
}