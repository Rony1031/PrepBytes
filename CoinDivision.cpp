 #include <bits/stdc++.h>
      using namespace std;
    int n;
    int dp[40001][3];
    int solve(int i,int sum,int v[]){
        if(i==n)return 0;

        if(dp[i][sum]!=-1)return dp[i][sum];

        int ans=0;
        if((sum+solve(i+1,sum,v))%3==0){
            ans=solve(i+1,sum,v);
        }
        if((sum+v[i]+solve(i+1,(sum+v[i])%3,v))%3==0){
            ans=max(ans,v[i]+solve(i+1,(sum+v[i])%3,v));
        }

        return dp[i][sum]=ans;

    }


    int main()
    {  

    int t;
     cin>>t;
    while(t--)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0,arr)<<endl;
    } 
    return 0;
    }