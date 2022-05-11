#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool adjMat[6][6];

void addEdge(int u,int v){
    adjMat[u][v]=true;
    adjMat[v][u]=true;
}

void printMat(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    for(int i=0;i<6;i++){
        int u,v;
        cin>>u>>v;
        addEdge(u,v);
    }
    printMat();
return 0;
}