#include<bits/stdc++.h>
     using namespace std;

     #define ll long long

    ll dp[101][101];
    ll arr[101];
    int n,k;

    ll solve(int st,int end){

    if(dp[st][end]!=-1)
        return dp[st][end];

    ll sz=(end-st+1);
    ll diff=n-sz;

    diff=(diff)/k;
    //cout<<st<<" "<<end<<endl;

    if(diff%2==0){
        if(sz<=k){

            ll sum=0;
            for(int i=st;i<=end;i++){
                sum+=arr[i];
            }
            return dp[st][end]=sum;
        }
        else{
            ll val1=INT_MIN;

            for(int i=0;i<=k;i++){
                int cnt1=i,cnt2=k-i;
                int st1=st,end1=end;
                ll sum=0;
                while(cnt1){
                    sum+=arr[st1];
                    st1++;
                    --cnt1;
                }
                while(cnt2){
                    sum+=arr[end1];
                    --end1;
                    --cnt2;
                }
                val1=max(val1,sum+solve(st1,end1));
            }
            return dp[st][end]=val1;
        }

    }
    else{
        if(sz<=k){
            return dp[st][end]=0;
        }
        else{
            ll val2=INT_MAX;
            for(int i=0;i<=k;i++){
                int j=k-i;
                val2=min(val2,solve(st+i,(end-j)));
            }
            return dp[st][end]=val2;
        }
    }
    }

    int main(){

    cin>>n>>k;

    memset(dp,-1,sizeof(dp));

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<solve(0,n-1);

    return 0;
    }