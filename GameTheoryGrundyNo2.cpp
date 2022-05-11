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
    if(n<=3)
        return n;

    unordered_set<int> mySet;
    for(int i=1;i<=3;i++){
        mySet.insert(callGrundyNumber(n-i));
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