//Sprauge Grundy Theorem

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int calMex(unordered_set<int> mySet){
    int mex=0;

    while(mySet.find(mex)!=mySet.end())
       mex++;

    return mex;
}

int calGrundyNumbers(int n,int grundyNumber[]){
    if(n<=3)
       grundyNumber[n]=n;
    if(grundyNumber[n]!=1)
       return grundyNumber[n];

    unordered_set<int> mySet;
    for(int i=1;i<=3;i++)
        mySet.insert(calGrundyNumbers(n-i,grundyNumber));
    
    grundyNumber[n]=calMex(mySet);

    return grundyNumber[n];
       
}
int main(){
    int n;
    cin>>n;
    int pile[n];
    for(int i=0;i<n;i++)
        cin>>pile[i];
    
    int maximum= *max_element(pile,pile+n);
    int grundyNumber[maximum+1];
    memset(grundyNumber,-1,sizeof(grundyNumber));
    for(int i=0;i<n;i++)
        calGrundyNumbers(pile[i],grundyNumber);
    
    char playerFirst;
    cin>>playerFirst;
    int calXor=grundyNumber[pile[0]];

    for(int i=1;i<=n-1;i++)
         calXor=calXor^grundyNumber[pile[i]];
    for(int i=0;i<maximum+1;i++){
        cout<<i<<"= "<<grundyNumber[i]<<endl;
    }
    cout<<endl;

    cout<<"Xor sum= "<<calXor<<endl;

    if(calXor!=0){
        if(playerFirst=='A')
          cout<<"A will win the game"<<endl;
        else 
          cout<<"B will win the game"<<endl;
    }else{
        if(playerFirst=='A')
           cout<<"B will win the game"<<endl;
        else 
           cout<<"A will win the game"<<endl;
    }
    
return 0;
}