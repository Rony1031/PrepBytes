#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int callMex(unordered_set<int> mySet){
    int m=0;
    while(mySet.find(m)!=mySet.end())
       m++;
    
    return m;
}
int callGrundyNumber(int n){
    if(n==0)
        return 0;

    unordered_set<int> mySet;
    for(int i=0;i<=n-1;i++){
        mySet.insert(callGrundyNumber(i));
    }

    return callMex(mySet);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<callGrundyNumber(n)<<endl;
    }
    
return 0;
}