#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isValid(int **board,int row,int col,int n){
    for(int i=0;i<col;i++){
        if(board[row][i]==1)
           return false;
    }

    
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]==1)
          return false;
    }

    for(int i=row,j=col;j>=0 && i<n;i++,j--){
        if(board[i][j]==1)
          return false;
    }

  return true;
}

bool nQueen(int **board,int n,int col){
    if(col>=n)
      return true;
    
    for(int i=0;i<n;i++){
        if(isValid(board,i,col,n)){
            board[i][col]=1;
            if(nQueen(board,n,col+1))
               return true;
            
            board[i][col]=0;
        }

    }
    return false;
}

int main(){
    int n;
   cin>>n;
   int **board=new int *[n];
   for(int i=0;i<n;i++)
      board[i] = new int[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board[i][j]=0;
        }
          
    } 

    if(!nQueen(board,n,0)){
        cout<<"Solution Doesn't Exits"<<endl;
    }else{
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<board[i][j]<<" ";
          }
          cout<<endl;
        }
    }
return 0;
}