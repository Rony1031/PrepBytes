#include<bits/stdc++.h>
    using namespace std;

    #define ll long long

    ll dp[101][101][201];
    int n;

    ll arr[101];

    ll solve(int turn,int ind,int x){
    if(ind==n){
        return 0;
    }

    ll tempsum=0;

    ll val1=INT_MIN;
    ll val2=INT_MAX;

    if(dp[turn][ind][x]!=-1)
        return dp[turn][ind][x];

    for(int i=1;i<=2*x && (ind+i-1)<n;i++){
        tempsum=(tempsum+arr[ind+i-1]);
        if(turn%2==0){
            val1=max(val1,tempsum+solve(turn+1,i+ind,max(x,i)));
        }
        else{
            val2=min(val2,solve(turn+1,i+ind,max(x,i)));
        }
    }

    if(turn%2==0){
        return dp[turn][ind][x]=val1;
    }
    else
        return dp[turn][ind][x]=val2;
    }

    int main(){

    cin>>n;

    memset(dp,-1,sizeof(dp));

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solve(0,0,1);


    return 0;
    }