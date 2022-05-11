#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int calLog(int n){
    return (n==1)?0: 1+calLog(n/2);
}

int minimax(int depth,int index,bool maxTurn,int values[],int height){
     if(depth==height)
        return values[index];
    if(maxTurn){
        int m1=minimax(depth+1,index*2,false,values,height);
        int m2=minimax(depth+1,index*2+1,false,values,height);

        return max(m1,m2);
    }else{
        return min(minimax(depth+1,index*2,true,values,height),minimax(depth+1,index*2+1,true,values,height));
    }
}
int main(){
    int n;
    cin>>n;
    int values[n];
    for(int i=0;i<n;i++)
      cin>>values[i];
    int height=calLog(n);
    int result=minimax(0,0,true,values,height);
    cout<<result<<endl;
return 0;
}